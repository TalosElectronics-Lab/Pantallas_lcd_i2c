/*
 * taloselectronics.com
 * Rafael Lozano Rolon
 * soporte@taloselectronics.com
 */
#include<LiquidCrystal_I2C.h>
#define direccion_1 0x3F
#define direccion_2 0x26
#define direccion_3 0x27

LiquidCrystal_I2C lcd_1(direccion_1,16,2);
LiquidCrystal_I2C lcd_2(direccion_2,16,2);
LiquidCrystal_I2C lcd_3(direccion_3,20,4);

void setup() {
  // put your setup code here, to run once:
  lcd_1.init();
  lcd_1.backlight();
  lcd_1.setCursor(0,0);
  lcd_1.print("Pantalla 1");

  lcd_2.init();
  lcd_2.backlight();
  lcd_2.setCursor(0,0);
  lcd_2.print("Pantalla 2");

  lcd_3.init();
  lcd_3.backlight();
  lcd_3.setCursor(0,0);
  lcd_3.print("Pantalla 3");

}

void loop() {
  // put your main code here, to run repeatedly:

}
