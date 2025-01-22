#include <Wire.h>              // Library untuk komunikasi I2C
#include <LiquidCrystal_I2C.h> // Library untuk LCD I2C

// Alamat I2C LCD, biasanya 0x27 atau 0x3F. Sesuaikan jika berbeda.
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
    lcd.init();
    lcd.setCursor(0, 0);
    lcd.backlight();
    lcd.display();
}

void loop()
{
    lcd.setCursor(0, 0);
    lcd.print("Hallo");
    delay(2000);
    lcd.setCursor(0, 1);
    lcd.print("Semuanya");
    delay(2000);
    lcd.clear();
}
