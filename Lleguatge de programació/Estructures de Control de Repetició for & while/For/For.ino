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
int comptar = 30;
//************************ SETUP ***************************
void setup()                
{
  Serial.begin(9600);       
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);
  for (int i=0; i < comptar; i++)
  {
    Serial.print(i);
    Serial.print("-");
  } 
  Serial.print(comptar);
}


//************************* LOOP ***************************
void loop() {
  

}
//*********************** FUNCTIONS ************************
