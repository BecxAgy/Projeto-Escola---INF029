#include <stdio.h>


typedef struct {
    char palavra1[10];
    char palavra2[10]; 
    char palavra3[10];  
}Palavras;
    

  Palavras ler3palavras () {
    Palavras inserirpalavras;
    printf("insira a 1ª palavra:\n");
    fgets(inserirpalavras.palavra1,10,stdin);
    
    printf("insira a 2ª palavra:\n");
    fgets(inserirpalavras.palavra2,10,stdin);

    printf("insira a 3ª palavra:\n");
    fgets(inserirpalavras.palavra3,10,stdin);
    
    return inserirpalavras;
    }

int main(void){
    Palavras palavras;
    palavras = ler3palavras();

  
    printf("\n*******************\n");
    printf("\nAs palavras inseridas foram:\n");
    printf("%s", palavras.palavra1);
    printf("%s", palavras.palavra2);
    printf("%s", palavras.palavra3);
  
    
}

