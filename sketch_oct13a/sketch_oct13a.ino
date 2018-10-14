#include <Servo.h>           //include servo library

Servo servo1;                // creating servo object
int joystick_x = A0;              // joystick x direction pin                                          
int testgit = 0;                                                      
int pos_x;                   // declaring variable to stroe horizontal value

int servo1_pos=90;          // storing servo position

void setup ( ) 
{
Serial.begin (9600) ;
servo1.attach (10) ;          // servo 1 attached pin
  
pinMode (joystick_x, INPUT) ;                     
                 
}

void loop ( ) 
{
pos_x = analogRead (joystick_x) ;  

if (pos_x <300)  {          //if the horizontal value from joystick is less than 300

  servo1.write(140);      //first servo moves right
}  

 
else if (pos_x > 700){

  servo1.write(40);
}   
else
  {
  
  servo1.write ( servo1_pos ) ;
  delay (100) ;
  }
  Serial.println(servo1_pos);
  Serial.println(" ");
  }
