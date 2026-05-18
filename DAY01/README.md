# STM32 Day 1 – LED Blink using GPIO (Wokwi Simulation)

## 📌 Overview

This project demonstrates the basic GPIO (General Purpose Input/Output) operation in STM32 using the NUCLEO C031C6 board. The objective was to understand digital output control by blinking an LED at a fixed interval.

The project was implemented and tested in Wokwi simulation.

---

## 🧰 Components Used

* STM32 NUCLEO C031C6 Board
* LED
* Resistor (220Ω / 330Ω)
* Wokwi Simulator

---

## ⚙️ Working Principle

The STM32 microcontroller controls an external LED connected to digital pin `D13`.

* LED turns ON for 1 second
* LED turns OFF for 1 second
* Process repeats continuously

This demonstrates the basic functionality of GPIO output in STM32.

---

## 🔌 Connections

| Component | STM32 Pin              |
| --------- | ---------------------- |
| LED (+)   | D13                    |
| LED (-)   | GND (through resistor) |

Connection Flow:

```text
D13 → LED → Resistor → GND
```

## Simulation Link
https://wokwi.com/projects/464381503669444609

---

## 🚀 Key Insight

Unlike Arduino, STM32 uses more advanced pin architecture and supports professional embedded development with better peripheral control and processing capability.

---

## ✅ Conclusion

This project successfully demonstrated basic GPIO operation in STM32 using LED blinking. It serves as the foundation for learning peripherals, sensors, and advanced embedded systems in STM32 development.

---
