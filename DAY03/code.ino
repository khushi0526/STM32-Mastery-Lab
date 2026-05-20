#define ledPin D13
#define buttonPin D2
bool ledState = LOW;
bool lastButtonState = HIGH;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  bool buttonState = digitalRead(buttonPin);
  if (lastButtonState == HIGH && buttonState == LOW) {
    ledState = !ledState; 
    digitalWrite(ledPin, ledState);
    delay(200); 
  }
  lastButtonState = buttonState;
}
