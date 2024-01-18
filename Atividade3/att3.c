/* O programa deve ir lendo os votos dos eleitores até que o número 6 seja
digitado. Quando o número 6 for digitado, ele deve apresentar as seguintes
informações: a) O número de votos de cada candidato; b) A porcentagem de votos
nulos; c) A porcentagem de votos brancos; d) O candidato vencedor*/
#include <stdio.h>

int main() {
  int voto = 0;
  int qntd_candidato_voto[5] = {0};
  float quantidade_de_votos_total = 0;
  while (voto != 6) {
    printf("-----URNA ELETRONICA-----\n");
    printf("INICIO DA VOTACAO\n");
    printf("1 - CANDIDATO LP\n");
    printf("2 - CANDIDATO FR\n");
    printf("3 - CANDITATO ISI\n");
    printf("4 - NULO\n");
    printf("5 - BRANCO\n");
    scanf("%d", &voto);
    printf("\e[1;1H\e[2J");
    if (voto > 5) {
      continue;
    }
    qntd_candidato_voto[voto - 1] += 1;
    quantidade_de_votos_total += 1;
  }
  printf("CANDITADO LP TEVE %d  DE VOTOS\n\n", qntd_candidato_voto[0]);
  printf("CANDITADO FR TEVE %d  DE VOTOS\n\n", qntd_candidato_voto[1]);
  printf("CANDITATO ISI TEVE %d DE VOTOS\n\n", qntd_candidato_voto[2]);
  printf("VOTOS NULO TEVE %d\n\n", qntd_candidato_voto[3]);
  printf("VOTOS EM BRANCO TEVE %d\n\n", qntd_candidato_voto[4]);
  printf("CANDIDATO LP RECEBEU  %f  %% DE VOTOS!\n\n",
         (qntd_candidato_voto[0] / quantidade_de_votos_total * 100));
  printf("CANDIDATO FR RECEBEU %f %% DE VOTOS!\n\n",
         (qntd_candidato_voto[1] / quantidade_de_votos_total * 100));
  printf("CANDIDATO ISI RECEBEU %f %% DE VOTOS!\n\n",
         (qntd_candidato_voto[2] / quantidade_de_votos_total * 100));
  printf(" %f %% DE VOTOS NULO!\n\n",
         (qntd_candidato_voto[3] / quantidade_de_votos_total * 100));
  printf(" %f %% DE VOTOS BRANCO!\n\n",
         (qntd_candidato_voto[4] / quantidade_de_votos_total * 100));
  int posicao_maior = 0;
  for (int cont = 0; cont < 5; cont++) {
    if (qntd_candidato_voto[cont] > qntd_candidato_voto[posicao_maior]) {
      posicao_maior = cont;
    }
  }
  if (posicao_maior == 0) {
    printf("CANTIDADO VENCEDOR LP\n");
  } else if (posicao_maior == 1) {
    printf("CANDIDATO VENCEDOR FR\n");
  } else if (posicao_maior == 2) {
    printf("CANDITATO VENCEDOR ISI\n");
  } else if (posicao_maior == 3) {
    printf("NÃO TEVE VENCEDOR, A MAIORIA DOS VOTOS FORAM NULOS\n");
  } else {
    printf("NÃO TEVE VENCEDOR, A MAIORIA DOS VOTOS FORAM BRANCOS\n");
  }
}
