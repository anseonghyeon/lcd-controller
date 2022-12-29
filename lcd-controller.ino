
#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x3F, 16, 2);

void setup() {
	lcd.init();
	lcd.backlight();
}

void loop() { 
  for(int i = 0; i < 16; i++)
  {
    lcd.setCursor(i, 0);
    lcd.print("Seonghyeon's");
    lcd.setCursor(i, 1);
    lcd.print("Desk");
    delay(1000);
    lcd.clear();
  }

}