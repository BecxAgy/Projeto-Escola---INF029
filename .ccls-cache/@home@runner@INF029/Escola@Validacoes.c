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

