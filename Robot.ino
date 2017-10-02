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


int lR = 9;    // LED connected to digital pin 9
int lG = 10;
int lB = 11;

int rR = 3;
int rG = 5;
int rB = 6;

int dir;
int dt = 4000;

void setup() {
  // nothing happens in setup
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(rR, OUTPUT); // Pin 3
  pinMode(4, OUTPUT);
  pinMode(rG, OUTPUT); // Pin 5
  pinMode(rB, OUTPUT); // Pin 6
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(lR, OUTPUT); // Pin 9
  pinMode(lG, OUTPUT); // Pin 10
  pinMode(lB, OUTPUT); // Pin 11
  pinMode(12, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(digitalRead(12));
  if (digitalRead(12) != 1) {
    digitalWrite(4, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(rR, HIGH);
    digitalWrite(rG, HIGH);
    digitalWrite(lB, HIGH);
    tone(13, 170, dt);
    
    delay(dt);

    digitalWrite(4, LOW);
    digitalWrite(7, LOW);
    digitalWrite(rG, LOW);
    digitalWrite(lB, LOW);
  }
  
  if (digitalRead(12) != 1){
    digitalWrite(2, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(lG, HIGH);
    tone(13, 220, dt);
    
    delay(dt);
    
    digitalWrite(2, LOW);
    digitalWrite(8, LOW);
    digitalWrite(rR, LOW);
    digitalWrite(lG, LOW);
  }

  for (int i= 0; i < 12; i++) {
    digitalWrite(i, LOW);
  }

  delay(50);
}


