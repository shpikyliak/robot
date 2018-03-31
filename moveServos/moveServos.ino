#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;
Servo servo7;
Servo servo8;

void setup() {
  
  pinMode(13, OUTPUT);     
  
  servo1.attach(5);
  servo2.attach(4);
  servo3.attach(0);
  servo4.attach(2);
  servo5.attach(14);
  servo6.attach(12);
  servo7.attach(13);
  servo8.attach(15);
 
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  servo5.write(0);
  servo6.write(0);
  servo7.write(0);
  servo8.write(0);

  delay(100);
  
}


void loop() {
  
  
}

void move() {
    digitalWrite(13, LOW);   

  for (int i=0; i <= 10; i++){
       servo1.write(0);
       delay(100);
       servo2.write(0); 
       delay(100);
       servo3.write(0);
       delay(100);
       servo4.write(0); 
       delay(100);
       
       servo4.write(60);
       delay(100);
       servo3.write(60); 
       delay(100);
       servo2.write(60);
       delay(100);
       servo1.write(60); 
       delay(100);   
  }
}
