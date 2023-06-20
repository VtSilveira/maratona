#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, sqr[10][10], num, sum_lines = 0, sum_columns = 0, sum_diagonal_1 = 0, sum_diagonal_2 = 0;

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &num);
      sqr[i][j] = num;
    }
  }

  for (int i = 0; i < n; i++) {
    sum_lines = 0;
    sum_columns = 0;

    for (int j = 0; j < n; j++) {
      sum_lines += sqr[i][j];
      sum_columns += sqr[j][i];
    }

    if (sum_lines != sum_columns) {
      printf("-1");
      return 0;
    }
  }

  //se chegar aqui, a soma das linhas e colunas estão certas, ver diagonal
  for (int i = 0; i < n; ++i){
    sum_diagonal_1 += sqr[i][i];
    sum_diagonal_2 += sqr[i][n - i -1]; 
  }

  if (sum_diagonal_1 == sum_columns && sum_diagonal_1 == sum_diagonal_2)
    printf("%d", sum_columns);
  else
    printf("-1");
  return 0;
}