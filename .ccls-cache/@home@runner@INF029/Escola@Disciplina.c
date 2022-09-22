#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Disciplina.h"
#include "Aluno.h"
#include "Professor.h"


/*Lista de Disciplinas que aponta para a Struct listaDisc*/
listaDisc* criarListaDisc() {
    listaDisc *list;

    list = (listaDisc *) malloc(sizeof (listaDisc));

    if (list != NULL) {
        list -> qtdDisc = 0;
    }
 
    return list;
}

void inserirDisciplinas(listaDisc *lista) {
    //1ª disciplina do banco de dados
    strcpy(lista -> disciplinas[0].nome, "Laboratório de Programação");
    strcpy(lista -> disciplinas[0].codigo, "LAB29");
    lista -> disciplinas[0].qtdSemestre = 5;
    lista -> disciplinas[0].qtdVagas = TAM_VAGAS;
    lista -> disciplinas[0].contVagas = 0;
    lista -> disciplinas[0].qtdResp = 0;

    //2ª disciplina do banco de dados
    strcpy(lista -> disciplinas[1].nome, "Metodologia de Pesquisa");
    strcpy(lista -> disciplinas[1].codigo, "MEP12");
    lista -> disciplinas[1].qtdSemestre = 4;
    lista -> disciplinas[1].qtdVagas = TAM_VAGAS;
    lista -> disciplinas[1].contVagas = 0;
    lista -> disciplinas[1].qtdResp = 0;

    //3ª disciplina do banco de dados
    strcpy(lista -> disciplinas[2].nome, "Estrutura de Dados e Algoritmos");
    strcpy(lista -> disciplinas[2].codigo, "EDA76");
    lista -> disciplinas[2].qtdSemestre = 7;
    lista -> disciplinas[2].qtdVagas = TAM_VAGAS;
    lista -> disciplinas[2].contVagas = 0;
    lista -> disciplinas[2].qtdResp = 0;

    //4ª disciplina do banco de dados
    strcpy(lista -> disciplinas[3].nome, "Arquitetura de Computadores");
    strcpy(lista -> disciplinas[3].codigo, "AC89");
    lista -> disciplinas[3].qtdSemestre = 3;
    lista -> disciplinas[3].qtdVagas = TAM_VAGAS;
    lista -> disciplinas[3].contVagas = 0;
    lista -> disciplinas[3].qtdResp = 0;

    //5ª disciplina do banco de dados
    strcpy(lista -> disciplinas[4].nome, "Estágio Supervisionado");
    strcpy(lista -> disciplinas[4].codigo, "ES07");
    lista -> disciplinas[4].qtdSemestre = 1;
    lista -> disciplinas[4].qtdVagas = TAM_VAGAS;
    lista -> disciplinas[4].contVagas = 0;
    lista -> disciplinas[4].qtdResp = 0;
}

//Função que irá imprimir o prof dado o index que irá estar num loop
void imprimirProf(listaDisc *lista, int index) {
    if (lista -> disciplinas[index].qtdResp == 0) {
        printf("\tNão há Professor Cadastrado!\n");
    } else if (lista -> disciplinas[index].qtdResp == 1) {
        printf("Professor(a): %s\n", lista -> disciplinas[index].responsavel[0].nome);
    } else {
        printf("Professores(as): %s e %s\n", lista -> disciplinas[index].responsavel[0].nome,
                                            lista -> disciplinas[index].responsavel[1].nome);
    }
}

// Função que cadastra um Professor na lista de Disciplinas
void cadastrarProfDisc(professor prof, listaDisc *lista, int opcao) {
    lista -> disciplinas[opcao].responsavel[lista -> disciplinas[opcao].qtdResp] = prof;
    lista -> disciplinas[opcao].qtdResp++;
    puts("Professor Cadastrado na Disciplina!");
}

// Função que cadastra um aluno em uma determinada Disciplina
void cadastrarAlunoDisc(aluno aluno, listaDisc *lista, int opcao) {
    lista -> disciplinas[opcao].vagas[lista -> disciplinas[opcao].contVagas] = aluno;
    lista -> disciplinas[opcao].contVagas++;
    lista -> disciplinas[opcao].qtdVagas--;
    puts("Aluno Cadastrado na Disciplina!");
}


// Função que mostra o menu de disciplinas para Professores
int menuDisciplinasProf(listaDisc *lista) {
    int opcao;
    
    puts("Escolha a opção referente a disciplina que irá lecionar:");
    for (int i = 0; i < MAX_DISCIPLINAS; i++) {
        puts("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
        printf("\tOPÇÃO %d\n", i + 1);
        printf("%s - %s\n", lista -> disciplinas[i].nome, lista -> disciplinas[i].codigo);
        imprimirProf(lista, i);
        printf("Vagas: %d\n", lista -> disciplinas[i].qtdVagas);
        puts("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
    }
    do {
        printf("\nOpção: ");
        scanf("%d", &opcao);
        if (opcao < 1 || lista -> disciplinas[opcao - 1].qtdResp > 2)
            puts("Opção Inválida. Tente Novamente!\n");
    } while (opcao < 1 || lista -> disciplinas[opcao - 1].qtdResp > 2);

    return opcao - 1;
}

// Função que mostra o menu de Disciplinas para Alunos
int menuDisciplinasAluno(listaDisc *lista) {
    int opcao;
    
    puts("Escolha a opção referente a disciplina que irá cursar:");
    for (int i = 0; i < MAX_DISCIPLINAS; i++) {
        puts("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
        printf("\tOPÇÃO %d\n", i + 1);
        printf("%s - %s\n", lista -> disciplinas[i].nome, lista -> disciplinas[i].codigo);
        imprimirProf(lista, i);
        printf("Vagas: %d\n", lista -> disciplinas[i].qtdVagas);
        puts("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    }
    do {
        printf("\nOpção: ");
        scanf("%d", &opcao);
        if (opcao < 1 || lista -> disciplinas[opcao - 1].qtdVagas == 0)
            puts("Opção Inválida. Tente Novamente!\n");
    } while (opcao < 1 || lista -> disciplinas[opcao - 1].qtdVagas == 0);

    return opcao - 1;
}


