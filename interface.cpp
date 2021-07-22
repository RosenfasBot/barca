#include <Arduino.h>

#include "definicoes_sistema.h"
#include "interface.h"

Interface::Interface()
{
}

/************************
 Interface::setarUmidadePadrao
 Define nova umidade padrao
 entradas
   int que será a nova umidade padrao
 saidas
   nenhuma
*************************/

void Interface::setarUmidadePadrao(unsigned int umidadeNova)
{
  // Exibe no serial monitor e altera variavel global
  Serial.print("umidade anterior: ");
  Serial.print(umidade_padrao);
  Serial.println("%");
  umidade_padrao = umidadeNova;
  Serial.println("Umidade ideal nova: ");
  Serial.print(umidade_padrao);
  Serial.println("%");
  
  // Exibe no lcd
  lcd.print("Umidade ideal");
  lcd.setCursor(0, 1);
  lcd.print("nova: ");
  lcd.setCursor(7, 1);
  lcd.print(umidade_padrao);
  lcd.print("%");
  delay(2300);
  lcd.clear();
}

/************************
 Interface::setarTempoRegas
 Define novo tempo entre regas
 entradas
   valor em segundos do novo intervalo
   entre regas
 saidas
   nenhuma
*************************/

void Interface::setarTempoRegas(unsigned long deltaRegas)
{
  // Exibe no serial monitor e altera variavel global
  Serial.print("Tempo entre regas anterior: ");
  Serial.print(delta_regas/1000);
  Serial.println(" s");
  delta_regas = deltaRegas;
  Serial.println("Tempo entre regas novo:  ");
  Serial.print(delta_regas/1000);
  Serial.println(" s");
  
  // Exibe no lcd
  lcd.print("Tempo entre");
  lcd.setCursor(0, 1);
  lcd.print("regas novo: ");
  lcd.setCursor(12, 1);
  lcd.print(delta_regas/1000);
  lcd.print("s");
  delay(2800);
  lcd.clear();
}