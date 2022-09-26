#include <stdio.h>

/*Crie um programa que tenha uma função ler4Numeros. Essa função deve ler quatro números do
usuário e retornar os quatro números. A função main deve imprimir esses quatro números. Utilize
struct para fazer o retorno.*/


typedef struct numeros{
  int numeros[4];
}Numeros;


Numeros ler3Num(){
  Numeros numeros1;
  
  for(int i = 0; i < 4; i++ ){
    scanf("%i", &numeros1.numeros[i]);

     
  }

  return numeros1;
  
}


int main(){

  printf("Inisira 4 números\n");
  Numeros numeros1 = ler3Num();

  for(int i = 0;i < 4; i++ ){
    printf("Número %i: %i\n",(i+1), numeros1.numeros[i]);
  }
  
}
