#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd_1(0x20, 16, 2);

void setup()
{
    lcd_1.init();
    lcd_1.setCursor(0, 0);
    lcd_1.backlight();
    lcd_1.display();
}

void loop()
{
    lcd_1.setCursor(0, 0);
    lcd_1.print("Hallo");
    delay(2000);
    lcd_1.setCursor(0, 1);
    lcd_1.print("Semuanya");
    delay(2000);
    lcd_1.clear();
}