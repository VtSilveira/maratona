#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m = 1;
  cin >> n;

  for (int i = 0; i < n; i++) {
    m = (n - i) * m;
  }

  cout << m << endl;
}