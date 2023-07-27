#include <bits/stdc++.h>
using namespace std;

struct consulta {
  int comeco;
  int fim;
};

int main() {
  int n = 0, x, y;
  vector<consulta> consultas;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> x >> y;
    consultas.push_back({x, y});
  }

  sort(consultas.begin(), consultas.end(), [](const consulta& a, const consulta& b) {
    return a.fim < b.fim;
  });

  int count = 0;
  int lastEndTime = 0;

  for (int i = 0; i < n; i++) {
    if (consultas[i].comeco >= lastEndTime) {
      count++;
      lastEndTime = consultas[i].fim;
    }
  }

  cout << count << endl;
}