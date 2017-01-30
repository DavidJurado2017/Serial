/**********************************************************************************
**                                                                               **
**                               Plantilla                                       **
*                                                                                **
*                                  Serial                                        **
*                                                                                **
*                                                                                **
*                                                                                **                                             
*       David Jurado                                           30/01             **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

//********** Setup ****************************************************************

void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  
  Serial.println("Escull el numero de l'operació que vols realitzar?");  //envía el valor 'analogValue' al puerto
  
  Serial.println("1.Comprovar el numero de la tarjeta de credit");  //envía el valor 'analogValue' al puerto
  
  Serial.println("2.Comprova el numero de compte bancari");  //envía el valor 'analogValue' al puerto
  
  Serial.println("3.Buscar un digit perdut de tarjeta de credit");  //envía el valor 'analogValue' al puerto
}

void loop()                 // run over and over again
{
}

//********** Funcions *************************************************************
