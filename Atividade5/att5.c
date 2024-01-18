/*Escreva um programa que permita a venda de bebidas. O programa deve verificar
a idade do usuário e permitir a venda apenas se a idade for igual ou maior do
que 18 anos. O usuário pode escolher a quantidade de bebidas que deseja comprar.
Assim como, pode comprar mais de uma bebida. As opções de bebida são: O programa
deve aplicar um desconto de 10% caso sejam compradas 5 ou mais bebidas (de
qualquer tipo) e de 20% caso sejam compradas 10 ou mais bebidas (de qualquer
tipo). No final, devem ser informados o valor total da compra, quais bebidas
foram escolhidas e a quantidade de cada uma.*/
#include <stdio.h>
#include <unistd.h>

int main() {
  int idade = 0;

  printf("DIGITE SUA IDADE: ");
  scanf("%d", &idade);
  if (idade < 18) {
    printf("IDADE INSUFICIENTE PARA EFETUAR A COMPRA\n ");
  } else {
    int qntd[70] = {0};
    int bebida[70] = {0};
    int indice = 0;
    int qtd_total = 0;
    int marca[70] = {0};
    int catalogo_valor[4][3] = {
        {3, 4, 5}, {30, 80, 100}, {100, 120, 130}, {20, 150, 10000}};
    while (1) {
      printf("----CATALOGO DE BEBIDAS----\n");
      printf("1 - Cerveja\n Marca 1: R$ 3,00\n Marca 2: R$ 4,00\n Marca 3: R$ "
             "5,00\n\n");

      printf("2 - VODKA\n Marca 1: R$ 30,00\n Marca 2: R$ 80,00\n Marca 3: R$ "
             "100,00\n\n ");

      printf(
          "3 - WHISKY\n Marca 1: R$ 100,00\n Marca 2: R$ 120,00\n Marca 3: R$ "
          "130,00\n\n ");

      printf("4 - VINHO\n Marca 1: R$ 20,00\n Marca 2: R$ 150,00\n Marca 3: R$ "
             "10.000,00 \n\n");
      printf("ESCOLHA SUA BEBIDA: ");
      scanf("%d", &bebida[indice]);
      if (bebida[indice] > 4 || bebida[indice] < 1) {
        printf("INVALIDO, TENTE NOVAMENTE\n");
        sleep(1.5);
        continue;
      }
      printf("ESCOLHA A MARCA: ");
      scanf("%d", &marca[indice]);
      if (marca[indice] > 3 || marca[indice] < 1) {
        printf("INVALIDO, TENTE NOVAMENTE\n");
        sleep(1.5);
        continue;
      }
      printf("ADICIONE A QUANTIDADE: ");
      scanf("%d", &qntd[indice]);
      qtd_total = qntd[indice] + qtd_total;
      char opcao = 's';
      printf("DESEJA CONTINUAR O PEDIDO: S/N\n");
      scanf(" %c", &opcao);
      indice = indice + 1;
      if ((opcao != 's') && (opcao != 'S')) {
        break;
      }
    }
    printf("\e[1;1H\e[2J");
    int preco_total = 0;
    for (int cont = 0; cont < indice; cont++) {
      int posicao_bebida = bebida[cont] - 1;
      int posicao_marca = marca[cont] - 1;
      preco_total += catalogo_valor[posicao_bebida][posicao_marca] * qntd[cont];
    }
    if (qtd_total >= 10) {
      preco_total = preco_total * 0.8;
    } else if (qtd_total >= 5) {
      preco_total = preco_total * 0.9;
    }
    for (int cont = 0; cont < indice; cont++) {
      printf("A BEBIDA ESCOLHIDA FOI: %d DA MARCA: %d  E SUAS RESPECTIVAS "
             "QUANTIDADES: %d\n",
             bebida[cont], marca[cont], qntd[cont]);
    }
    printf("QUANTIDADE TOTAIS DAS BEBIDAS ESCOLHIDA: %d \n", qtd_total);
    printf("O VALOR TOTAL DAS COMPRAS FOI: %d \n", preco_total);
  }
}
