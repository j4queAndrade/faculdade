/*Escreva um programa que solicite uma letra ao usuário e imprima todo o
alfabeto (até Z), a partir da letra informada.*/

#include <stdio.h>
int main() {
  char letra = 'a';
  printf("DIGITE UMA LETRA: ");
  scanf("%c", &letra);
  printf("ALFABETO A PARTIR DA LETRA INSERIDA QUE FOI: %c\n", letra);
  for (; letra <= 'z'; letra++) {
    printf(" %c", letra);
  }
  printf("\n");
}
