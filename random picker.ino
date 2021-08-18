char *words[]={"Rampage", "Legendary", "Godlike", "Savage","unstoppable"};
long words1;

void setup()
{
  Serial.begin(9600);
  randomSeed(666);
}

void loop()                     
{
  words1 = random(sizeof(words)/sizeof(char*));
  Serial.println(words[words1]);
  delay(1000); 
}
