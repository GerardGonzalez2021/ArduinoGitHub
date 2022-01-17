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
const byte pot0 = A0;
const byte pot1 = A1;
int valPot0;
int valPot1;
unsigned long temps = 20;
//************************ SETUP ***************************
void setup() {
  pinMode(xiulet, OUTPUT);    

}
//************************* LOOP ***************************
void loop() {
  valPot0 = analogRead(pot0);
  valPot1 = analogRead(pot1);
  tone(xiulet, 700, 2*valPot0);  
  delay(2*valPot1);                        
}
//*********************** FUNCTIONS ************************
