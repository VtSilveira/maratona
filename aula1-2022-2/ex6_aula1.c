#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, k, num, days = 0;

  scanf("%d %d", &n, &k);

  //ve qts dias precisa pra cada pebble como se ela tivesse apenas um bolso, e no fim divide por 2, pois ela possui 2 bolsos
  for (int i = 0; i < n; i++) {
    scanf("%d", &num);
    if (num % k == 0)
      days += num / k; //se for divisivel, divide a qtd por k p/ ver qts dias ela vai precisar p coletar todas as pebbles
    else
      days += num / k + 1; //se nao for divisivel. divide a qtd por k e soma 1 p/ ver qts dias ela vai precisar p coletar todas as pebbles
  }

  printf("%d", (days + 1) / 2); //divide por 2 pois ela possui 2 bolsos
  return 0;
}