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
float Q = 3.5;
//************************ SETUP ***************************
void setup() {
Serial.begin(9600);     
Serial.print("Qualificació energètica tipus ");

  if (Q < 3.5)
  {
    Serial.print("A");
  }
  else if (Q < 6.5)
  {
    Serial.print("B");
  }
  else if (Q < 11.1)
  {
    Serial.print("C");
  }
    else if (Q < 17.7)
  {
    Serial.print("D");
  }
  else if (Q < 38.2)
  {
    Serial.print("E");
  }
    else if (Q < 43.2)
  {
    Serial.print("F");
  }
  else 
  {
    Serial.print("G");
  }  

}
//************************* LOOP ***************************
void loop() {
  

}
//*********************** FUNCTIONS ************************
