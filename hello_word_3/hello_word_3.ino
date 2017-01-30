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
}

void loop()                 // run over and over again
{
  Serial.println("Hello world!");  //envía el valor 'analogValue' al puerto
  delay(1000);              // es para añadir tiempo en este caso 1 segundo
}

//********** Funcions *************************************************************
