int randNum = 0;

void setup() {
  // put your setup code here, to run once:
  for (int a = 3; a <= 5; a++)
  {
    pinMode(a, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  randNum = random(3, 6);
  for (int a = 3; a <= randNum
4
5
6
7
8
9
10
11
12
13
14
15
16
//A variable to hold the level of coolness
int coolFactor = 3;
 
void setup() {
 
  Serial.begin(9600);
 
}
 
void loop() {
 
  //Send the value of coolFactor to the the Serial port.
  //So we can see it in the serial monitor window
  Serial.print(coolFactor);
 
}; a++)
  {
    digitalWrite(a, HIGH); 
  }
  delay(500);
  for (int a = 3; a <= 5; a++)
  {
    digitalWrite(a, LOW);
  }
  delay(50);
}
