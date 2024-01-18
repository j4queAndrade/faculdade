/*Simule o lançamento de 2 dados (dados de jogar, com valores de 1 a 6) e
compare os valores obtidos para saber qual dos dados deu o maior valor ou se os
dados deram valores iguais. O usuário pode escolher quantos lançamentos
desejar.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  int acumulado_dado1 = 0;
  int quantidade_d_lancamento = 0;
  printf("JOGO DO DADO\n");
  printf("DESEJA FAZER QUANTOS LANCAMENTOS ?\n");
  scanf("%d", &quantidade_d_lancamento);
  srand(time(NULL));
  for (int cont = 0; cont < quantidade_d_lancamento; cont++) {
    printf("------DADO 1------\n");
    int dado1 = rand() % 6 + 1; //+ 1 para não começar do zero
    acumulado_dado1 += dado1;
    printf("FACE: %d\n", dado1);
  }
  int acumulado_dado2 = 0;
  for (int cont2 = 0; cont2 < quantidade_d_lancamento; cont2++) {
    printf("------DADO 2------\n");
    int dado2 = rand() % 6 + 1;
    acumulado_dado2 += dado2;
    printf("FACE: %d\n", dado2);
  }
  if (acumulado_dado1 == acumulado_dado2) {
    printf("VALORES DOS DADOS SAO IGUAIS\n");
  } else if (acumulado_dado1 > acumulado_dado2) {
    printf("O VALOR DO DADO 1 EH MAIOR, QUE FOI IGUAL A:%d\n", acumulado_dado1);
  } else {
    printf("O VALOR DO DADO 2 EH MAIOR, QUE FOI IGUAL A:%d\n", acumulado_dado2);
  }
}
