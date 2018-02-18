const int hp = 5;
const int lp = 3;


void setup() {
  for (int a = lp; a <= hp; a++)
  {
    pinMode(a, OUTPUT);
  }

}

void loop() {
  for (int a = lp; a <= hp; a++)
  {
    digitalWrite(a, HIGH);
    delay(350);
  }
  for (int a = lp; a <= hp; a++)
    {
      digitalWrite(a, LOW);
    }
    delay(500);
  for (int x = 0; x <= 2; x ++){
    for (int a = lp; a <= hp; a++)
    {
      digitalWrite(a, HIGH);
    }
    delay(500);
    for (int a = lp; a <= hp; a++)
    {
      digitalWrite(a, LOW);
    }
    delay(500);
  }
}
