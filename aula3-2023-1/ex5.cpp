#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> votes(n);
  for (int i = 0; i < n; i++) {
    cin >> votes[i];
  }

  map<int, int> m;
  for (int i = 0; i < n; i++) {
    m[votes[i]]++;
  }

  int max_votes = 0;
  int winner = -1;
  for (auto it = m.begin(); it != m.end(); it++) {
    if (it->second > max_votes) {
      max_votes = it->second;
      winner = it->first;
    }
  }

  cout << winner << endl;

  return 0;
}
