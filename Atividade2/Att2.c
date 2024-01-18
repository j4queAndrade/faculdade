
#include <stdio.h>

int main() {
  int num;
  printf("Digite o número que deseja visualizar na tabuada: ");
  scanf("%d", &num);
  for (int cont = 1; cont <= 10; cont++) {
    printf("%d x %d = %d\n", num, cont, num * cont);
  }
  return 0;
}
