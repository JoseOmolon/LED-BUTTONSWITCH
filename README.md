# Button-Controlled LED – Leveling Up From the Blink

This project is the next step in my embedded systems journey. No more passive blinking — now **I control** when the light turns on. Press the button, light turns on. Release it, light turns off. It’s basic logic, but it’s a crucial leap: input meets output.

## 🧭 Why I'm Doing This

I’m not here to be a hobbyist. I’m here to build mastery from the ground up. That means understanding how **input devices** (like buttons) interact with **output devices** (like LEDs), through code, hardware, and logic. No guessing. No copy-paste culture. Just earned knowledge.

### ⚠️ Hard Truths From This Build
- **Inputs are noisy.** Buttons bounce. If you think you can read them clean without knowing what debounce is, you’re wrong.
- **DigitalRead isn’t magic.** It’s logic level detection. Know your HIGHs and LOWs, or get lost in the fog.
- **Power flows, but only if you wire it right.** Reverse the button wiring? Expect nothing but silence.

## 🔩 Parts I Used

![](Componentsparts.png)

- 1x Arduino Uno
- 1x Push Button
- 1x LED (any color, I used red)
- 1x 220Ω Resistor for LED
- Jumper wires
- Breadboard

## 📈 Schematics

![](Schematics.png)

## 🛠️ Wiring It Up

![](ComponentsAssembly.gif)

- Button connected to **digital pin 2**
- LED connected to **digital pin 13** through a resistor
- Use **pull-down** or **internal pull-up** resistor logic (I used default input without internal pullup for now)

## 🧠 My Code
This is the brain of it all. A simple input-to-output reaction chain:
```cpp
const int buttonPin = 2;
const int ledPin = 13;

int buttonState = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  
  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
