/*Escreva um programa que solicite 10 números para o usuário. Em seguida,
imprima esses 10 números em ordem crescente e decrescente.*/

#include <stdio.h>
int main() {
  int numero[10] = {0};
  for (int cont = 0; cont < 10; cont++) {
    printf("DIGITE UM NUMERO INTEIRO: ");
    scanf("%d", &numero[cont]);
  }
  for (int cont = 0; cont < 10; cont++) {
    for (int cont2 = cont; cont2 < 10; cont2++) {
      if (numero[cont] > numero[cont2]) {
        int x = numero[cont];
        numero[cont] = numero[cont2];
        numero[cont2] = x;
      }
    }
  }
  printf ("NUMERO EM ORDEM CRESCENTE:\n");
  for (int cont = 0; cont < 10; cont++){
    printf ("%d\n", numero[cont]);
  }
  printf ("NUMERO EM ORDEM DECRESCENTE: \n");
  for (int cont = 9; cont >= 0; cont--){
    printf ("%d\n", numero[cont]);
  }
}
