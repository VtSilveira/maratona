#include <iostream>
using namespace std;

int main() {
  int secs;
  cin >> secs;
  printf("%d:%d:%d\n", (secs/3600) % 60, (secs/60) % 60, secs % 60);
}