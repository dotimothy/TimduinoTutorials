#include <WiFi.h>
#include <WebServer.h>

const char* ssid = "ESP32-AP"; 
const char* password = NULL; // Open network

WebServer server(80);

const int ledPin = 2; 

const char* index_html = 
  "<html>"
  "<head>"
  "  <meta charset=\"utf-8\">"
  "  <title>ESP32 LED Control</title>"
  "</head>"
  "<body>"
  "  <h1>ESP32 Web Server</h1>"
  "  <p>LED Control</p>"
  "  <a href=\"/?action=on\"><button>Turn ON</button></a>"
  "  <a href=\"/?action=off\"><button>Turn OFF</button></a>"
  "</body>"
  "</html>";

void handleRoot() {
  String action = server.arg("action"); 

  if (action == "on") {
    digitalWrite(ledPin, HIGH); 
    Serial.println("LED turned ON");
  } else if (action == "off") {
    digitalWrite(ledPin, LOW); 
    Serial.println("LED turned OFF");
  }

  server.send(200, "text/html", index_html); 
}

void setup() {
  pinMode(ledPin, OUTPUT); 
  digitalWrite(ledPin, LOW); 

  Serial.begin(115200);

  WiFi.softAP(ssid, password); 

  IPAddress IP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(IP);

  server.on("/", handleRoot); 

  server.begin();
  Serial.println("HTTP server started");
}

void loop() {
  server.handleClient();
}