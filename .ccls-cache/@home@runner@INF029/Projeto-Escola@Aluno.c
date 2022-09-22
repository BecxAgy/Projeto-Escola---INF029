#include <stdio.h>
#include <>

typedef struct {
  int matricula;
  char nome[21];
  Data nascimento;
  char cpf[12];
  char sexo;

} Aluno;


void cadastroAluno() {
  
}

int menuAluno() {
  int opcao;

  
   printf("************* Menu de Aluno *************");
   
    printf("0 - Cadastrar\n");
    printf("1 - Listar\n");
    printf("2 - Excluir\n");
    printf("3 - Voltar\n");
  
    scanf("%d",&opcao);

  return opcao;
  
}