#include <stdio.h>

int main(){
  int k, fib = 0 ,fib_n1 = 1, fib_n2 = 1;
  scanf("%d", &k);

  if (k == 0 || k == 1) {
    printf("1\n");
    return 0;
  }
  
  for (int i = 2; i <= k; i++) {
    fib = fib_n1 + fib_n2;
    fib_n2 = fib_n1;
    fib_n1 = fib;
  }

  printf("%d\n", fib);
}
