#include <stdio.h>

/*) Crie um programa que tenha uma função subtrai e a função main. A função main
deve ler três valores, enviar para a função subtrai. A função subtrai deve
realizar a subtração dos três valores (primeiro menos o segundo menos o
terceiro) e retornar o valor. A Função main deve imprimir o resultado da
subtração*/

int subtrair(int a, int b, int c) { 
  int subtracao = a - b - c; 
  return subtracao;
}

int main() {
  int v1, v2, v3;
  int subtracao;

  printf("Insira três valores\n");
  scanf("%i", &v1);
  scanf("%i", &v2);
  scanf("%i", &v3);

  printf("A subtração dos três valores é %i", subtrair(v1, v2, v3));
}