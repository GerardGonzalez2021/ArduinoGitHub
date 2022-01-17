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
unsigned long temps = 600;
//************************ SETUP ***************************
void setup() {
  pinMode(xiulet, OUTPUT);    

}
//************************* LOOP ***************************
void loop() {
  tone(xiulet, 300, temps);
  delay(temps);             
  tone(xiulet, 1000, temps);
  delay(temps); 
  tone(xiulet, 500, temps);
  delay(temps);             
  tone(xiulet, 300, temps);
  delay(temps);                            
  tone(xiulet, 0, temps);
  delay(temps);           
}
//*********************** FUNCTIONS ************************
