#include <Arduino.h>

#include "definicoes_sistema.h"
#include "display.h"


Display::Display()
{
}

/************************
 Display::exibir
 Exibe umidade tanto no display lcd
 quanto no serial monitor
 entradas
   umidade: int a ser exibido
 saidas
   nenhuma
*************************/

void Display::exibir(int umidade)
{
  // exibe no serial monitor
  Serial.print("exibindo umidade: ");
  Serial.print(umidade);
  Serial.println("%");
  
  // exibe no display
  lcd.print("Umidade atual: ");
  lcd.setCursor(7, 1);
  lcd.print(umidade);
  lcd.print("%");
  delay(2000);
  lcd.clear();
};

