#include "DHT.h"
 
#define DHTPIN A1 // pino que estamos conectado
#define DHTTYPE DHT11 // DHT 11

#define SETPOINT 23
 
// Conecte pino 1 do sensor (esquerda) ao +5V
// Conecte pino 2 do sensor ao pino de dados definido em seu Arduino
// Conecte pino 4 do sensor ao GND
// Conecte o resistor de 10K entre pin 2 (dados) 
// e ao pino 1 (VCC) do sensor
DHT dht(DHTPIN, DHTTYPE);   //Função

const int ventilador = 4;   //Pino que aciona o ventilador

float errotemp =0;
int state_vent = 0;

//float errohum = 0; 
void setup() 
{
  Serial.begin(9600);
  Serial.println("DHTxx test!");
  pinMode(ventilador,OUTPUT);
  dht.begin();
}
 
void loop() 
{
  // A leitura da temperatura e umidade pode levar 250ms!
  // O atraso do sensor pode chegar a 2 segundos.
  float h = dht.readHumidity();             //Lelo-Função da biblioteca criada
  float t = dht.readTemperature();
  // testa se retorno é valido, caso contrário algo está errado.
  if (isnan(t) || isnan(h)) 
  {
    Serial.println("Failed to read from DHT");
  } 
  else
  {
    //Condição para acionamento do ventilador
    errotemp = t-SETPOINT;

    if (errotemp>=1) {
        digitalWrite(ventilador,HIGH);
        state_vent = 1;
    }
    else {
        digitalWrite(ventilador,LOW);
        state_vent = 0; 
    } 
    
    Serial.print(" SetPoint(temperatura): ");
    Serial.print(SETPOINT);
    Serial.print(" Erro: ");
    Serial.print(errotemp);
    Serial.print(" Umidade: ");
    Serial.print(h);
    Serial.print(" %t");
    Serial.print(" Temperatura: ");
    Serial.print(t);
    Serial.println(" *C");
    Serial.print(" Ventilador: ");
    Serial.print(state_vent);
    
  }


}
