#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, q, num, start, end, result;

  scanf("%d", &n);
  int *arr = malloc(sizeof(int) * n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &num);
    arr[i] = num;
  }

  scanf("%d", &q);

  for (int i = 0; i < q; i++) {
    scanf("%d %d", &start, &end);
    result = 0;

    while (start <= end) {
      result += arr[start];
      start++;
    }

    printf("%d\n", result);
  }

  free(arr);
  return 0;
}