#include <stdio.h>

int main() {
  int A = 0, B = 0, n, k;

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &k);
    if (k == 1) {
      if(A == 0)
        A = 1;
      else 
        A = 0;
    } else {
      if (A == 0)
        A = 1;
      else
        A = 0;
      if (B == 0)
        B = 1;
      else
        B = 0;
    }
  }

  printf("%d\n", A);
  printf("%d\n", B);
}