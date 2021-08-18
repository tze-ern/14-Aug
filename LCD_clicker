const int buttonPin = 8;
int counter = 0;
int x;
char *words[]={"Rampage", "Legendary", "Godlike", "Savage","unstoppable"};
long words1;

#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // set the LCD address to 0x3F for a 16 chars and 2 line display

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  
  Serial.begin(9600);
  randomSeed(666);
  
  lcd.init();
  lcd.clear();
  lcd.backlight();      // Make sure backlight is on

  // Print a message on both lines of the LCD.
  lcd.setCursor(2, 0);  //Set cursor to character 2 on line 0
  lcd.print("Clicks:");

  lcd.setCursor(2, 1);  //Move cursor to character 2 on line 1
  lcd.print(counter);
}

void loop() {
  int buttonState;
  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) // light the LED
  {
    counter++;
    lcd.clear();
    lcd.setCursor(2, 0);  //Set cursor to character 2 on line 0
    lcd.print("Clicks:");
    lcd.setCursor(2, 1);  //Move cursor to character 2 on line 1
    lcd.print(counter);

    delay(150);
  }

    if (counter == 10)
  {
    lcd.clear();
    lcd.setCursor(2, 0);  //Set cursor to character 2 on line 0
    Random();
    delay(500);
  }

  else if (counter == 20)
  {
    lcd.clear();
    lcd.setCursor(2, 0);  //Set cursor to character 2 on line 0
    Random();
    delay(500);
  }

  else if (counter == 30)
  {
    lcd.clear();
    lcd.setCursor(2, 0);  //Set cursor to character 2 on line 0
    Random();
    delay(500);
  }

  else if (counter == 40)
  {
    lcd.clear();
    lcd.setCursor(2, 0);  //Set cursor to character 2 on line 0
    Random();
    delay(500);
  }

  else if (counter == 50)
  {
    lcd.clear();
    lcd.setCursor(2, 0);  //Set cursor to character 2 on line 0
    Random();
    delay(500);
  }
}

void Random() {
  words1 = random(sizeof(words)/sizeof(char*));
  lcd.print(words[words1]);
}
