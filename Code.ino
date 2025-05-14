// Define pin numbers — constants don't change. Be precise from the start.
const int buttonPin = 2;     // Pin where the button is connected
const int ledPin = 13;       // Pin where the LED is connected (built-in LED on many Arduinos)

// Variable to store button state (pressed or not pressed)
int buttonState = 0;

void setup() {
  // Set pin modes — INPUT for button, OUTPUT for LED
  pinMode(ledPin, OUTPUT);         // Set LED pin as output
  pinMode(buttonPin, INPUT);       // Set button pin as input
}

void loop() {
  // Read the current state of the button
  buttonState = digitalRead(buttonPin);  // HIGH = pressed, LOW = not pressed

  // Decide what to do based on button state
  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);   // Turn LED ON if button is pressed
  } else {
    digitalWrite(ledPin, LOW);    // Turn LED OFF if button is not pressed
  }

  // No delay — this loop is running as fast as your Arduino can handle it.
  // That’s fine here, but in more advanced projects, debounce logic or delays might be needed.
}
