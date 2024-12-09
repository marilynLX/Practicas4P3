//declaramos las variables a utilziar
int activador = A5;                 
int ledVerde = 8;         
int ledAmarillo = 9;    
int ledRojo = 10;         

void setup() {
  pinMode(ledVerde, OUTPUT); //salida
  pinMode(ledAmarillo, OUTPUT); //salida
  pinMode(ledRojo, OUTPUT); //salida
  pinMode(activador, INPUT);  //entrada
  Serial.begin(9600);         
}

void loop() {
  int sensorValue = analogRead(activador);  //lee el valor del sensor conectado

  
  Serial.println(sensorValue); //imprime el valor del sensor al monitor
  delay(500); 
  
  if (sensorValue > 450 && sensorValue < 550) { //Si el valor del sensor está entre 450 y 550 entonces enciende el led verde por un segundo y despues apagalo
    digitalWrite(ledVerde, HIGH); 
    delay(1000);  
    digitalWrite(ledVerde, LOW);  
  }
  
  
  if (sensorValue > 551 && sensorValue < 650) {//Si el valor del sensor está entre 551 y 650 entonces enciende el led amarillo por un segundo y despues apagalo
    digitalWrite(ledAmarillo, HIGH);  
    delay(1000);  
    digitalWrite(ledAmarillo, LOW); 
  }

   
  if (sensorValue > 651 && sensorValue < 700) { //Si el valor del sensor está entre 651 y 700 entonces enciende el led rojo por un segundo y despues apagalo
    digitalWrite(ledRojo, HIGH);   
    delay(1000);  
    digitalWrite(ledRojo, LOW); 
  }
  
  
  else {
    digitalWrite(ledRojo, LOW);
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarillo, LOW);
  }
}
