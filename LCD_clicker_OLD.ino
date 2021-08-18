const int buttonPin = 8;
int counter = 0;
int x;
char *words[]={"Rampage", "Legendary", "Godlike", "Savage","unstoppable"};
long words1;
bool shownText = 0;

#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  
  Serial.begin(9600);
  
  lcd.init();
  lcd.clear();
  lcd.backlight();
  
  lcd.setCursor(2, 0);
  lcd.print("Clicks:");

  lcd.setCursor(2, 1);
  lcd.print(counter);
}

void loop() {
  int buttonState;
  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) 
  {
    counter++;
    lcd.clear();
    lcd.setCursor(2, 0); 
    lcd.print("Clicks:");
    lcd.setCursor(2, 1);
    lcd.print(counter);

    delay(150);
  }
shownText = 0;
    if (counter == 10)
  {
  Random();
  }
    if (counter == 20)
  {
  Random();
  }
    if (counter == 30)
  {
  Random();
  }
    if (counter == 40)
  {
  Random();
  }
    if (counter == 50)
  {
  Random();
  }

}

void Random() {
  words1 = random(sizeof(words)/sizeof(char*));
     if (shownText = 0)
    {
    lcd.clear();
    lcd.setCursor(2, 0); 
    lcd.print(words[words1]);
    delay(500);
    shownText = 1;
    }

}
