#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
  char str[100000], c;
  int m, l, r, arr[100000], x = 0;

  while (c != '\n'){
    scanf("%c", &c);
    str[x] = c;
    x++;
  }
  x--;
  
  scanf("%d", &m);

  for (int j = 0; j < x - 1; j++) {
    if (j == 0){
      arr[j] = (str[j] == str[j+1]);
      continue;
    }
    arr[j] = arr[j-1];
    arr[j] += (str[j] == str[j+1]);
  }

  for (int i = 0; i < m; i++) {
    scanf("%d %d", &l, &r);
    l--;
    r--;
    printf("%d\n", arr[r-1] - ((l - 1 < 0) ? 0 : arr[l-1]));
  }

  return 0;
}