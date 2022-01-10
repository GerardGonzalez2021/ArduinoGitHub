/***********************************************************
**                                                        **
**                   Títol: Hello World                   **
**                                                        **
**                                                        **
**                                                        **
**   NOM: Gerard Gonzalez Torres       Data:24/11/21      **
***********************************************************/
//*********************** INCLUDE **************************

//********************** VARIABLES *************************

//************************ SETUP ***************************
void setup() {
    Serial.begin(9600);  
    Serial.println("Escull el numero de l'operacio que vols realitzar?");
    Serial.println("1. Comprovar numero de tarjeta de credit");
    Serial.println("2. Comprovar numero de compte bancari");
    Serial.println("3. Buscar un digit perdut de tarjeta de credit");
}
//************************* LOOP ***************************
void loop() {

}
//*********************** FUNCTIONS ************************
