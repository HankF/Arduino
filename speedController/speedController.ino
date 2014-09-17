#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
const int speedPin = 0;

void setup()
{  
   lcd.begin(16, 2);
   lcd.clear();
   lcd.print("SPEED: ");  
}

void loop()
{
  
    float voltage;
    int speed;
    int gear; 
    voltage = getVoltage(speedPin);
    speed = (voltage*20 - 10);
    int ledPins[] = {7,8};
    // 1/2 controller is yellow LED on pin 7
    // 3/4 controller is red LED on pin 8
 
    
    //Display
    lcd.setCursor(0,0);
    lcd.print("SPEED:      ");
    
    if (speed < 1) 
    {
      lcd.setCursor(0,0);
      lcd.print("SPEED: 0"); 
      lcd.setCursor(0,1); 
      lcd.print("GEAR:  First ");
      digitalWrite(7, HIGH);
      digitalWrite(8, LOW);
    }
    
    if (speed >= 1 && speed <= 20)
    {
      lcd.setCursor(0,0);
      lcd.print("SPEED: ");
      lcd.print(speed);
      lcd.setCursor(0,1);
      lcd.print("GEAR:  First ");
      digitalWrite(7, HIGH);
      digitalWrite(8, LOW);
    }
    if (speed > 20 && speed <= 40)
    {
      lcd.setCursor(0,0);
      lcd.print("SPEED: ");
      lcd.print(speed);
      lcd.setCursor(0,1);
      lcd.print("Gear:  Second");
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
    }
    if (speed > 40 && speed <= 60)
    {
      lcd.setCursor(0,0);
      lcd.print("SPEED: ");
      lcd.print(speed);
      lcd.setCursor(0,1);
      lcd.print("Gear:  Third ");
      digitalWrite(7, LOW);
      digitalWrite(8, HIGH);
    }
    if (speed > 60)
    {
      lcd.setCursor(0,0);
      lcd.print("SPEED: "); 
      lcd.print(speed);
      lcd.setCursor(0,1);
      lcd.print("GEAR:  Fourth");
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      
    }  
    //end of Display
    delay(750);       
}

float getVoltage(int pin)
{
  return (analogRead(pin) * 0.004882814);
}
