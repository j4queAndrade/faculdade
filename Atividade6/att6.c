/*Escreva um programa que simule um jogo. O programa deve reconhecer as teclas:
“w” para andar para frente, “d” para andar para a direita, “a” para andar para a
esquerda, “s” para andar para trás e a tecla de espaço para pular. Quando o
usuário digitar uma das teclas, o programa deve imprimir a ação a ser executada.
O programa também deve permitir o acesso a um menu, em que o usuário possa usar
um poder especial, tomar uma poção de mana ou uma poção de saúde. As teclas para
acessar o menu e selecionar as opções ficam a critério do desenvolvedor.*/

#include <stdio.h>
#include <unistd.h>
int main() {
  char opcao;
  int escolha;

  printf("--------------------------\n "
         "JOGO\n--------------------------\n ");
  while (1) {
    printf("--------MENU---------\n");
    printf("ESCOLHA UMA TECLA\n");
    printf("A TECLA 'W' PARA ANDAR PARA FRENTE \n");
    printf("A TECLA 'D' PARA ANDAR PARA DIREITA\n");
    printf("A TECLA 'S' PARA ANDAR PARA TRAS\n");
    printf("A TECLA DE ' ' PARA PULAR\n");
    printf("A TECLA 'Q' PARA UM PODER ESPECIAL\n");
    printf("A TECLA ESC PARA ENCERRAR O JOGO\n");
    scanf("%c", &opcao);
    getchar(); // descarta o \n
    if (opcao == 'W' || opcao == 'w') {
      printf("-----ANDE UMA CASA PARA FRENTE COM O AVATAR-----\n\n");
    } else if (opcao == 'D' || opcao == 'd') {
      printf("-----ANDE UMA CASA PARA DIREITA COM O AVATAR-----\n\n");
    } else if (opcao == 'S' || opcao == 's') {
      printf("-----ANDE UMA CASA PARA TRAS COM O AVATAR-----\n\n");
    } else if (opcao == ' ') {
      printf("-----PULE UMA CASA COM O AVATAR-----\n\n");
    } else if (opcao == 'Q' || opcao == 'q') {
      printf("------------BEM VINDO AO PODER ESPECIAL------------\n");
      printf("ESCOLHA UMA DAS OPCOES:\n");
      printf("1 - POCAO DE MANA\n");
      printf("2- POCAO DE SAUDE\n");
      scanf("%d", &escolha);
      getchar();
      if (escolha == 1) {
        printf("\n-----MANA RECARREGADA-----\n");
      } else if (escolha == 2) {
        printf("\n-----SAUDE RECUPERADA (+ 3 VIDAS)-----\n");
      }
    } else if (opcao == 27) {
      printf("-------JOGO ENCERRADO-------\n");
      break;
    } else {
      printf("OPCAO INVALIDA\n");
      continue;
    }
    sleep(2); 
    printf("\e[1;1H\e[2J");
  }
}
