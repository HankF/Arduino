#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
const int temperaturePin = 0;

void setup()
{  
   lcd.begin(16, 2);
   lcd.clear();
   lcd.print("  Temperature");   
}

void loop()
{
     float voltage, degreesC, degreesF;
     voltage = getVoltage(temperaturePin);
     degreesC = (voltage - 0.5) * 100.0;
     degreesF = degreesC * (9.0/5.0) + 32.0;
     
    lcd.setCursor(0,1);
    
    lcd.print(degreesF);
    lcd.print("F    ");
    lcd.print(degreesC);
    lcd.print("C");
    delay(2000);       
}

float getVoltage(int pin)
{
  return (analogRead(pin) * 0.004882814);
}
