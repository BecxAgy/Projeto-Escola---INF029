#include <stdio.h>
#include "uteis.c"

typedef struct data{
  int dia;
  int mes;
  int ano;
}Data;

int validarNome(char nome[]);

int validarCpf(char cpf[]);

int validarSexo(char sexo);

int validarData(Data data);

int imprimeMenu();