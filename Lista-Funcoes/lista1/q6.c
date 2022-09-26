#include<stdio.h>

/*Crie um programa que tenha uma função ler3Letras. Essa função deve ler três letras do usuário
e retornar as três letras. A função main deve imprimir essas três letras.*/
  typedef struct l1 {
    char vetorLetras[3];
  }letras;


letras ler3Letras () {

  letras minhasLetras;

  for(int i = 0; i<3;i++) {
    printf("Digite uma letra \n");
    scanf("%c", &minhasLetras.vetorLetras[i]);
  }  

  return minhasLetras;
}


int main(void) {

  
  
  letras minhasLetras = ler3Letras();

  for(int i = 0; i<3;i++) {
    printf("Letra : %c \n", minhasLetras.vetorLetras[i]);
    
  }  
}