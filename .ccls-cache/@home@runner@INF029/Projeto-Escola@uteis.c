#include <stdio.h>
#include <string.h>
#include "uteis.h"


int imprimeMenu(){
  int opcao;

  
   printf("*************Menu*************");
    printf("Digite a opção:\n");
    printf("0 - Sair\n");
    printf("1 - Aluno\n");
    printf("2 - Professor\n");
    printf("3 - Disciplina\n");
  
    scanf("%d",&opcao);

  return opcao;
}

int validarNome(char nome[]) { 
  if(strlen(nome)>20){
    printf("Nome inválido \n O limite de caracteres é 20. Pf digite um nome válido. \n");
    return 0;
  } else {
    printf("Nome válido! \n");
    return 1;
  }
}

int validarNascimento(Data nascimentoUsuario) {
  if(nascimentoUsuario.ano<=0 || nascimentoUsuario.ano>2022) {
    printf("Ano inválido. \n");
    return 0;
  }
  if (nascimentoUsuario.mes <=0 || nascimentoUsuario.mes>12) {
    printf("Mês inválido. \n");
    return 0;
  }

  if(nascimentoUsuario.mes ==2) {
    if(nascimentoUsuario.dia <=0 || nascimentoUsuario.dia >29) {
      printf("Dia inválido para o mês de fevereiro. \n");
      return 0;
    } else {
            printf("Nascimento cadastrado com sucesso! \n");
      return 1;
    }
 
  } else if( nascimentoUsuario.dia<=0 || nascimentoUsuario.dia>30){
    return 0;
  } else{
      printf("Nascimento cadastrado com sucesso! \n");
      return 1;  
    } 
     
}

int validarSexo(char sexo) {
  char sexoValidos[6] =  {'M', 'F','O','o','m', 'f'};
  for(int i = 0; i < 6; i++) {
    if (sexoValidos[i] == sexo) {
      printf("Sexo válido! \n");
      return 1;
    }
  }
  printf(" Inválido \n Digite uma das opções válidas.\n Masculino : M ou m\n Feminino: F ou f\n Outro : O ou o \n");
  return 0;
}

int validarCpf(char cpf[]) {
  int cpfInt[11];
  for (int i = 0; i<11; i++) {
    cpfInt[i] = cpf[i] - 48;
  }

  int digVerif1 = cpfInt[9];
  int digVerif2 = cpfInt[10];
  int digVerif1Correto ;
  int digVerif2Correto;

  
  int aux = 10;
  int produtos = 0;
  for (int i = 0; i<9; i++, aux--) {
    produtos = produtos + (cpfInt[i]*aux); 
  }

  int quocProd = produtos/11;
  int restoProd = produtos%11;

  if(restoProd<2){
    digVerif1Correto = 0;
  } else {
    digVerif1Correto = 11 - restoProd;
  }

   if(digVerif1!=digVerif1Correto) {
      printf("Cpf inválido, erro no primeiro digito verificador \n");
      return 0;
    }  

  // cálculo do seg digito 

  aux = 11;
  produtos = 0;
  for (int i = 0; i<10; i++, aux--) {
    produtos = produtos + (cpfInt[i]*aux); 
  }
  
  quocProd = produtos/11;
  restoProd = produtos%11;

  if(restoProd<2){
    digVerif2Correto = 0;
  } else {
    digVerif2Correto = 11 - restoProd;
  }

  if(digVerif1==digVerif1Correto && digVerif2 == digVerif2Correto) {
    printf("Digitos verificadores corretos. CPF válido. \n");
    return 1;
  } else{
    printf("Cpf inválido, erro no último digito verificador \n");
    return 0;
  } 

  
}
