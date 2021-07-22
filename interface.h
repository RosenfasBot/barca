#ifndef INTERFACE_H_INCLUDED
#define INTERFACE_H_INCLUDED

class Interface {
  public:
  Interface();

/************************
 setarUmidadePadrao
 Define nova umidade padrao
 entradas
   int que será a nova umidade padrao
 saidas
   nenhuma
*************************/
  
  void setarUmidadePadrao(unsigned int umidadeNova);
  
/************************
 setarTempoRegas
 Define novo tempo entre regas
 entradas
   valor em segundos do novo intervalo
   entre regas
 saidas
   nenhuma
*************************/
  
  void setarTempoRegas(unsigned long deltaRegas);
  
};

#endif // INTERFACE_H_INCLUDED