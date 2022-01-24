/***********************************************************
**                                                        **
**                  Títol: RGB_JoyStick                   **
**                                                        **
**                                                        **
**                                                        **
**   NOM: Gerard Gonzalez Torres             Data:        **
***********************************************************/
//*********************** INCLUDE **************************

//********************** VARIABLES *************************
  int pinLED = 13;
  int pinJoyX = A0;
  int pinJoyY = A1;
  int pinJoyButton = 9;
  int Xvalue = pinJoyX;
  int Yvalue = pinJoyY;
  int buttonValue = 0;
  int red_light_pin = 3;
  int green_light_pin = 5;
  int blue_light_pin = 6;

//************************ SETUP ***************************
void setup() {

  Serial.begin(9600);
  pinMode(pinJoyButton , INPUT_PULLUP);
  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);

}
//************************* LOOP ***************************
void loop() {
  
  Xvalue = analogRead(pinJoyX);
  delay(100);           
  Yvalue = analogRead(pinJoyY);
  buttonValue = digitalRead(pinJoyButton);

  if (buttonValue == 1)
  {
  analogWrite(red_light_pin, Xvalue/4);
  analogWrite(green_light_pin, Xvalue/4 + Yvalue/4 + 55);
  analogWrite(blue_light_pin, Yvalue/4);

  }
  else if (buttonValue == 0)
  {
  // Red
  analogWrite(red_light_pin, 255);
  analogWrite(green_light_pin, 0);
  analogWrite(blue_light_pin, 0);
  delay(500);
  // Green
  analogWrite(red_light_pin, 0);
  analogWrite(green_light_pin, 255);
  analogWrite(blue_light_pin, 0);
  delay(500);
  // Blue
  analogWrite(red_light_pin, 0);
  analogWrite(green_light_pin, 0);
  analogWrite(blue_light_pin, 255);
  delay(500);
  // Raspberry
  analogWrite(red_light_pin, 255);
  analogWrite(green_light_pin, 255);
  analogWrite(blue_light_pin, 125);
  delay(500);
  // Cyan
  analogWrite(red_light_pin, 0);
  analogWrite(green_light_pin, 255);
  analogWrite(blue_light_pin, 255);
  delay(500);
  // Magenta
  analogWrite(red_light_pin, 255);
  analogWrite(green_light_pin, 0);
  analogWrite(blue_light_pin, 255);
  delay(500);
  // Yellow
  analogWrite(red_light_pin, 255);
  analogWrite(green_light_pin, 255);
  analogWrite(blue_light_pin, 0);
  
  }   
  else
  {
  analogWrite(red_light_pin, 0);
  analogWrite(green_light_pin, 0);
  analogWrite(blue_light_pin, 0);  
   
  }
delay (500);
}
//*********************** FUNCTIONS ************************
