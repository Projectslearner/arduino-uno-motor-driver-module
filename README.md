# Motor Control with L298N Motor Driver Module

#### Project Overview

This project demonstrates motor control using the L298N motor driver module with an Arduino board. The L298N module allows control of two motors independently, enabling forward, reverse, and stop functionalities. This example showcases the operation of two motors, each connected to a pair of pins on the Arduino.

#### Components Needed

1. **Arduino Board**
2. **L298N Motor Driver Module**
3. **DC Motors (2x)**
4. **Power Supply (e.g., Battery Pack)**
5. **Jumper Wires**

### Block diagram



#### Pin Connections

- **Motor A:**
  - **Input 1 (IN1)**: Connect to Arduino pin 2
  - **Input 2 (IN2)**: Connect to Arduino pin 3

- **Motor B:**
  - **Input 3 (IN3)**: Connect to Arduino pin 4
  - **Input 4 (IN4)**: Connect to Arduino pin 5

#### Instructions

1. **Set Up the Circuit:**
   - Connect the L298N module to the Arduino following the specified pin connections.
   - Connect the DC motors to the output terminals of the L298N module.
   - Ensure the power supply is connected to the L298N module to power the motors.

2. **Initialize the System:**
   - Configure the Arduino pins connected to the L298N module as outputs using `pinMode()`.
   - Start serial communication at a baud rate of 9600 for monitoring.

3. **Control Motor Movement:**
   - In the `loop()` function, set the appropriate pins to control the direction of each motor.
   - For Motor A, set one input pin high and the other low to enable forward or reverse motion.
   - For Motor B, set the corresponding input pins accordingly.

4. **Stop Motors:**
   - After a specified duration of operation, stop both motors by setting all input pins low.

5. **Monitor Operation:**
   - Print status messages to the Serial Monitor to indicate the current motor movement or stop condition.

6. **Adjust Delays:**
   - Modify delay durations as needed to control the duration of motor operation and pauses between movements.

#### Applications

- **Robotics Projects:** Use the L298N module for motor control in robot platforms, such as wheeled or tracked robots.
- **Automated Systems:** Incorporate motor control for various automated systems, including conveyor belts, door locks, or window shutters.
- **Educational Demonstrations:** Showcase motor control principles in educational settings, teaching concepts of direction and speed control.

---

🌐 [projectslearner.com](https://www.projectslearner.com)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Made for you with ❣️ from ProjectsLearner