int estado = 0;
int boton = 8;
int LED = 4;
  
void setup() {

  pinMode (boton, INPUT);
  pinMode (LED, OUTPUT);

}

void loop () {
  
    estado = digitalRead(boton); //Leemos el estado del boton
   
    if (estado == HIGH) {
      digitalWrite(LED,HIGH);
    
  }else{
  
     digitalWrite(LED,LOW);

  } //if

}//loop
