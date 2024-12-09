//Declaramos variables
int y; //para el eje y
  int x; //para el eje x
  void setup (){
    Serial.begin(9600);
    //declaramos como datos de salida
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
    pinMode(11,OUTPUT);
    pinMode(12,OUTPUT);
  }
joistic

void loop() {
  //leemos los valores del joystick 
 y = analogRead(A1);
 x = analogRead(A0);

  //devolvemos los valores obtenidos al monitor
 Serial.print("y=");
 Serial.print(y);
 Serial.print("x=");
 Serial.println(x);
delay(200);

if (x>520){   // Si el joystick se mueve hacia la derecha enciende el pin 9
  digitalWrite(9,HIGH);
}
else 
digitalWrite(9,LOW); // y despues lo apaga

if (x<500){  // Si el joystick se mueve hacia la izquierda enciende el pin 10
  digitalWrite(10,HIGH);
}
else 
digitalWrite(10,LOW);// y despues lo apaga

if (y>1020){
  digitalWrite(11,HIGH);// Si el joystick se mueve hacia arriba se enciende el pin 11
}
else 
digitalWrite(11,LOW);// y despues lo apaga

if (y<500){           // Si el joystick se mueve hacia abajo se enciende el pin 12
  digitalWrite(12,HIGH);
}
else 
digitalWrite(12,LOW);// y despues lo apaga
}
