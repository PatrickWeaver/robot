/*
 Fading

 This example shows how to fade an LED using the analogWrite() function.

 The circuit:
 * LED attached from digital pin 9 to ground.

 Created 1 Nov 2008
 By David A. Mellis
 modified 30 Aug 2011
 By Tom Igoe

 http://www.arduino.cc/en/Tutorial/Fading

 This example code is in the public domain.

 */

int u = 4;
int l = 1;
int r = 2;
int d = 3;


int leftRed = 9;    // LED connected to digital pin 9
int leftGreen = 10;
int leftBlue = 11;

int rightRed = 6;
int rightGreen = 5;
int rightBlue = 3;

int dir;
int dt = 4000;

void setup() {
  // nothing happens in setup
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  digitalWrite(1, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  delay(dt);
  digitalWrite(1, LOW);
  digitalWrite(3, LOW);
  digitalWrite(9, LOW);

  digitalWrite(2, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  delay(dt);
  digitalWrite(2, LOW);
  digitalWrite(6, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  
  /*
  // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(leftRed, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(rightRed, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(leftGreen, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(rightGreen, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(leftBlue, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(rightBlue, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(leftGreen, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(rightGreen, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(leftRed, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(rightRed, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(leftBlue, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(rightBlue, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
  */
  /*
  delay(100);
  digitalWrite(dir, LOW);
  dir += 1;
  if (dir > 4) {
    dir = 1;
  }
  */

}


