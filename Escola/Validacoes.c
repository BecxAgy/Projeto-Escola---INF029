#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include "Validacoes.h"

/* Protótipos de Funções exclusivas de Validações */
boolean ehBissexto(int ano);

// Função que verifica se um número é ou não bissexto.
boolean ehBissexto(int ano) {
    boolean bis;

    if (ano % 4 == 0 && !(ano % 100 == 0)) bis = true;
    else if (ano % 4 == 0 && (ano % 100 == 0 && ano % 400 == 0)) bis = true;
    else bis = false;

    return bis;
}

// Função responsável por validar o CPF, retornando se tem ou não um erro.
boolean validarCPF(char cpf[]) {
    boolean erro = false;

    int contDigitos = 0;

    if (strlen(cpf) != TAM_CPF - 1 || !(cpf[3] == '.' || cpf[7] == '.' || cpf[11] == '-')) {
        erro = true;
    } else {
        for (int i = 0; i < TAM_CPF - 1 && !erro; i++) {
            if (contDigitos < 3) {
                if (!(cpf[i] >= '0' && cpf[i] <= '9')) {
                    erro = true;
                    break;
                }
                contDigitos++;
            } else {
                contDigitos = 0;
            }
        }
    }
    return erro;
}

// Função responsável por validar o sexo, retornando se tem ou não um erro.
boolean validarSexo(char sexo) {
    boolean erro = false;

    if (!(sexo == 'm' || sexo == 'f' || sexo == 'o'))
        erro = true;
    return erro;
}

// Função responsável por validar um nome, retornando se tem ou não um erro.
boolean validarNome(char nome[]) {
    boolean erro = false;

    for (int i = 0; nome[i] != '\0'; i++) {
        if ((!(nome[i] >= 'a' && nome[i] <= 'z') && !(nome[i] >= 'A' && nome[i] <= 'Z')) 
            && !(nome[i] == ' ')) {
            erro = true; break;
        }
    }
    
    return erro;
}