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

Cliente cadastrarCliente();

int validarNome(char nome[]);
int validaCpf(char cpf[]);
int validaSexo(char s);
int validaData(DateTime data);



int main() {
  Cliente cliente;
    cliente = cadastrarCliente();
    
    if (cliente.id <= 0){ 
        
        if (cliente.id == -1){
            printf("ERRO no cadastramento do nome");    
        }else if (cliente.id == -2){
            printf("Erro no cadastramento do cpf");    
        }else if(cliente.id == -3){
          printf("Erro no cadastramento da data de nascimento");
        }else if(cliente.id == -4){
          printf("Erro no cadastramento do sexo");
        }

    }else{
        printf("\n\n+++++++++++++++++++++++++++++++++++++\n\n");
        printf("Cliente cadastrado com sucesso!!!!\n");
        printf("%s\n",cliente.nome);
        printf("%s\n",cliente.cpf);
        printf("%d/%d/%d\n", cliente.dataNascimento.dia,cliente.dataNascimento.mes,cliente.dataNascimento.ano);
        printf("%s", cliente.sexo);
    }    
    
  
}

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
    erro = 1;
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
}

Cliente cadastrarCliente() {
  int erros = 0;
  Cliente controlaCliente;
  controlaCliente.id = -1;
  DateTime data;

  printf("======= Seja Bem vindo a sessão de cadastro!! =======\n");

  printf("Digite seu nome...");
  fgets(controlaCliente.nome, 21,  stdin);

  erros = validarNome(controlaCliente.nome);
  
  if(erros == 1) {
    controlaCliente.id = -1;
    return controlaCliente;
  } else {
    printf("Digite seu CPF. Não utilize hífen nem pontos \n");
    fgets(controlaCliente.cpf, 12, stdin);
    erros = validaCpf(controlaCliente.cpf);
  }

  if (erros == 1) {
    controlaCliente.id = -2;
    return controlaCliente;
  } else {
    printf("Digite sua data de nascimento dd mm aaaa \n");
    scanf("%i", &data.dia);
    fflush(stdin);
    scanf("%i", &data.mes);
    fflush(stdin);
    scanf("%i", &data.ano);
    fflush(stdin);
    controlaCliente.dataNascimento = data;

    erros = validaData(controlaCliente.dataNascimento);
  }
  if (erros == 1) {
    controlaCliente.id = -3;
    return controlaCliente;
  } else {

    getchar();
    printf("M - Masculino \nF- Feminino\n");
    scanf("%c", &controlaCliente.sexo[0]);
    fflush(stdin);
  }

  if (erros == 1) {
    controlaCliente.id = -4;
    return controlaCliente;
  } else {
    controlaCliente.id = 1;
  }

  return controlaCliente;
}