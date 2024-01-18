/* Desenvolva um programa que imite um caixa eletrônico bancário, o qual o
usuário pode selecionar as seguintes opções no menu: “1. Saldo em Conta
Corrente, 2. Extrato bancário, 3. Sacar dinheiro e 4. Transferência”. Imprima
uma Informação para cada opção selecionada. Por fim, permita que o usuário possa
optar por realizar outra operação ou encerrar as operações no Caixa.*/

#include <stdio.h>
#include <unistd.h>

int main() {
  while (1) {
    int op = 0;
    char op2 = 'N';
    printf("QUAL OPERAÇÃO QUER EXECUTAR ?\n");
    printf(" 1- SALDO EM CONTA CORRENTE\n");
    printf(" 2- EXTRATO BANCARIO\n");
    printf(" 3- SACAR DINHEIRO\n");
    printf(" 4- TRANSFERENCIA\n");
    scanf("%d", &op);
    switch (op) {
    case 1:
      printf("SALDO EM CONTA BANCARIA\n\n");
      break;
    case 2:
      printf("EXTRATO BANCARIO\n\n");
      break;
    case 3:
      printf("SACAR DINHEIRO\n\n");
      break;
    case 4:
      printf("TRANSFERENCIA\n\n");
      break;
    default:
      printf("OPCAO INVALIDA!\n");
      continue;
    }
    printf("DESEJA REALIZAR OUTRA OPERACAO ? S/N \n");
    scanf(" %c", &op2);
    sleep(1);
    printf("\e[1;1H\e[2J");
    if (op2 != 'S' && op2 != 's') {
      printf("ATENDIMENTO ENCERADO\n");
      break;
    }
  }
}
