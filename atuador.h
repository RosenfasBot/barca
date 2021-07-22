#ifndef ATUADOR_H_INCLUDED
#define ATUADOR_H_INCLUDED

class Atuador {
  public:
  Atuador();

/************************
 abrir
 Abre valvula conectada ao pino 10
 entradas
   nenhuma
 saidas
   nenhuma
*************************/
  
  void abrir();
  
/************************
 fechar
 Fecha valvula conectada ao pino 10
 entradas
   nenhuma
 saidas
   nenhuma
*************************/  
  
  void fechar();

};

#endif // ATUADOR_H_INCLUDED