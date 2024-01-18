/*Utilize a biblioteca “math.h” e escreva um programa que calcule a raiz
quadrada de um número e efetue cálculo de potência (base e expoente.
Potenciação). Os números a serem utilizados nos cálculos devem ser solicitados
ao usuário. Bem como, o usuário deve escolher o tipo de operação (raiz quadrada
ou potenciação).*/

#include <math.h>
#include <stdio.h>

int main() {
  int numero = 0;
  int operacao = 0;
  int valor_base;
  while (1) {
    printf("QUAL OPERACAO DESEJA EFETUAR:\n");
    printf("1 - RAIZ QUADRADA\n");
    printf("2 - POTENCIALIZACAO\n");
    scanf("%d", &operacao);
    if (operacao == 1) {
      printf("DIGITE UM NUMERO PARA REALIZAR A OPERAÇÃO: ");
      scanf("%d", &numero);
      printf("A RAIZ DE %d E: %.2lf\n\n", numero, sqrt(numero));
    }

    else if (operacao == 2) {
      int expoente = 1;
      printf("DIGITE O VALOR DA BASE: ");
      scanf("%d", &valor_base);
      printf("DIGITE O VALOR DO EXPOENTE ");
      scanf("%d", &expoente);
      double result = pow(valor_base, expoente);
      printf("resultado da potencializacao e: %.2lf\n", result);
    } else {
      printf("OPCAO INVALIDA\n");
    }
    printf("DESEJA CONTINUAR: ");
    char opcao = 'n';
    scanf(" %c", &opcao);
    if (opcao != 'S' && opcao != 's') {
      break;
    }
  }
}
