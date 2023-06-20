#include <stdio.h>

int main(){
  int n;
  int bigger;

  scanf("%d", &n);
  bigger = n;

  while (n != 0){
    scanf("%d", &n);

    if (n > bigger)
      bigger = n;
  }

  printf("%d\n", bigger);
}