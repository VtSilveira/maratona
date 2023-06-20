#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, num, D[10000], E[10000],d = 0, e = 0, result = 0;
  char c;

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d %c", &num, &c);
    if (c == 'D') {
      D[d] = num;
      d++;
    } else {
      E[e] = num;
      e++;
    }
  }

  for (int i = 0; i < d; i++){
    for (int j = 0; j < e; j++){
      if (D[i] == E[j]){
        result++;
        D[i] = -1;
        E[j] = -2;
      }
    }
  }

  printf("%d", result);

  return 0;
}
