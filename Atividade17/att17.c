/*Escreva um programa que simule um jogo da forca. A palavra já deve ser
escolhida pelo programador O programa deve informar uma dica para a palavra 
e a quantidade de letras que ela possui , representadas pelo underline “_”
O usuário deve ter um número máximo de tentativas, informadas pelo programa
Ao acertar uma letra, a mesma deve ser preenchida na posição em que ela se
encontra na palavra, substituindo o “_”. Se o usuário esgotar as tentativas e
não acertar, ele perde. Caso não se esgotem as tentativas e o usuário acerte a
palavra, o usuário deve ser informado que venceu o jogo.*/

#include <stdio.h>
int main() {
  char *palavra = "vuvuzela";
  char palavra_acertada[9] = {'_', '_', '_', '_', '_', '_', '_', '_', 0};
  char letra_do_usuario = 0;
  printf("-----JOGO DA FORCA-----\n");
  printf("     *** DICA ***\n  EH UM ELEMENTO INSTRUMENTAL\n");
  printf("\n  -------------");
  printf("\n |           |");
  printf("\n |           0");
  printf("\n |          -|-");
  printf("\n |          / \\");
  printf("\n |");
  printf("\n |");
  printf("\n |");
  printf("\n -\n");
  for (int i = 0; i < 5; i++) {
    printf("ADIVINHE:  %s\n", palavra_acertada);
    scanf(" %c", &letra_do_usuario);
    int jogador_errou = 1;
    for (int k = 0; k < 8; k++) {
      if (letra_do_usuario == palavra[k]) {
        jogador_errou = 0;
        palavra_acertada[k] = letra_do_usuario;
      }
    }
    if (jogador_errou == 1) {
      printf("LETRA ERRADA\n");
      printf("VOCE TEM %d CHANCES\n", 5 - i - 1);
    } else {
      i--;
      int jogador_acertou_todas = 1;
      for (int cont = 0; cont < 8 && jogador_acertou_todas == 1; cont++) {
        if (palavra_acertada[cont] != palavra[cont]) {
          jogador_acertou_todas = 0;
        }
      }
      if (jogador_acertou_todas == 1){
          printf ("JOGADOR GANHOU!\n");
          break;
      }
    }
  }
}
