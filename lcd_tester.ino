#include <LiquidCrystal.h>

void setup() 
{
  const int rs = 9, en = 8, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
  LiquidCrystal lcd (rs, en, d4, d5, d6, d7);
  int row = 2;
  int col = 16;
  int test_row = 0;
  int test_col = 0;
  
  lcd.begin(col, row);
  lcd.setCursor(0, 0);
  lcd.print("LCD screen on");
  delay(1000);
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Testing Segments");
  delay(1000);
  lcd.clear();

  while(test_row < row)
  {
    do
    {
      for(int x = 0; x < 10; x++)
      {
        lcd.setCursor(test_col,test_row);
        lcd.print(x);
        delay(100);
        lcd.clear();
      }
      test_col++;
    }
    while(test_col < col);
    
    test_row++;
    test_col= 0;
  }
}

void loop() 
{
 
}
