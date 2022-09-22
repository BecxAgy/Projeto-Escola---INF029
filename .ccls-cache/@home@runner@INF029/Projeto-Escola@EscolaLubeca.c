#include "Alunos.h"
#include "uteis.h"
#include <stdio.h>
Aluno alunos[100];

int main() {
  int qtdAlunos = 0;

  int opcao = 1;
  int opcaoAluno;

  while (opcao != 0) {
    opcao = imprimeMenu();

    switch (opcao) {
    case 0: // sair
      break;

    case 1: // Sessão de Aluno
      opcaoAluno = menuAluno();
      switch (opcaoAluno) {
      case 0: // voltar
        break;

      case 1: // cadastrar
        qtdAlunos = cadastrarAluno(alunos[qtdAlunos], qtdAlunos);
        printf("%i", qtdAlunos);
        break;

        case 2: //listar
        
      }

      // case 2: // Sessão Professor

      // case 3: // Sessão Disciplina
    }
  }
}
