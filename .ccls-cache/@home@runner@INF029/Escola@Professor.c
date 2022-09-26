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

  listaProf* lista;

  lista =
}