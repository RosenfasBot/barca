#ifndef DISPLAY_H_INCLUDED
#define DISPLAY_H_INCLUDED


class Display {
  public:
  Display();
  
  
/************************
 exibir
 Exibe umidade tanto no display lcd
 quanto no serial monitor
 entradas
  umidade: int a ser exibido 
 saidas
  nenhuma
*************************/

  void exibir(int umidade);
};

#endif // DISPLAY_H_INCLUDED