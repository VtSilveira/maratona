#include <bits/stdc++.h>
using namespace std;

//A. Partition
int main() {
  int a, b = 0, c = 0, n = 0;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a;

    if (a > 0) 
      b += a;
     else 
      c += a;
  }

  cout << b - c << endl;
}