//declaramos variables
int led1 = 13;
int led2 = 12;
int led3 = 11;

int identificador = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(led1, OUTPUT); //pin de salida
pinMode(led2, OUTPUT);//pin de salida
pinMode(led3, OUTPUT);//pin de salida
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(7) == HIGH){ //verifica si el botón conectado al pin 7 está presionado
  delay(200);
  if(identificador == 0){//si el identificador es igual a 0 entonces se enciende el led 1 y se mantine prendido
    digitalWrite(led1, HIGH);
    delay(200);
    digitalWrite(led2, LOW);// Asegura que el LED2 esté apagado
    delay(200);
    digitalWrite(led3, LOW);// Asegura que el LED3 esté apagado
    identificador += 1;
  }
  else if(identificador == 1){//si el identificador es igual a 1 entonces se enciende el led 2 y se mantine prendido
    digitalWrite(led1,  LOW);// Asegura que el LED2 esté apagado
    digitalWrite(led2, HIGH);
    delay(200);
    digitalWrite(led3, LOW);// Asegura que el LED3 esté apagado
  identificador += 1;

  } else if(identificador == 2){ //si el identificador es igual a 2 entonces se enciende el led 3 y se mantine prendido
    digitalWrite(led1,  LOW);// Asegura que el LED1 esté apagado
    digitalWrite(led2, LOW);// Asegura que el LED2 esté apagado
    digitalWrite(led3, HIGH);
    delay(200);
    identificador = 0;
  }
}
else {     // y si el boton no esta siendo precionado entonces se mantienen apagados todos los leds
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
}
}
