#include <stdio.h>
#include <unistd.h>

int main() {
  int idade = 0;
  printf("BILHETERIA ONLINE\n");
  printf("DIGITE SUA IDADE: ");
  scanf("%d", &idade);
  opcoes:
  if (idade >= 12) {
    printf("1 - AVATAR\n AVENTURA - FICÇÃO \n  12 ANOS\n\n");
  }
  if (idade >= 16) {
    printf("2 - DEATH NOTE\n DRAMA - SUSPENSE\n  16 ANOS\n\n");
  }
  if (idade >= 18) {
    printf("3 - ÓRFÃ 2: A ORIGEM\n SUSPENSE  - TERROR\n  18 ANOS\n\n");
  }
  if (idade < 12) {
    printf("IDADE DO USUÁRIO NÃO PERMITIDA PARA A SESSÃO\n");
    return 0;
  }
  int filme = 1;
  while (1) {
    printf("QUAL SESSÃO DESEJA ASSISTIR: ");
    scanf("%d", &filme);
    if (filme > 3 || filme < 1) {
      printf("SESSÃO NÃO ENCONTRADA\n\n");
      sleep(1.5);
      printf("\e[1;1H\e[2J");
      goto opcoes;
    } else {
      if ((filme == 2 && idade < 16) || (filme == 3 && idade < 18)) {
        printf("IDADE DO USUÁRIO NÃO PERMITIDA PARA A SESSÃO\n");
        sleep(1.5);
        printf("\e[1;1H\e[2J");
        goto opcoes;
      } else {
        printf(
            "COMPRA DO INGRESSO EFETUADA COM SUCESSO\n -----BOM FILME!-----\n",
            filme);
        break;
      }
    }
  }
}
