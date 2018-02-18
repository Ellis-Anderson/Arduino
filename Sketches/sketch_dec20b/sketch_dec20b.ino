int BPin = 11;
int GPin = 10;
int RPin = 9;
int t = 255;
int val = 0;
int pval = 1;
int inPin = 13;
int Col = 0;

void setup()
{
  pinMode(RPin, OUTPUT);
  pinMode(GPin, OUTPUT);
  pinMode(BPin, OUTPUT);
  pinMode(inPin, INPUT);
}



void loop()
{

  setRGB(Col % 3);  // aqua
  val = digitalRead(inPin);
      if (val == 0 && pval != 0) 
  {         
    Col++;
    pval=0;
  } else if(val == 1)
  {
    pval=1;
  }

  //If button gets pressed, break here.  Button variable is updated
//Col=Col+1;
//  delay (1000);

}

/*Tonight, my big goal is to have a light that dims over time.  Changes color with the click of a button.
the components to this:
1) 


*/


void setColor(int red, int green, int blue)
{
  analogWrite(RPin, red);
  analogWrite(GPin, green);
  analogWrite(BPin, blue);
}

void setRGB(int l)
{
switch (l)
{
  case 0:
  setColor(0,0,255);
  break;

  case 1:
  setColor(255,0,0);
  break;

  case 2:
  setColor(0,255,0);
  break;
}
}

