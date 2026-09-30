const unsigned long BLINK_INTERVAL = 1000;

unsigned long previousMillis = 0;
bool ledState = LOW;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= BLINK_INTERVAL) {
    previousMillis = currentMillis;

    ledState = !ledState;
    digitalWrite(LED_BUILTIN, ledState);
  }
}
