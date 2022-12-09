/*
  Hey Guys! Welcome to RENU ROBOTICS
  This is a Simple Project
  Bluetooth Home Automation(Prototype)r
  Hope you Like It!! 
*/

#include <SoftwareSerial.h>//Declaring the Libraryr

SoftwareSerial mySerial (2 , 3); //(RX , TX) Pins of HC-05 Bluetooth Module

#define s1 7 // Defining LED1
#define s2 8 // Defining LED2
#define s3 9 // Defining LED3
#define s4 10 // Defining Relay

void setup()
{
  pinMode(s1,OUTPUT); // Setting up LED1 as OUTPUT
  pinMode(s2,OUTPUT); // Setting up LED2 as OUTPUT
  pinMode(s3,OUTPUT); // Setting up LED3 as OUTPUT
  pinMode(s4,OUTPUT); // Setting up Relay as OUTPUT
  digitalWrite(s4,HIGH); // Turning off the Relay

  Serial.begin(9600); // Beginning the Serial monitor
  mySerial.begin(9600); // Beginning the HC-05 Module
}

void loop()
{
  if(mySerial.available()==1)
  {
    char val = mySerial.read();
    Serial.println(val);
    if(val == 'A')
    {
      digitalWrite(s1,HIGH);
    }

    if(val == 'a')
    {
      digitalWrite(s1,LOW);
    }

    if(val == 'B')
    {
      digitalWrite(s2,HIGH);
    }

    if(val == 'b')
    {
      digitalWrite(s2,LOW);
    }

    if(val == 'C')
    {
      digitalWrite(s3,HIGH);
    }

    if(val == 'c')
    {
      digitalWrite(s3,LOW);
    }

    if(val == 'D')
    {
      digitalWrite(s4,LOW);
    }

    if(val == 'd')
    {
      digitalWrite(s4,HIGH);
    }                                               //Conditions
  }
}
