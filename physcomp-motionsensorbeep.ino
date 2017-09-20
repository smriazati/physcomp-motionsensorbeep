/* 
	if there is a signal from PIR, send a sine signal (tone) to piezo
	PIR is pin 7, output
	Piezo is pin 9, input
*/

int pirPin = 7;
int piezoPin = 9;
int val = 0;

void setup() {
	pinMode(piezoPin, OUTPUT); // sets digital pin 9 as OUTPUT for sound
	pinMode(pirPin, INPUT); // sets digital pin 7 as INPUT for IR info
}

void loop() {
  val = digitalRead(pirPin); // read the input pin, set to HIGH or LOW
  if (val = HIGH) {
    tone(piezoPin, 400, 200);
    delay(1000);
    noTone;
  }
}