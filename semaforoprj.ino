//Biblioteca para utilizar wifi
#include <WiFi.h>
#include <WiFiClient.h>
//Bibliotea para criar servidor http
#include <WebServer.h>
//Trabalhar com textos, padrão
#include <string.h>

//Cria instrancia da biblioteca  WebServer passando
//a porta de funcionamento nesse caso a padrão 80
WebServer server(80);

//Definindo nome e senha da rede wifi
const char *ssid = "wifi-IJHG";
const char *password = "12345678";

//Definindo a configuração de rede
IPAddress local_IP(192,168,0,100);
IPAddress gateway(19,168,0,1);
IPAddress subnet(255,255,255,0);


// Definição dos pinos dos LEDs
const int ledVerde1 = 23;
const int ledVerde2 = 19;
const int ledAmarelo1 = 22;
const int ledAmarelo2 = 18;
const int ledVermelho1 = 21;
const int ledVermelho2 = 5;

int tempoAmarelo= 2000;
int tempoVerde= 5000;

void primeiroEstagio() {
digitalWrite(ledVerde1, HIGH);
digitalWrite(ledVermelho2, HIGH);
delay(tempoVerde);
}


void segundoEstagio() {
  digitalWrite(ledVerde1, LOW);
  digitalWrite(ledAmarelo1, HIGH);
  delay(tempoAmarelo);
}



void terceiroEstagio() {
  digitalWrite(ledVerde2, HIGH);
  digitalWrite(ledAmarelo1, LOW);
  digitalWrite(ledVermelho1, HIGH);
  digitalWrite(ledVermelho2, LOW);
  delay(tempoVerde);
}

void quartoEstagio(){
  digitalWrite(ledVerde2, LOW);
  digitalWrite(ledAmarelo2, HIGH);
  delay(tempoAmarelo);
}

void quintoEstagio(){
  digitalWrite(ledAmarelo2, LOW);
  digitalWrite(ledVermelho1, LOW);
}

void setup() {
   Serial.begin(115200);
  //Configurando e iniciando o Acess Point com o ESP
  Serial.print("Configurando Wifi...");
  Serial.println(WiFi.softAPConfig(local_IP, gateway, subnet)? "Okay" : "Erro na conf");
  Serial.print("Iniciando a Wifi...");
  Serial.println(WiFi.softAP(ssid, password)? "Okay" : "Erro na inicialização");
  Serial.print("IP do AP: ");
  Serial.println(WiFi.softAPIP());
  // Configuração dos pinos como saída
  pinMode(ledVerde1, OUTPUT);
  pinMode(ledVerde2, OUTPUT);
  pinMode(ledAmarelo1, OUTPUT);
  pinMode(ledAmarelo2, OUTPUT);
  pinMode(ledVermelho1, OUTPUT);
  pinMode(ledVermelho2, OUTPUT);
}

void loop() {
primeiroEstagio();
segundoEstagio();
terceiroEstagio();
quartoEstagio();
quintoEstagio();
}