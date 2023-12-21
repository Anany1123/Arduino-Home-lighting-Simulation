//Create the variables and assign pins to them
#include <SoftwareSerial.h> 
SoftwareSerial BTSerial(2, 3); // TX | RX  
char flag; 
int LED1 = 13;
int LED2 = 12;
int LED3 = 11;

void setup()
{
  // set the pins to output pins using pinMODE
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  //Serial.begin(9600); 
  while(!Serial);
    BTSerial.begin(9600);
   BTSerial.println("Hello WORLD");  
   //MyBlue.begin(9600);  
  //Serial.println("Ready to connect\nDefualt password is 1234 or 000");
}

void loop() 
 { 
 // while (Serial.available())
  while (BTSerial.available())
  { 
    //flag = Serial.read();
    flag = BTSerial.read();
    //Serial.write(flag);
    //Serial.println(flag); 
  
  if (flag == 'Z') 
  { 
    digitalWrite(LED1, HIGH); 
    //Serial.println("LED1 On"); 
  } 
  else if (flag == 'z') 
  { 
    digitalWrite(LED1, LOW); 
    //Serial.println("LED1 Off"); 
  } 

  if (flag == 'Y') 
  { 
    digitalWrite(LED2, HIGH); 
    //Serial.println("LED2 On"); 
  } 
  else if (flag == 'y') 
  { 
    digitalWrite(LED2, LOW); 
    //Serial.println("LED2 Off"); 
  } 
  if (flag == 'W') 
  { 
    digitalWrite(LED3, HIGH); 
    //Serial.println("LED3 On"); 
  } 
  else if (flag == 'w') 
  { 
    digitalWrite(LED3, LOW); 
    //Serial.println("LED3 Off"); 
  }
 } 
 //if (Serial.available()) BTSerial.write(Serial.read());
}
