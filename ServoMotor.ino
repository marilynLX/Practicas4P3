//descargamos una libreria para controlar el servo
#include <Servo.h>
Servo ioe;
//declaramos variables
int trig = 2;
int echo = 3;
int tiempo;
int distancia;

void setup () {
  pinMode (trig, OUTPUT); //dato de salida
  pinMode (echo, INPUT); //dato de entrada
  ioe.attach (4); //asocia al servo al pin 4
}

void loop () {
   // Envío de un pulso al TRIG para activar el sensor ultrasónico
  digitalWrite (trig, HIGH);// Genera un pulso de activación
  delay (500);// Duración del pulso
  digitalWrite (trig, LOW);  // Termina el pulso
  tiempo=pulseIn(echo, HIGH);  // Lee el tiempo que tarda el pulso en regresar
  distancia=tiempo/58.2;  // Calcula la distancia en centímetros
  delay(500);
  {
    if (distancia <= 10) // Controlamos el servomotor basandonos en la distancia medida y si la distancia es menor o igual a 10cm
    (ioe.write(120)); //gira el servo a 120 grados
    delay(2000);
  }
  {
    if (distancia >10);// Si la distancia es mayor a 10 cm
    ioe.write(45);// Gira el servomotor a 45 grados
  }
}
