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
int tempAigua = 90;

//************************ SETUP ***************************
void setup()              
{
  Serial.begin(9600);     

  if (tempAigua < 90)
  {
    Serial.print("Aigua encara no bull");
  }
  else if (tempAigua < 100)
  {
    Serial.print("Aigua apunt de bullir");
  }
  else if (tempAigua == 100)
  {
    Serial.print("Aigua a 100ºC");
  }
  else 
  {
    Serial.print("Aigua bullint");
  }
}
//************************* LOOP ***************************
void loop() {
  

}
//*********************** FUNCTIONS ************************

  
