int LED = 12;

void setup(){ //Se ejecutan las sentencias una nica vez

  pinMode(LED,OUTPUT);

}


void loop (){ //Bucle infinito en el que se repiten las sentencias que introduzcamos sin parar

    digitalWrite(LED,HIGH); //Encendemos el LED
    delay(1000*2);          //Lo dejamos dos segundos encendido
    digitalWrite(LED,LOW);  //Lo apagamos
    delay(1000*2);          //Apagado durando dos segundos


}
