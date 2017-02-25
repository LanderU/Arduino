const int LED =13;

int opcion;
 
void setup()
{
  Serial.begin(57600);
  pinMode (LED, OUTPUT);
  opcion = 0;
}
 
void loop()
{
  if (Serial.available())
  {
    opcion = Serial.read();
    pintarSerial(opcion);
    
    switch(opcion){

      case 48:
          Serial.print("End.\n");
          delay(4);
          apagar();
          break;
      case 49:
          digitalWrite(LED, HIGH);
          break;
      case 50:
          digitalWrite(LED, LOW);
          break;
      case 51:
           intermitencia();
           break; 
    }// end switch
    
  } // end if
 
} // end loop
 
void pintarSerial (int opcion)
{
  if (opcion==49)
    Serial.println("Estado 1 - ON");
    delay(5);
  if (opcion==50)
    Serial.println("Estado 2 - OFF");
    delay(5);
  if (opcion==51)
    Serial.println("Estado 3 - BLINK");
    delay(5);
}
 
void intermitencia()
{

  for (int i = 0 ; i < 10;i++)
  {
    digitalWrite(LED, HIGH);
    delay(250);
    digitalWrite(LED, LOW);
    delay(250);
  }
}
 
void apagar()
{
  digitalWrite(LED, LOW);
}
