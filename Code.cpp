int ledPins[6] = {12, 11, 10, 9, 8, 7}; //Array of LED pins using

void setup() {

  for (int i = 0; i < 6 ; i++) { //for loop to make all 6 pins as outputs
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {

  for (int j = 0; j < 6; j++) { //for loop to make them all one by one turn on and off
    digitalWrite(ledPins[j], HIGH);
    delay(500);
    digitalWrite(ledPins[j], LOW);
    delay(500);
  }
}
