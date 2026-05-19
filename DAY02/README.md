# STM32 Day 2 – Push Button LED Control (Wokwi Simulation)

## 📌 Overview

This project demonstrates GPIO input and output operations in STM32 using a push button and LED. The objective was to understand how a microcontroller reads digital input signals and controls an output device based on user interaction.

The project was implemented and tested using the STM32 NUCLEO C031C6 board in Wokwi simulation.

---

## Simulation Link
https://wokwi.com/projects/464468690404777985

---

## ⚙️ Working Principle

The STM32 reads the push button state using digital input.

* When the button is pressed → LED turns ON
* When the button is released → LED turns OFF

The button is configured using `INPUT_PULLUP`, eliminating the need for an external pull-up resistor.

---

## 🔌 Connections

### LED Connection

| Component | STM32 Pin              |
| --------- | ---------------------- |
| LED (+)   | D13                    |
| LED (-)   | GND (through resistor) |

### Push Button Connection

| Push Button | STM32 Pin |
| ----------- | --------- |
| One Side    | D2        |
| Other Side  | GND       |

Connection Flow:

```text id="vkrb9j"
D13 → LED → Resistor → GND

D2 → Push Button → GND
```

---

## 💻 Code Explanation

* `pinMode(ledPin, OUTPUT)` → Configures LED pin as output
* `pinMode(buttonPin, INPUT_PULLUP)` → Configures button pin with internal pull-up resistor
* `digitalRead()` → Reads button state
* `digitalWrite()` → Controls LED state

Since `INPUT_PULLUP` is used:

| Button State | Reading |
| ------------ | ------- |
| Pressed      | LOW     |
| Released     | HIGH    |

---

## 🧠 Learning Outcomes

* Understanding GPIO input and output
* Push button interfacing
* Internal pull-up resistor concept
* Digital signal processing in STM32

---

## 🚀 Key Insight

In embedded systems, buttons are commonly connected using pull-up or pull-down resistors to prevent floating signals. STM32 provides an internal pull-up feature, simplifying circuit design.

---

## ✅ Conclusion

This project successfully demonstrated digital input handling and LED control using STM32 GPIO. It serves as a foundation for learning button logic, interrupts, and real-world embedded system interaction.

---
