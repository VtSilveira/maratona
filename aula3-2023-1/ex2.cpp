#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct dragon {
  int force;
  int bonus;
};

int main() {
  int n, kiritos_dragon;
  vector<dragon> dragons;
  bool willPass = true;
  int force, bonus;

  cin >> kiritos_dragon >> n;

  for (int i = 0; i < n; i++) {
    cin >> force >> bonus;
    dragons.push_back({force, bonus});
  }

  sort(dragons.begin(), dragons.end(), [](dragon a, dragon b) {
    return a.force < b.force;
  });

  for (int i = 0; i < n; i++) {
    if (kiritos_dragon > dragons[i].force) {
      kiritos_dragon += dragons[i].bonus;
    } else {
      willPass = false;
      break;
    }
  }

  if (willPass) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}