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
long drive_gb = 100;
long drive_mb;

//********** Setup ****************************************************************


void setup()             // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Your HD is ");
  Serial.print(drive_gb);       // el valor esta a dalt que es 5GB
  Serial.println(" GB large.");

   drive_mb = 1024 * drive_gb;
   
  Serial.print("It can store ");
  Serial.print(drive_mb);          //et diu que el drive mb que es 1024 el multiplica per el de abans 5
  Serial.println(" Megabytes!");
}



void loop()  // we need this to be here even though its empty
{
}


//********** Funcions *************************************************************
