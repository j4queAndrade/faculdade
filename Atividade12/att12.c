/* Escreva um programa de verificação de senha. A senha pode conter qualquer
tipo de caractere (letras, números, caracteres especiais...) e deve ter no
mínimo 8 dígitos. O programa já deve conter a senha original no seu código e
deve verificar a senha digitada pelo usuário, informando se ela está correta ou
errada. Caso ocorram 3 tentativas erradas, o programa deve encerrar, informando
que o usuário errou as 3 tentativas e foi bloqueado.*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main() {
  char *senha_original = "@ifba2023";
  char senha[20] = {0};
  int comparacao = 0;
  printf("VOCE TERA TRES TENTATIVAS PARA INSERIR A SENHA CORRETA\n");
  for (int cont = 0; cont < 3; cont++) {
    printf("INFORME A SENHA: ");
    scanf("%[^\n]", senha);
    getchar();
    comparacao = strcmp(senha_original, senha);
    if (comparacao == 0) {
      printf("SEJA BEM VINDO!\n");
      break;
    } else {
      printf("TENTATIVA %d, SENHA INCORRETA\n", (cont + 1));
      sleep(1.5);
      printf("\e[1;1H\e[2J");
    }
  }
  if (comparacao != 0) {
    printf("CONTA BLOQUEADA\n");
  }
}
