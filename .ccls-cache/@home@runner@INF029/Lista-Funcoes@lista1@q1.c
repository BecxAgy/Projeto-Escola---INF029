#include <stdio.h>
#include <stdlib.h>

int somar(int a, int b) {

  int somar = a + b;
  return (somar);
}

int main(void) {

  int a;
  int b;
  int soma;

  printf("Insira dois valores \n");
  scanf("%d", &a);
  scanf("%d", &b);

  soma = somar(a, b);
  printf("%d", soma);
}