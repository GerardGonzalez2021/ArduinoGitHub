/***********************************************************
**                                                        **
**                          Títol:                        **
**                                                        **
**                                                        **
**                                                        **
**   NOM: Gerard Gonzalez Torres             Data:        **
***********************************************************/
//*********************** INCLUDE **************************

//********************** VARIABLES *************************
int taula = 2;
//************************ SETUP ***************************


void setup()      // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  for (int taula=2; taula <= 10; taula++)
  Serial.print("Taula de multiplicar del ");
  Serial.println(taula);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula*i);    
  }
}

//************************* LOOP ***************************
void loop() {
  

}
//*********************** FUNCTIONS ************************
