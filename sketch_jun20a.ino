#include <Servo.h>
 
Servo myservo1; 
Servo myservo2;
Servo myservo3;
Servo myservo4;
int pos = 0;    
 
void setup() {
  myservo1.attach(10);
  myservo2.attach(9); 
  myservo3.attach(6);
  myservo4.attach(5);
}
 
void loop() {
  for (pos = 0; pos <= 180; pos += 1) 
    myservo1.write(pos);
    myservo2.write(pos);
    myservo3.write(pos);
    myservo4.write(pos);
    delay(1000);                       
  
  for (pos = 180; pos >= 0; pos -= 1) 
    myservo1.write(pos);
    myservo2.write(pos);
    myservo3.write(pos);
    myservo4.write(pos);
    delay(1000);       
  
}
