#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, tabuleiro[1000][1000], soma_linhas[10], soma_colunas[10], maior_soma = 0, num;

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &num);
      tabuleiro[i][j] = num;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++){
      soma_linhas[i] += tabuleiro[i][j];
      soma_colunas[i] += tabuleiro[j][i];
    }
  }

  for (int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++){
      if (soma_linhas[i] + soma_colunas[j] - 2*tabuleiro[i][j] > maior_soma) 
        maior_soma = soma_linhas[i] + soma_colunas[j] - 2*tabuleiro[i][j];
    }
  }

  printf("%d", maior_soma);

  return 0;
}