/*Crie um programa de pesquisa de opinião em que devem ser solicitadas as
opiniões de 10 telespectadores sobre um filme. Os telespectadores devem informar
sua idade e se o filme foi “regular”, “bom” ou “excelente”. No final da
pesquisa, devem ser impressas as seguintes informações:
• Média de idade dos telespectadores que responderam excelente
• Quantidade de telespectadores que responderam regular
• Porcentagem de telespectadores que responderam bom, entre
todos os telespectadores analisados.*/

#include <stdio.h>
#include <unistd.h>
struct telespectador {
  int idade;
  int opiniao;
};
typedef struct telespectador telespectador;

int main() {
  telespectador telespectadores[10] = {0};

  for (int cont = 0; cont < 10; cont++) {
    printf("QUAL SUA IDADE: ");
    scanf("%d", &telespectadores[cont].idade);
    sleep(1);
    printf("\e[1;1H\e[2J");
    printf("---- BEM VINDO AO MUNDO DA CRITICA DO FILME X----");
    while (1) {
      printf(
          "SUA OPINIAO DO FILME:\n 1 - REGULAR \n 2 - BOM\n 3 - EXCELENTE \n");
      scanf("%d", &telespectadores[cont].opiniao);
      printf("\e[1;1H\e[2J");
      if (telespectadores[cont].opiniao > 3 ||
          telespectadores[cont].opiniao < 1) {
        printf("ENTRADA ERRADA\n");
      } else {
        break;
      }
    }
  }
  double acumulador_idade = 0;
  double contador_excelente = 0;
  double acumulador_idade_bom = 0;
  double contador_bom = 0;
  int contador_regular = 0;
  for (int cont = 0; cont < 10; cont++) {
    if (telespectadores[cont].opiniao == 3) {
      acumulador_idade = telespectadores[cont].idade + acumulador_idade;
      contador_excelente += 1;
    } else if (telespectadores[cont].opiniao == 2) {
      acumulador_idade_bom = telespectadores[cont].idade + acumulador_idade_bom;
      contador_bom += 1;
    } else if (telespectadores[cont].opiniao == 1) {
      contador_regular += 1;
    }
  }
  double media_idade_excelente = acumulador_idade / contador_excelente;
  if (contador_excelente == 0) {
    media_idade_excelente = 0;
  }
  printf("A MEDIA DE IDADE DOS TELESPECTADORES QUE RESPONDERAM EXCELENTE "
         "FOI: %.2lf\n",
         media_idade_excelente);
  printf("QUANTIDADE DE TELESPECTADORES QUE RESPONDERAM REGULAR FOI: %.2d\n",
         contador_regular);
  printf("PORCENTAGEM DE TELESPECTADORES QUE RESPONDERAM BOM: %.2lf%%\n",
         contador_bom * 100 / 10);
}
