#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int in, size_even = 0, size_odd = 0;
  vector<int> even, odd;

  for (int i = 0; i < 15; i++) {
    cin >> in;

    if (in % 2 == 0) {
      even.push_back(in);
      size_even++;
    } else {
      odd.push_back(in);
      size_odd++;
    }

    if (size_even == 5) {
      for (int j = 0; j < 5; j++) {
        cout << "par[" << j << "] = " << even[j] << endl;
      }
      even.clear();
      size_even = 0;
    }

    if (size_odd == 5) {
      for (int j = 0; j < 5; j++) {
        cout << "impar[" << j << "] = " << odd[j] << endl;
      }
      odd.clear();
      size_odd = 0;
    }
  }

  for (int j = 0; j < size_odd; j++) {
    cout << "impar[" << j << "] = " << odd[j] << endl;
  }

  for (int j = 0; j < size_even; j++) {
    cout << "par[" << j << "] = " << even[j] << endl;
  }
}