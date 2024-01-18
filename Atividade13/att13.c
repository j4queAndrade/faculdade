/*Escreva um programa de Controle de Estoque, em que o usuário possui as
seguintes opções: cadastrar uma mercadoria (nome, quantidade, preço unitário),
consultar as mercadorias cadastradas, obter o valor total em mercadorias e
excluir mercadorias (seja em quantidade ou por completo). Neste programa, o
usuário poderá cadastrar no máximo 10 mercadorias.*/

#include <stdio.h>
#include <unistd.h>
#define QUANTIDADE_MAXIMA 10
struct mercadoria {
  char nome[100];
  int quantidade;
  double valor;
};
typedef struct mercadoria mercadoria;
int main() {
  mercadoria mercadorias[QUANTIDADE_MAXIMA] = {0};
  int opcao = 0;
  int cont = 0;
  while (1) {
    printf("1 - CADASTRAR MERCADORIA\n");
    printf("2 - CONSULTAR ESTOQUE\n");
    printf("3 - VALOR TOTAL EM ESTOQUE\n");
    printf("4 - ATUALIZAR ESTOQUE DE MERCADORIA\n");
    scanf("%d", &opcao);
    sleep(1);
    printf("\e[1;1H\e[2J");
    if (opcao == 1) {
      printf("CONTROLE DE ESTOQUE\n ----CADASTRO----\n");
      for (; cont < QUANTIDADE_MAXIMA;) {
        printf("NOME DA MERCADORIA: ");
        scanf("%s", mercadorias[cont].nome);
        printf("QUANTIDADE DA MERCADORIA: \n");
        scanf("%d", &mercadorias[cont].quantidade);
        printf("VALOR UNITARIO DA MERCADORIA: \n");
        scanf("%lf", &mercadorias[cont].valor);
        char escolha = 'S';
        printf("DESEJA CONTINUAR CADASTRANDO MAIS MERCADORIAS (S/N) ?\n");
        scanf(" %c", &escolha);
        cont++;
        sleep(1);
        printf("\e[1;1H\e[2J");
        if (escolha != 'S' && escolha != 's') {
          break;
        }
      }
      if (cont == QUANTIDADE_MAXIMA) {
        printf("VOCE ATINGIU A QUANTIDADE MAXIMA DE CADASTRO\n");
      }
    } else if (opcao == 2) {
      for (int i = 0; i < cont; i++) {
        printf("\n MERCADORIA %d\n", i + 1);
        printf("NOME: %s\nQUANTIDADE: %d\nVALOR: %.2lf\n\n",
               mercadorias[i].nome, mercadorias[i].quantidade,
               mercadorias[i].valor);
      }
    } else if (opcao == 3) {
      double acumulador = 0;
      for (int i = 0; i < cont; i++) {
        acumulador =
            (mercadorias[i].quantidade * mercadorias[i].valor) + acumulador;
      }
      printf("VALOR TOTAL EM ESTOQUE E: %.2lf\n", acumulador);
    } else if (opcao == 4) {
      int escolha_mercadoria = 0;
      printf("QUAL MERCADORIA DESEJA MODIFICAR ?\n");
      for (int i = 0; i < cont; i++) {
        printf("\n MERCADORIA %d\n", i + 1);
        printf("NOME: %s\nQUANTIDADE: %d\n", mercadorias[i].nome,
               mercadorias[i].quantidade);
      }
      scanf("%d", &escolha_mercadoria);
      if (escolha_mercadoria > cont || escolha_mercadoria < 1){
        printf("mercadoria inexistente\n");
        continue;
      }
      printf("DIGITE A NOVA QUANTIDADE (0 PARA DELETAR A MERCADORIA): ");
      scanf("%d", &mercadorias[escolha_mercadoria - 1].quantidade);
      if (mercadorias[escolha_mercadoria - 1].quantidade == 0) {
        for (int i = escolha_mercadoria - 1; i < cont; i++) {
          if (i + 1 == cont) {
            mercadoria descarte = {0}; 
            mercadorias[i] = descarte;
          } else {
            mercadorias[i] = mercadorias[i + 1];
          }
        }
        cont --;
        printf ("REMOVIDO COM SUCESSO\n");
      }
    }
  }
}
