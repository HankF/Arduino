/*
SparkFun Inventor's Kit
 Example sketch 13
 
 RELAYS
 
 Use a transistor to drive a relay
 
 A relay is a electrically-controlled mechanical switch.
 It can control much more voltage and current than an Arduino pin
 (or the transistor included in your kit) can. If you want to use
 the Arduino to control a 120V bulb, coffee maker, or other high-
 power device, a relay is an excellent way to do that. Because
 the relay needs more power to switch than an Arduino pin can
 provide, we'll use a transistor to drive the relay in exactly
 the same way we used a transistor to drive a motor in circuit 12.
 
 A relay consists of a coil of wire, and switch contacts. When
 you apply power to the coil, it becomes magnetized, and pulls
 the switch contacts closed. Since the switch contacts are 
 completely isolated from the Arduino, you can safely use a
 relay to control normally dangerous voltages (but please only do
 this if you already know how to safely work with high voltage!).
 
 The relay has three contact pins, COM (common), NC (Normally
 Closed), and NO (Normally Open). When the relay is turned off,
 the COM pin is connected to the NC (Normally Closed) pin. When
 the relay is turned on, the COM pin is connected to the NO
 (Normally Open) pin.
 
 This code is very simple - it turns the relay on for one second,
 and off for one second, the same as the blink sketch!
 
 Hardware connections:
 
 Transistor:
 
 The transistor has three pins. Looking at the flat side with
 the pins down, the order is COLLECTOR, BASE, EMITTER.
 
 Connect the BASE pin through a 1K resistor to digital pin 2.
 
 Connect the EMITTER pin to GND.
 
 Relay coil:
 
 The relay has pins for a coil (which you use to control the
 relay), and contacts (which you connect to the device you'd
 like to switch). The top or bottom of the relay should have
 a symbol indicating the coil pins.
 
 Connect one side of the coil to the COLLECTOR pin
 on the transistor.
 
 Connect other side of the coil to 5V.
 
 Diode:
 
 The relay has a coil that you energize to close the switch.
 When you disconnect power from a coil, the coil will generate
 a voltage spike that can damage the transistor. This diode
 protects the transistor from the voltage spike.
 
 Connect the side of the diode with the band (cathode) to 5V
 
 Connect the other side of the diode (anode) to the COLLECTOR
 pin of the transistor.
 
 Relay contacts and LEDs:
 
 We'll use the relay contacts to turn LEDs on and off, but you
 can use them to switch almost anything on and off.
 
 Connect the COMMON side of the switch to a 330 Ohm resistor.
 Connect the other side of the above resistor to 5V.
 
 Connect the NC (Normally Closed) side of the switch to the
 positive (longer) leg of LED 1.
 
 Connect the NO (Normally Open) side of the switch to the
 positive (longer) leg of LED 2.
 
 Connect the negative sides (shorter leg) of both LEDs to GND.
 
 This sketch was written by SparkFun Electronics,
 with lots of help from the Arduino community.
 This code is completely free for any use.
 Visit http://learn.sparkfun.com/products/2 for SIK information.
 Visit http://www.arduino.cc to learn about the Arduino.
 
 Version 2.0 6/2012 MDG
 */
// You can make timeDelay shorter, but note that relays, being
// mechanical devices, will wear out quickly if you try to drive
// them too fast.

const int relayPin = 7;	    // use this pin to drive the transistor
const int timeDelay = 5000; // delay in ms for on and off phases

const int button1Pin = 9;  // pushbutton 1 pin
const int button2Pin = 8;  // pushbutton 2 pin


#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
boolean isClosed; //True if open  
void setup()
{
  pinMode(relayPin, OUTPUT);  // set pin as an output
  lcd.clear();

}


void loop()                    
{
  int button1State, button2State;

  button1State = digitalRead(button1Pin);
  button2State = digitalRead(button2Pin);

  if (button1State == LOW || button2State == LOW)
  {
    isClosed != isClosed;
  }
  /*	else if (button1State == LOW || buton2State == LOW) 
   	{
   		digitalWrite(relayPin, HIGH);  // turn the relay on
   		lcd.setCursor(0,0);
   		lcd.print("CLOSED   ");
   		isClosed = true;
   	}
   	else if (button2State == LOW)
   	{
   		digitalWrite(relayPin, LOW);   // turn the relay off
   		lcd.setCursor(0,0);
   		lcd.print("OPEN   ");
   		isClosed = false;
         }
   */
	if (isClosed == true)
	{
		digitalWrite(relayPin, HIGH);  // turn the relay on
   		lcd.setCursor(0,0);
   		lcd.print("CLOSED   ");
	}
	else if (isClosed == false)
	{
		digitalWrite(relayPin, LOW);   // turn the relay off
   		lcd.setCursor(0,0);
   		lcd.print("OPEN   ");
	}
	lcd.setCursor(0,1);
	lcd.print(isClosed);
//test
} 


