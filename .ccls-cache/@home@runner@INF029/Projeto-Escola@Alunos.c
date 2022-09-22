// biblioteca alunos, aq vamos definir as funcoes p alunos 

#include <stdio.h>
#include "Alunos.h"



int menuAluno() {
  int opcao;

  
   printf("************* Menu de Aluno *************");
   
    printf("0 - Voltar \n");
    printf("1 - Cadastrar\n");
    printf("2 - Listar \n");
    printf("3 - Excluir\n");
  
    scanf("%d",&opcao);

  return opcao;
  
}



int cadastrarAluno(Aluno novoAluno[100], int qtd) {
  printf("************* Bem vindo a sessão de cadastro. *************");

  
  Data data;
  

  int nomeValido = 0;
  int cpfValido = -1 ; 
  int sexoValido = -2;
  int nascValido=  -3;

  while(nomeValido!=1 || cpfValido != 1 || sexoValido != 1 || nascValido != 1) {
    printf("Digite seu nome \n");
    fgets(novoAluno[qtd].nome, 21, stdin);

    if(validarNome(novoAluno[qtd].nome)==1) {
      nomeValido = 1;

      printf("Digite seu CPF sem utilizar pontos ou hífens \n");
      
      fgets(novoAluno[qtd].cpf, 12, stdin);
      
      if(validarCpf(novoAluno[qtd].cpf) == 1){
        cpfValido = 1;

        printf("Qual seu gênero? \n");
        scanf("%c", &novoAluno[qtd].sexo);

        if(validarSexo(novoAluno[qtd].sexo)){
          sexoValido = 1;

          printf("Qual sua data de nascimento? \n");
          printf("Digite sua data de nascimento dd mm aaaa \n");
          scanf("%i",&data.dia);
          fflush(stdin);
          scanf("%i",&data.mes);
          fflush(stdin);
          scanf("%i",&data.ano);
          fflush(stdin);
  
          novoAluno[qtd].nascimento = data;
          if(validarNascimento(data) == 1){
            nascValido = 1;
            printf("******Cadastramento realizado com sucesso******");
            qtd++;
          }
        }
      }
    }

  }

  return qtd;

  
}

void listarAlunos(int qtd){
  
  for(int i = 0; i < qtd; qtd++){
    printf("");
  }
}