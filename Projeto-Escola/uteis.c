#include <stdio.h>

typedef struct {
  int dia;
  int mes;
  int ano;
}Data;


int validarNome(char nome[]) { 
  if(strlen(nome)>20){
    return 0;
  } else {
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
      return 1;
    }
 
  } else if( nascimentoUsuario.dia<=0 || nascimentoUsuario.dia>30){
    return 0;
  } else return 1; 
}




int validarSexo(char sexo) {
  char sexoValidos[6] =  {'M', 'F','O','o','m', 'f'};
  for(int i = 0; i < 6; i++) {
    if (sexoValidos[i]== sexo) {
      return 1;
    }
  }
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




//tem que executar pra gerar o .h