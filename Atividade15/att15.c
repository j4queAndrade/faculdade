/*Escreva um programa para gerar automaticamente os números (de 0 a 99) de uma cartela de
bingo. A cartela possui um tamanho 3x3 e não deve possuir números repetidos. No final, imprima
a matriz com os números gerados pela cartela*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  printf("--------BEM VINDO AO BINGO-------\n\n");
  int matriz[3][3];
  printf("GERANDO 10 NUMEROS ALEATORIOS...\n\n");
  srand(time(NULL));
   printf("CARTELA: ");
  for (int i = 0; i < 3; i++) {
    printf ("\n");
    for (int j = 0; j < 3; j++) {
      int valorRand = rand() % 100;
    int eh_valor_repetido = 0;
      for (int m = 0; m < i; m++) {
        for (int n = 0; n < j; n++) {
          if (valorRand == matriz[m][n]) {
            eh_valor_repetido = 1;
          }
        }
      }
      if (eh_valor_repetido == 1) {
        j--;
      } else {
        matriz[i][j] = valorRand;
        printf(" %d", matriz[i][j]);
      }

    }
  }
  printf("\n");
}
