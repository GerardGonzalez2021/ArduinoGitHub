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
  
  for(int i = 0; i < 30; i++)
  {
    digitalWrite(led0, HIGH);
    delay(500);
    digitalWrite(led0, LOW);
    delay(500);
  }
}

//************************* LOOP ***************************
void loop() 
{

}
//*********************** FUNCTIONS ************************
