/*Escreva um programa que leia as respostas de 5 alunos nas 10 questões de uma
prova (respostas contidas em uma matriz 5x10). O programa deve conter um vetor
de 10 posições com as respostas corretas das questões (um gabarito com
respostas: a, b, c, d ou e). O código deve comparar as respostas dos alunos com
o gabarito e armazenar as notas em um vetor de 10 posições. No final, as notas
dos 5 alunos devem ser impressas, considerando cada questão valendo 1 ponto.*/

// 3:comparar as respostas
#include <stdio.h>
#include <stdlib.h> 
int main() {
  char gabarito[10] = {'a', 'd', 'e', 'b', 'b', 'c', 'a', 'e', 'd', 'b'};
  int matriz[5][10];
  int alunos = 5;
  int questoes = 10;
  char buffer [100] = {0};
  int acumulador_questoes [5] = {0};
  for (int i = 0; i < alunos; i++) {
    printf("-----RESPOSTA DO ALUNO %d-----\n", i + 1);
    for (int j = 0; j < questoes; j++) {
      printf("QUESTÃO %d: ", j + 1);
      fgets (buffer,100, stdin);
      matriz [i][j] = buffer[0];
      if (matriz[i][j] > 'e' || matriz[i][j] < 'a' || buffer[1] != '\n')  {
        printf("RESPOSTA INVALIDA\n");
        j--;
      }
    }
  }
  for (int i = 0; i < alunos; i++){
   for (int j = 0; j < questoes; j++){
     if (matriz[i][j] == gabarito[j]){
    acumulador_questoes[i] += 1;
}
   }
   }
   for (int i = 0; i < alunos; i++){
   printf ("NOTA DO ALUNO  %d Eh IGUAL A =%d\n",i + 1, acumulador_questoes[i]);
}
}
