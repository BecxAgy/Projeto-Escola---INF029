#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Aluno.h"
#include "Disciplina.h"

/* Funções específicas de Aluno */
int confirmarCadastroAluno(aluno aluno);
int confirmarDeleteAluno(listaAlunos *list, int index);
int qtdCadastroAlunos(listaAlunos *list);
void imprimirDisciplinasAluno(aluno aluno);
void cadastrarAlunos(aluno aluno, listaAlunos *list, listaDisc *listD, listaProf *listP);
void matricularAluno(listaAlunos *listA, listaDisc *listD);
void excluirAluno(listaAlunos *list, listaDisc *listD);
void desmatricularAluno(listaAlunos *listA, listaDisc *listD);


