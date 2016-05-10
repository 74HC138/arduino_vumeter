// VU meter for Arduino Mega
// put LED on pin 2 to 11 (10 LEDs)
// conect pin 12 to ground
// if you conect pin 12 to 5V it will start a testmode
// conect a audio input to analog pin 0
// conct a potentiometer on analog pin 5 (one side to plus, one side to ground)
// you can adjust the multiplier with that
// its nice to have, when your audiosignal is very low
// then you are ready
// play some music and see the LEDs light up
// have fun with this
// you can adjust the outputpins for the LEDs there

int ledA = 2;
int ledB = 3;
int ledC = 4;
int ledD = 5;
int ledE = 6;
int ledF = 7;
int ledG = 8;
int ledH = 9;
int ledI = 10;
int ledJ = 11;
int testMode = 12;
int multiPlikator = A5;
int audioIn = A0;
int valA;
int valB;
int audio;
void setup() {
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledC, OUTPUT);
  pinMode(ledD, OUTPUT);
  pinMode(ledE, OUTPUT);
  pinMode(ledF, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledH, OUTPUT);
  pinMode(ledI, OUTPUT);
  pinMode(ledJ, OUTPUT);
  pinMode(testMode, OUTPUT);
  pinMode(multiPlikator, OUTPUT);
  pinMode(audioIn, OUTPUT);
  if (digitalRead(testMode) == HIGH) {
    digitalWrite(ledA, HIGH);
    digitalWrite(ledB, HIGH);
    digitalWrite(ledC, HIGH);
    digitalWrite(ledD, HIGH);
    digitalWrite(ledE, HIGH);
    digitalWrite(ledF, HIGH);
    digitalWrite(ledG, HIGH);
    digitalWrite(ledH, HIGH);
    digitalWrite(ledI, HIGH);
    digitalWrite(ledJ, HIGH);
    delay(5000);
    digitalWrite(ledA, LOW);
    digitalWrite(ledB, LOW);
    digitalWrite(ledC, LOW);
    digitalWrite(ledD, LOW);
    digitalWrite(ledE, LOW);
    digitalWrite(ledF, LOW);
    digitalWrite(ledG, LOW);
    digitalWrite(ledH, LOW);
    digitalWrite(ledI, LOW);
    digitalWrite(ledJ, LOW);
  }
}

void loop() {
  valA = analogRead(multiPlikator);
  valB = analogRead(audioIn);
  audio = valB * (valA / 100);
  if (1 * (1023 / 10) < audio) {
    digitalWrite(ledA, HIGH);
  } else {
    digitalWrite(ledA, LOW);
  }
  if (2 * (1023 / 10) < audio) {
    digitalWrite(ledB, HIGH);
  } else {
    digitalWrite(ledB, LOW);
  }
    if (3 * (1023 / 10) < audio) {
    digitalWrite(ledC, HIGH);
  } else {
    digitalWrite(ledC, LOW);
  }
  if (4 * (1023 / 10) < audio) {
    digitalWrite(ledD, HIGH);
  } else {
    digitalWrite(ledD, LOW);
  }
    if (5 * (1023 / 10) < audio) {
    digitalWrite(ledE, HIGH);
  } else {
    digitalWrite(ledE, LOW);
  }
  if (6 * (1023 / 10) < audio) {
    digitalWrite(ledF, HIGH);
  } else {
    digitalWrite(ledF, LOW);
  }
    if (7 * (1023 / 10) < audio) {
    digitalWrite(ledG, HIGH);
  } else {
    digitalWrite(ledG, LOW);
  }
  if (8 * (1023 / 10) < audio) {
    digitalWrite(ledH, HIGH);
  } else {
    digitalWrite(ledH, LOW);
  }
    if (9 * (1023 / 10) < audio) {
    digitalWrite(ledI, HIGH);
  } else {
    digitalWrite(ledI, LOW);
  }
  if (10 * (1023 / 10) < audio) {
    digitalWrite(ledJ, HIGH);
  } else {
    digitalWrite(ledJ, LOW);
  }
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
