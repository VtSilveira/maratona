#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a1, a2, k1, k2;

  cin >> a1 >> a2 >> k1 >> k2 >> n;

  if (k1 > k2) {
    swap(k1, k2);
    swap(a1, a2);
  }

  int minimum;
  if (n <= a1 * k1)
    minimum = n / k1;
  else
    minimum = a1 + (n - a1 * k1) / k2;

  cout << max(0, n - a1 * (k1 - 1) - a2 * (k2 - 1));
  cout << " " << minimum << endl;

  return 0;
}