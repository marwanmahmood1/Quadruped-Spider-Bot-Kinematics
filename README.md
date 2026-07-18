# 🕷️ 8-DOF Quadruped Spider Robot

A collaborative mechatronics project focused on the kinematics and physical construction of an 8-degree-of-freedom quadruped spider robot. 

### ⚙️ Hardware Architecture
This system was built around an **Arduino Nano** and controlled wirelessly via an **HC-05 Bluetooth module**. 
To handle the varying torque requirements of a walking quadruped, the mechanical joints were split into two actuator types:
*   **Knee Joints:** 4x MG90S Metal Gear Servos for higher torque and durability during weight-bearing movements.
*   **Hip Joints:** 4x SG90 Micro Servos for agile, lightweight rotational control.

### 👨‍💻 Team & My Contributions
While the software logic and physical chassis were collaborative efforts, my specific focus was on the electrical viability and hardware debugging of the system. My contributions included:
*   **Circuit Design & Wiring:** Engineered the electrical routing between the Arduino Nano, the HC-05 Bluetooth module, and the 8 actuators, ensuring stable power delivery across the varying torque loads of the MG90S and SG90 servos.
*   **Hardware Troubleshooting & Iteration:** Diagnosed and resolved critical hardware bottlenecks after an initial physical build failure, rewiring the circuits to ensure stable, load-bearing kinematics.

### 💻 The Code
The `.ino` files included in this repository contain the core logic used to drive the servo kinematics and parse the Bluetooth control signals.
