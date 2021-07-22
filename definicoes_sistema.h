#ifndef DEFINICOES_SISTEMA_H_INCLUDED
#define DEFINICOES_SISTEMA_H_INCLUDED

#define endereco 0x08
#define true  1
#define false 0

#define NUM_ESTADOS 2
#define NUM_EVENTOS 5

// ESTADOS
#define ESPERA   0
#define REGA     1

// EVENTOS
#define NENHUM_EVENTO -1
#define UMIDADE_ACIMA  1
#define CONFIG         2
#define UMIDADE_ABAIXO 3
#define TERMINO        4

// ACOES
#define NENHUMA_ACAO  -1
#define EXIBIR         1
#define PARAMETROS     2
#define ABRIRDISPLAY   3
#define FECHAREXIBIR   4





#endif // DEFINICOES_SISTEMA_H_INCLUDED