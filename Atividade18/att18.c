/*Verifique um vetor de tamanho 20 e exclua os números repetidos. Os valores
para preenchimento do vetor devem ser solicitados ao usuário. No final, o
programa verifica se existem valores repetidos, os exclui e imprime um vetor
apenas com valores únicos (não repetidos). OBS: É importante que o programa
imprima os dois vetores: o original e o sem repetição(ões) de valor(es).*/
#define QUANTIDADE_NUMERO 20
#include <stdio.h>
int main() {
  int num[20] = {0};
  int num_nao_repetido[20] = {0};
  int cont_num_n_repetido = 0;
  for (int cont = 0; cont < QUANTIDADE_NUMERO; cont++) {
    printf("DIGITE UM NUMERO INTEIRO:");
    scanf("%d", &num[cont]);
    int eh_numero_repetido = 0;
    for (int i = 0; i < cont_num_n_repetido; i++) {
      if (num[cont] == num_nao_repetido[i]) {
        eh_numero_repetido = 1;
        break;
      }
    }
    if (eh_numero_repetido == 0) {
      num_nao_repetido[cont_num_n_repetido] = num[cont];
      cont_num_n_repetido += 1;
    }
  }
  printf("NUMEROS NO VETOR ORIGINAL A SEGUIR:\n");
  for (int cont = 0; cont < QUANTIDADE_NUMERO; cont++) {
    printf(" %d", num[cont]);
  }
  printf("\n\nNUMEROS NO VETOR SEM REPETIÇOES A SEGUIR:\n");
  for (int cont = 0; cont < cont_num_n_repetido; cont++) {
    printf(" %d", num_nao_repetido[cont]);
  }
  printf("\n");
}
