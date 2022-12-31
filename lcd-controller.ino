
#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x3F, 16, 2);

void setup() {
	lcd.init();
	lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("  Seonghyeon's Desk   Seonghyeon's Desk ");
  lcd.setCursor(0, 1);
  lcd.print("0123456789012345678901234567890123456789");
 
  delay(1000);
}

void loop() { 
  lcd.scrollDisplayRight();
  delay(1000);
}