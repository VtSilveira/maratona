#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool cmp(int a, int b) {
  return a < b;
}

int main() {
  vector<int> original_arr, ordered_arr;
  int n = 3;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    original_arr.push_back(x);
    ordered_arr.push_back(x);
  }

  sort(ordered_arr.begin(), ordered_arr.end(), cmp);

  for (int i = 0; i < n; i++) {
    cout << ordered_arr[i] << endl;
  }

  cout << endl;

  for (int i = 0; i < n; i++) {
    cout << original_arr[i] << endl;
  }
}