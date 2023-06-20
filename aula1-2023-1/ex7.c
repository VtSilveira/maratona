#include <stdio.h>

int main (){
  int H, P, F, D;
  scanf("%d %d %d %d", &H, &P, &F, &D);

  while (1) {
    if (F == H) {
      printf("S\n");
      return 0;
    }

    if (F == P) {
      printf("N\n");
      return 0;
    }

    if (D == -1) {
      F--;
      if (F < 0) 
        F = 15;
    } else {
      F++;
      F = F % 16;
    }
  }

  return 0;
}