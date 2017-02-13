/**********************************************************************************
**                                                                               **
**                               Plantilla                                       **
*                                                                                **
*                                  Serial                                        **
*                                                                                **
*                                                                                **
*                                                                                **                                             
*       David Jurado                                           6/02              **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int num = 64;
//********** Setup ****************************************************************

void setup()             // run once, when the sketch starts
{
  Serial.begin(9600);    // set up Serial library at 9600 bps

  Serial.println("Different formats for the same number:");

  Serial.write(num);      //muestra el valor de int 
  Serial.println();
  
  Serial.println(num);
  Serial.println(num,DEC);   //muestra el valor int en decimal
  
  Serial.println(num,BIN);    //muestra el valor int en binari
  
  Serial.println(num,HEX);      //muestra el valor int en hexadecimal
  
  Serial.println(num,OCT);      //muestra el valor int en octagonales
}


void loop()    // we need this to be here even though its empty
{
}



//********** Funcions *************************************************************
