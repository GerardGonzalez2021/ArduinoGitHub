/***********************************************************
**                                                        **
**                      Títol: SIRENA                     **
**                                                        **
**                                                        **
**                                                        **
**   NOM: Gerard Gonzalez Torres             Data:        **
***********************************************************/
//*********************** INCLUDE **************************

//********************** VARIABLES *************************
const byte xiulet = 9;        
unsigned long temps = 20;
//************************ SETUP ***************************
void setup() {
  pinMode(xiulet, OUTPUT);    

}
//************************* LOOP ***************************
void loop() {
  tone(xiulet, 1000, temps);
  delay(temps);             
  tone(xiulet, 1250, temps);
  delay(temps);                          
}
//*********************** FUNCTIONS ************************