void setup() {
  
  Serial.begin(57600);
  
}// end setup

void loop() {
  
  // Variables
  char caracter = ' ';
  String mensaje = " ";

  // Comprobamos que el serial tiene algo
  if (Serial.available())
  {
    while ( caracter != '\n') // Leemos hasta el intro
    {
      mensaje = mensaje + caracter;
      caracter = Serial.read();
      // Delay
      delay(25);
    
    } // end while
    // Monstramos el mensaje
    Serial.println(mensaje);
    mensaje = " ";
    
  } // end if
  

} // end loop
