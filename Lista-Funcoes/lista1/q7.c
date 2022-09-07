#include <stdio.h>

/*Crie um programa que tenha uma função cadastrarCliente. Essa função deve ler os dados do
cliente (nome, dataNascimento, cpf, sexo) e retornar os dados do cliente. A função main deve
imprimir os dados do cliente*/
typedef struct data{
  int dia;
  int mes;
  int ano;
}DateTime;

typedef struct dados{
  char nome[51];
  DateTime dataNascimento;
  char cpf[12];
  char sexo[2];  
}Cliente;

Cliente cadastrarCliente(){
  Cliente cliente1;
  DateTime data;
  
  printf("======= Seja Bem vindo a sessão de cadastro!! =======\n");
  
  printf("Digite seu nome...");
  fgets(cliente1.nome, 51, stdin);
  
  printf("Digite seu CPF. Não utilize hífen nem pontos \n");
  fgets(cliente1.cpf, 12, stdin);
    
  //getchar();

  printf("Digite sua data de nascimento dd mm aaaa \n");
  scanf("%i",&data.dia);
  fflush(stdin);
  scanf("%i",&data.mes);
  fflush(stdin);
  scanf("%i",&data.ano);
  fflush(stdin);
  
  cliente1.dataNascimento = data;

  getchar();
  printf("M - Masculino \nF- Feminino\n");
  scanf("%c", &cliente1.sexo[0]);
  //cliente1.sexo[1] = '\0';
  fflush(stdin);
  
  return cliente1;
  
}

int main(void){
  Cliente novoCadastro = cadastrarCliente();
  printf("Nome: ");
  puts(novoCadastro.nome);

  printf("CPF: ");
  puts(novoCadastro.cpf);

  printf("Sexo: ");
  puts(novoCadastro.sexo);

  printf("Data de nascimento: ");
  printf("%i/%i/%i",novoCadastro.dataNascimento.dia, novoCadastro.dataNascimento.mes, novoCadastro.dataNascimento.ano);

  
  
}