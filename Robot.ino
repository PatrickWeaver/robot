int y = 2;
int b = 4;
int g = 7;
int w = 8;

int lR = 9;
int lG = 10;
int lB = 11;
int lEye[3] = {lR, lG, lB};

int rR = 3;
int rG = 5;
int rB = 6;
int rEye[3] = {rR, rG, rB};

int speaker = 13;

int forwardSensor = 0;
int rotation = 0; // 0 is Clockwise, 1 is CounterClockwise

void cw(){
  digitalWrite(g, HIGH);
}

void ccw(){
  digitalWrite(b, HIGH);
}

void turn(int turnDirection){
  cw();
  delay(500);
}

void forwardish(){
  digitalWrite(y, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  delay(250);
}

void off(){
  digitalWrite(y, LOW);
  digitalWrite(b, LOW);
  digitalWrite(g, LOW);
  digitalWrite(w, LOW);
}

void setup() {
  Serial.begin(9600);
  
  pinMode(y, OUTPUT);      // Pin 2
  pinMode(rR, OUTPUT);     // Pin 3
  pinMode(b, OUTPUT);      // Pin 4
  pinMode(rG, OUTPUT);     // Pin 5
  pinMode(rB, OUTPUT);     // Pin 6
  pinMode(g, OUTPUT);      // Pin 7
  pinMode(w, OUTPUT);      // Pin 8
  pinMode(lR, OUTPUT);     // Pin 9
  pinMode(lG, OUTPUT);     // Pin 10
  pinMode(lB, OUTPUT);     // Pin 11
  pinMode(speaker, OUTPUT); // Pin 13

  delay(2000);
}

void loop() {
  int distance = analogRead(forwardSensor);
  
  if (distance > 40) {
    forwardish();
    
  } else {
    turn(rotation);
    
  }
  
  off();
}


