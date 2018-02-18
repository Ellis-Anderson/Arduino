//A variable to hold the level of coolness
float coolFactor = 3;
float x = 3;
int y = 5;

void setup() {
 
  Serial.begin(9600);
 
}
 
void loop() {
 
  //Send the value of coolFactor to the the Serial port.
  //So we can see it in the serial monitor window
  Serial.print(coolFactor);
  Serial.print(" hello world! \n");
  float c = y / x;
  Serial.print(c);
  delay(1000);
}
