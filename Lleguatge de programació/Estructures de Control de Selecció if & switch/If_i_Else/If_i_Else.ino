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
int tempAigua = 100;

//************************ SETUP ***************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (tempAigua >= 100)
  {
    Serial.print("Aigua bullint");
  }
  else 
  {
    Serial.print("Aigua encara no bull");
  }
}

  


//************************* LOOP ***************************
void loop() {
  

}
//*********************** FUNCTIONS ************************
