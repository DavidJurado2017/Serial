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
int test = 32767;
//********** Setup ****************************************************************


void setup()             // run once, when the sketch starts
{
  Serial.begin(9600);     //set up Serial library at 9600 bps
  Serial.print("Test value is: ");
  Serial.println(test);

  test = test + 1;       // la variable arriba fins 32767 i comença al sumar-li 1 a -32767
 
  Serial.print("Now it is ");
  Serial.println(test);
}

void loop()  // we need this to be here even though its empty
{
}


//********** Funcions *************************************************************
