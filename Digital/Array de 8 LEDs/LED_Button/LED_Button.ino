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
const byte buttonPin = 2;  
byte buttonState = 0;  

//************************ SETUP ***************************
void setup() {
  
  pinMode(led0, OUTPUT);     
  pinMode(buttonPin, INPUT);
 
}
//************************* LOOP ***************************
void loop() {
   buttonState = digitalRead(buttonPin);  //llegir l’estat del button i gardar-lo
  if (buttonState == 0)  //polsador premut, muntat amb Pull-up
  {
digitalWrite(led0, HIGH);
        }
          else   //polsador no premut, muntat amb Pull-up
          {
digitalWrite(led0, LOW);
          }
          delay(200);  //per no estar llegint button molt ràpid

}
//*********************** FUNCTIONS ************************
