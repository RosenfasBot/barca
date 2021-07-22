#include <Arduino.h>

#include "definicoes_sistema.h"
#include "atuador.h"


Atuador::Atuador()
{
}

/************************
 Atuador::abrir
 abre valvula conectada ao pino 10
 entradas
   nenhuma
 saidas
   nenhuma
*************************/

void Atuador::abrir()
{
   // abre valvula
   digitalWrite(10,HIGH);
  
   // atualiza serial monitor
   Serial.println("Valvula aberta");
  
   // atualiza lcd
   lcd.setCursor(0, 4);
   lcd.print("Regando.");
   delay(1200);
   lcd.clear();
   lcd.setCursor(0, 4);
   lcd.print("Regando .");
   delay(1200);
   lcd.clear();
   lcd.setCursor(0, 4);
   lcd.print("Regando  .");
   delay(1200);
   lcd.clear();
}

/************************
 Atuador::fechar
 fecha valvula conectada ao pino 10
 entradas
   nenhuma
 saidas
   nenhuma
*************************/

void Atuador::fechar()
{
   digitalWrite(10, LOW);
   lcd.print("Valvula fechada");
   delay(2000);
   lcd.clear();
   
   Serial.println("Valvula fechada");
}



