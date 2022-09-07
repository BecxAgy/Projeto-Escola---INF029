
#include <stdio.h>

float CalculaFatorial(int num){

  float fat=1;
  
  for(int i = num; i > 0; i--){
    fat*=i;
  }

  return fat; 
}

int VerificaFat(int num){
  
  if(num > 0) {
    return 1;
  }else
    return 0;
}

int main(){

  int numero;
  int ehPossivel;

  printf("Insira um número");
  scanf("%i", &numero);

  ehPossivel = VerificaFat(numero);

  if(ehPossivel == 1){
    printf("O fatorial do número é %f", CalculaFatorial(numero));
  }else{
    printf("Não é possível calcular o fatorial");
  }
  
  

  
}