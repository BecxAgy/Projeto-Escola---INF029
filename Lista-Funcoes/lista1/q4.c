#include <stdio.h>

/*Crie um programa que tenha uma função ler 3 Numeros. Essa função deve ler três números do usuário e retornar os três números. A função main deve imprimir esses três números. 
Utilize vetor
para fazer o retorno.*/

typedef struct numeros{
  int numeros[3];
}Numeros;


Numeros ler3Num(){
  Numeros numeros1;
  
  for(int i = 0; i < 3; i++ ){
    scanf("%i", &numeros1.numeros[i]);

  }
  return numeros1;
}


int main(){

  printf("Inisira 3 números\n");
  Numeros numeros1 = ler3Num();

  for(int i = 0;i < 3; i++ ){
    printf("Número %i: %i\n",i, numeros1.numeros[i]);
  }
  
}