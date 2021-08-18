const int buttonPin = 8;
int counter = 0;
int buttonState;
bool shownText = 0;

char *words[] = {"Rampage", "Legendary", "Godlike", "Savage", "unstoppable"};
int randomWordIndex;

#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);


void setup() {
  pinMode(buttonPin, INPUT_PULLUP);

  Serial.begin(9600);
  randomSeed(666);

  lcd.init();
  lcd.clear();
  lcd.backlight();

  lcd.setCursor(2, 0);
  lcd.print("Clicks:");

  lcd.setCursor(2, 1);
  lcd.print(counter);
}

void loop() {

  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW)
  {
    if (counter % 10 == 0) {
      shownText = 0;
    }

    counter++;
    lcd.clear();
    lcd.setCursor(2, 0);
    lcd.print("Clicks:");
    lcd.setCursor(2, 1);
    lcd.print(counter);

    delay(150);
  }

  if (counter % 10 == 0 && counter != 0) {
    Random();
  }

}

void Random() {
  randomWordIndex = random(sizeof(words) / sizeof(char*));
  if (shownText == 0)
  {
    lcd.clear();
    lcd.setCursor(2, 0);
    lcd.print(words[randomWordIndex]);
    delay(500);
    shownText = 1;
  }
}
