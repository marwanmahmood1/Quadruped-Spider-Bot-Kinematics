#include <Servo.h>

Servo FR_Hip, FR_Knee;
Servo FL_Hip, FL_Knee;
Servo BR_Hip, BR_Knee;
Servo BL_Hip, BL_Knee;

#define t 1
char cmd;

void setup() {
  Serial.begin(9600);

  FR_Hip.attach(2);
  FR_Knee.attach(3);

  FL_Hip.attach(4);
  FL_Knee.attach(5);

  BR_Hip.attach(6);
  BR_Knee.attach(7);

  BL_Hip.attach(8);
  BL_Knee.attach(9);

  FR_Hip.write(90); FR_Knee.write(95);
  FL_Hip.write(90); FL_Knee.write(89);
  BR_Hip.write(90); BR_Knee.write(91);
  BL_Hip.write(90); BL_Knee.write(90);

  delay(300);
}

void loop() {

  if (Serial.available()) {
    cmd = Serial.read();
  }

  // ===================== Forward =====================
  if (cmd == 'F') {
  // Back Left
    for (int i = 90; i <= 150; i++) {
      BL_Knee.write(i);
      delay(t);
    }
    for (int i = 90; i <= 150; i++) {
      BL_Hip.write(i);
      delay(t);
    }
    for (int i = 150; i >= 90; i--) {
      BL_Knee.write(i);
      delay(t);
    }
    for (int i = 150; i >= 90; i--) {
      BL_Hip.write(i);
      delay(t);
    }
    delay(500);
    // Back Right
    for (int i = 90; i >= 30; i--) {
      BR_Knee.write(i);
      delay(t);
    }
    for (int i = 90; i >= 30; i--) {
      BR_Hip.write(i);
      delay(t);
    }
    for (int i = 30; i <= 90; i++) {
      BR_Knee.write(i);
      delay(t);
    }
    for (int i = 30; i <= 90; i++) {
      BR_Hip.write(i);
      delay(t);
    }


  
delay(500);
    cmd = '\0';
  }

  // ===================== Backward =====================
  if (cmd == 'B') {
 // Front Left
    for (int i = 90; i <= 150; i++) {
      FL_Knee.write(i);
      delay(t);
    }
    for (int i = 90; i >= 30; i--) {
      FL_Hip.write(i);
      delay(t);
    }
    for (int i = 150; i >= 90; i--) {
      FL_Knee.write(i);
      delay(t);
    }
    for (int i = 30; i <= 90; i++) {
      FL_Hip.write(i);
      delay(t);
    }
delay(500);
    // Front Right
    for (int i = 90; i >= 30; i--) {
      FR_Knee.write(i);
      delay(t);
    }
    for (int i = 90; i <= 150; i++) {
      FR_Hip.write(i);
      delay(t);
    }
    for (int i = 30; i <= 90; i++) {
      FR_Knee.write(i);
      delay(t);
    }
    for (int i = 150; i >= 90; i--) {
      FR_Hip.write(i);
      delay(t);
    }
    delay(500);
      cmd = '\0';

  }
if (cmd == 'L') {

    //  lift
    for (int i = 90; i >= 30; i--) {
      FR_Knee.write(i);
      delay(t);
    }
    for (int i = 90; i <= 150; i++) {
      FR_Hip.write(i);
      delay(t);
    }
    for (int i = 30; i <= 90; i++) {
      FR_Knee.write(i);
      delay(t);
    }
    for (int i = 150; i >= 90; i--) {
      FR_Hip.write(i);
      delay(t);
    }
    delay(500);
    cmd = '\0';

}
if (cmd == 'R')
{
   //  right
    for (int i = 90; i <= 150; i++) {
      FL_Knee.write(i);
      delay(t);
    }
    for (int i = 90; i >= 30; i--) {
      FL_Hip.write(i);
      delay(t);
    }
    for (int i = 150; i >= 90; i--) {
      FL_Knee.write(i);
      delay(t);
    }
    for (int i = 30; i <= 90; i++) {
      FL_Hip.write(i);
      delay(t);
    }
    delay(500);
     cmd = '\0';

 }
if (cmd == 'D')
{
       FL_Knee.write(60); 
       FR_Knee.write(150); 
       BR_Knee.write(150); 
       BL_Knee.write(60);
       delay(500); 
  }
  if (cmd == 'U')
{
       FL_Knee.write(90); 
       FR_Knee.write(90); 
       BR_Knee.write(90); 
       BL_Knee.write(90);
       delay(500); 
  }
   if (cmd == 'Y')
{
       FL_Knee.write(135); 
       FR_Knee.write(45); 
       BR_Knee.write(45); 
       BL_Knee.write(135);
       delay(500); 
  }
  if (cmd == 'H')
{
  FR_Hip.write(90); FR_Knee.write(95);

  FL_Hip.write(90); FL_Knee.write(89);
 
  BR_Hip.write(90); BR_Knee.write(91);
  
  BL_Hip.write(90); BL_Knee.write(90);
   
  for (int i = 95; i <= 150; i++) {
      FR_Knee.write(i);
      delay(20);
    }
 for (int i = 150; i >= 95; i--) {
      FR_Knee.write(i);
      delay(20);
    } 
  for (int i = 95; i <= 150; i++) {
      FR_Knee.write(i);
      delay(20);
    }
 for (int i = 150; i >= 95; i--) {
      FR_Knee.write(i);
      delay(20);
    } 
         cmd = '\0';

  
  }  
  
if (cmd == 'J')
{
       FL_Knee.write(60);
       delay(500); 
       FR_Knee.write(150);
       delay(500); 
       BR_Knee.write(150);
       delay(500); 
       BL_Knee.write(60); 
       delay(1500);
       FL_Knee.write(135); 
       delay(500);
       FR_Knee.write(45);
       delay(500); 
       BR_Knee.write(45);
       delay(500); 
       BL_Knee.write(135); 
       delay(1500);
       

 FR_Hip.write(90); FR_Knee.write(95);
 delay(500);
  FL_Hip.write(90); FL_Knee.write(89);
  delay(500);
  BR_Hip.write(90); BR_Knee.write(91);
  delay(500);
  BL_Hip.write(90); BL_Knee.write(90);
  delay(500);

  }  
  
}
