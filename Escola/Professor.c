#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Disciplina.h"
#include "Professor.h"
#include "Aluno.h"
#include "Validacoes.h"

void cadastrarProfessor(professor prof, listaProf *list, listaDisc *listD, listaAlunos * listA);
void excluirProfessor(listaProf *list, listaDisc *listD);
/* Protótipos de funções apenas de Professores */
int confirmarCadastro(professor prof);
int confirmarDelete(listaProf *list, int index);
int qtdCadastroProf(listaProf *list);

// Função responsável por criar uma lista de Professores.
listaProf* criarListaProf() {
   //Criar um ponteiro que aponte para a lista

  listaProf* listaP;

  //Alocando memória
  listaP = (listaProf*)malloc((sizeof(listProf)));

  if(listaP != NULL){
    //setando o valor inicial da lista
    listaP -> qtdProfessores = 0;
  }

    return listaP;
}
//#######Verificações na lista#######
int listaCheiaProf(listaProf listaP*){

  if(listaP == NULL ) return -1;

  return listaP -> qtdProfessores == MAX;
  
}

int listaVaziaProf(listaProf listaP*)
{
  if(listaP == NULL) return -1;

  return listaP -> qtdProfessores == 0;
}

int qtdCadastroProf(listaProf *listaP){
  int quant;
  int limiteCad = MAX - (listap -> qtdProfessores);

  do{
    puts("-=-=-=Informações Importantes=-=-=-");
    puts("Limite de Cadastros: %i  ||  Professores Cadastrados: %i", MAX, listaP -> qtdProfessores);
    
    puts("Quantos professores você deseja cadastrar na lista?")
    scanf("%i", &quant);

    //se for menor, igual zero ou mais que o limite da lista
    if(quant < 0){
      puts("Não é possivle cadastrar com números negativos");
    }else if( quant > limiteCad){
      puts("A quantidade de professores excede o limite de cadastros");
    }else if( quant == 0){
      puts("Digite um número de cadastro diferente de zero...");
    }
  }while(quant <= 0 || quant > limiteCad);

  return quant;
    
}


//######## Cadastro ########
void cadastrarProfessor(professor prof, listaProf *listaP, listDisc *listaD, listaAlunos *listaA){

  //verificar a disponibilidade da lista
}

void confirmarCadastro(professor prof){
  
}


