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
  int sensorValue = analogRead(activador);  

  
  Serial.println(sensorValue); 
  delay(500); 
  
  if (sensorValue > 450 && sensorValue < 550) {
    digitalWrite(ledVerde, HIGH); 
    delay(1000);  
    digitalWrite(ledVerde, LOW);  
  }
  
  
  if (sensorValue > 551 && sensorValue < 650) {
    digitalWrite(ledAmarillo, HIGH);  
    delay(1000);  
    digitalWrite(ledAmarillo, LOW); 
  }

   
  if (sensorValue > 651 && sensorValue < 700) {
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