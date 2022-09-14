#include <stdio.h>

typedef struct {
  int dia;
  int mes;
  int ano;
} Data;

typedef struct {
  int matricula;
  char nome[21];
  Data nascimento;
  char cpf[12];
  char sexo;

}Aluno;

typedef struct {
  char nome[21];
  Data nascimento;
  char cpf[12];
  char sexo;

} Professor;





int imprimeMenu(){
  inr opcao;

  
   printf("*************Menu*************");
    printf("Digite a opção:\n");
    printf("0 - Sair\n");
    printf("1 - Aluno\n");
    printf("2 - Professor\n");
    printf("3 - Disciplina\n");
  
    scanf("%d",&opcao);

  return opcao;
}


int main(){
  Aluno lista_aluno[100];
  Aluno aluno;
  
  int qtdAlunos = 0;
  int opcao = imprimeMenu();
  

 
    
    switch(opcao){
      
      
    }
  }
  
}