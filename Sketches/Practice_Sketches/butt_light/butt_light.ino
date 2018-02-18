int BPin = 11;
int GPin = 10;
int RPin = 9;
int t = 255;
int val = 0;
int inPin = 4;
int Col = 0;
bool buttonPressed = false;



void setup()
{
  pinMode(RPin, OUTPUT);
  pinMode(GPin, OUTPUT);
  pinMode(BPin, OUTPUT);
  pinMode(inPin, INPUT);
  Serial.begin(9600);
}



void loop()
{
  setRGB();  
  while (buttonPressed == false)
    {
      val = digitalRead(inPin);
      if (val == 0)
        {
          buttonPressed = true;
          delay(100);
        }
    }
  buttonPressed = false;

}



//Functions 

//Set color of RGB led based on inputs supplied from the
//setRGB function
void setColor(int red, int green, int blue)
  {
    analogWrite(RPin, red);
    Serial.print(red);
    analogWrite(GPin, green);
    Serial.print(green);
    analogWrite(BPin, blue);
  Serial.print(blue);
    Serial.print('\n');
  }

// Uses the random() function to get a number between 100 and 200
// If the returned value is <= 105 it returns 0 (off)
// otherwise it returns the randomly generated value
int randColor()
  {
    int color = random(100, 200);
    if (color <= 105)
      {
        return 0;
      }
    else
     {
        return color;
     }
  }


// Calls the randColor() function to get pwm values of 0 or 106-200
// for red, green, and blue leds, then passes these values to setColor()
void setRGB()
  {
    int r = randColor();
    int g = randColor();
    int b = randColor();
    setColor(r, g, b);
  }

