/***********************************************************
**                                                        **
**                Títol: Array de 8 LEDs                  **
**                                                        **
**                                                        **
**                                                        **
**   NOM: Gerard Gonzalez Torres             Data:        **
***********************************************************/
//*********************** INCLUDE **************************

//********************** VARIABLES *************************
const byte led0 = 5;  
int data = 0;
//*************************** SETUP ************************

void setup() 
{
  pinMode(led0, OUTPUT);
}

//************************* LOOP ***************************
void loop() 
{
  if (data<30)
  {
    digitalWrite(led0, HIGH);
    delay(500);
    digitalWrite(led0, LOW);
    delay(500);
    data++;
  }
  else 
  {
    digitalWrite(led0, LOW);
  }

}
//*********************** FUNCTIONS ************************
