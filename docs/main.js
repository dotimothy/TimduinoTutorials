var title = 'Welcome to Timduino Tutorials for the Arduino Uno!';
var i = 0;
function typeTitle() {
	if(i < title.length) {
		document.getElementById("Title").innerHTML += title.charAt(i);
		i++;
		setTimeout(typeTitle, 75);
	}
}

function playAudio(name) {
	var audio = new Audio('https://github.com/dotimothy/TimduinoTutorials/raw/master/media/' + name + '.mp3');
	audio.play();
	if(name == "background") {
		audio.loop = true;
	}
}

function clickButton(name) {
	var button = document.getElementById(name).click();
}

function body() {
	setTimeout(typeTitle, 775);
	setTimeout(clickButton, 525, 'typing');
	setTimeout(clickButton, 6000, 'background');
}
