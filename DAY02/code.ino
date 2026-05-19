#define ledPin D13
#define buttonPin D2

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {

  int buttonState = digitalRead(buttonPin);

  // Button pressed
  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH);
  }

  // Button released
  else {
    digitalWrite(ledPin, LOW);
  }
}
