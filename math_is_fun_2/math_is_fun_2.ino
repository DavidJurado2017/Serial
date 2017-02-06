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
int a = 3;
int b = 4;
int h;

//********** Setup ****************************************************************

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     
  
  Serial.println("Lets calculate a hypoteneuse"); 

  h = sqrt(a*a + b*b);         // es forumula de la hipotenusa,la raiz cuadrado de h=(a*a + b*b 
      
  Serial.print("a = ");       //
  Serial.println(a);          //
  Serial.print("b = ");       //
  Serial.println(b);          //
  Serial.print("h = ");      //
  Serial.println(h);         //
}

void loop()  // we need this to be here even though its empty
{
}


//********** Funcions *************************************************************
