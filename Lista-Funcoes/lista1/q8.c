#include <stdio.h>
#include <string.h>
/*Validações a fazer
- Nome
- Data
- cpf
- sexo
*/
typedef struct data {
  int dia;
  int mes;
  int ano;
} DateTime;

typedef struct cliente {
  int id;
  char nome[21];
  DateTime dataNascimento;
  char cpf[12];
  char sexo[2];
} Cliente;

int validaNome(char nome[]) {
  int tamanhoNome = strlen(nome);
  int erro = 0;

  if (tamanhoNome > 21) {
    erro = 1;
  }
  return erro;
}

int validaSexo(char s) {
  int erro = 0;

  if (s == 'F' || s == 'M' || s == 'm' || s == 'f') {
    return
  }
  return erro;
}

int validaCpf(char cpf[]) {
  int tamanhoCpf = strlen(cpf);

  int erro = 0;

  if (tamanhoCpf != 12) {
    erro = 1;
  }

  return erro;
}

int validaData(DateTime data) {
  int dia = data.dia;
  int mes = data.mes;
  int ano = data.ano;
  int erro = 0;

  if (dia < 1 || dia > 31) {
    erro = 1;
  }

  if (mes < 1 || mes > 12) {
    erro = 1;
  }
  if (mes == 2) {
    if (dia > 28) {
      erro = 1;
    }

    if (ano < 1940 || ano > 2022) {
      erro = 1;
    }

    return erro;
  }

  int main() {}

  int cadastrarCliente(Cliente cliente1) {
    DateTime data;
    int erros = 0;
    Cliente controlaCliente;
    controlaCliente.id = -1;

    printf("======= Seja Bem vindo a sessão de cadastro!! =======\n");

    printf("Digite seu nome...");
    gets(cliente1.nome);

    erros = validarNome(cliente1.nome);
    if (erros = 1) {
      controlaCliente.id = -1;
      return controlaCliente.id;
    } else {
      printf("Digite seu CPF. Não utilize hífen nem pontos \n");
      gets(cliente1.cpf, 12, stdin);
      erros = validaCpf(cliente1.cpf);
    }

    if (erros = 1) {
      controlaCliente.id = -1;
      return controlaCliente.id;
    } else {
      printf("Digite sua data de nascimento dd mm aaaa \n");
      scanf("%i", &data.dia);
      fflush(stdin);
      scanf("%i", &data.mes);
      fflush(stdin);
      scanf("%i", &data.ano);
      fflush(stdin);
      cliente1.dataNascimento = data;

      erros = validaData(cliente1.dataNascimento);
    }
    if (erros = 1) {
      controlaCliente.id = -1;
      return controlaCliente.id;
    } else {
      getchar();
      printf("M - Masculino \nF- Feminino\n");
      scanf("%c", &cliente1.sexo[0]);
      fflush(stdin);

      c
    }
  }

  int main(void) {
    Cliente novoCadastro = cadastrarCliente();
    printf("Nome: ");
    puts(novoCadastro.nome);

    printf("CPF: ");
    puts(novoCadastro.cpf);

    printf("Sexo: ");
    puts(novoCadastro.sexo);

    printf("Data de nascimento: ");
    printf("%i/%i/%i", novoCadastro.dataNascimento.dia,
           novoCadastro.dataNascimento.mes, novoCadastro.dataNascimento.ano);
  }
