//declaramos variables
const int sensorH1 = 9;
const int ledPin = 2;
void setup() {
  // put your setup code here, to run once:
pinMode(sensorH1, INPUT_PULLUP); //dato de entrada
pinMode(ledPin, OUTPUT); //dato de salida


}

void loop() {
  // put your main code here, to run repeatedly:
int estadoP1 = digitalRead(sensorH1); //lee el estado del sensor

if (estadoP1 == LOW){ //si el sensor esta activado enciende el led
  digitalWrite(ledPin, HIGH);
  
}else{
  digitalWrite(ledPin, LOW); //si el sensor no esta activo se apaga el led
}
}
