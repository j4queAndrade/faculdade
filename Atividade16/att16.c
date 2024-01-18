/*Escreva um programa que solicite uma palavra ao usuário. Em seguida, imprima
esta palavra ao contrário.*/

#include <stdio.h>
#include <string.h>
int main() {
  char palavra[50];
  printf("DIGITE UMA PALAVRA: ");
  scanf("%s", palavra);
  printf("PALAVRA AO CONTRARIO E: ");
  for (int i = strlen(palavra) - 1; i >= 0; i--) {
    printf("%c", palavra[i]);
  }
  printf ("\n");
}

