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
const byte xiulet = 9;        
long temps = 700;
//************************ SETUP ***************************
void setup() {
  pinMode(xiulet, OUTPUT);    

}
//************************* LOOP ***************************
void loop() {
 
  tone(xiulet, 1000, temps);    
  delay(temps);                

}
//*********************** FUNCTIONS ************************