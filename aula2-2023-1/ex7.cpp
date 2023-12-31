#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main () {
  double a, b, c, delta, x1, x2;
  cin >> a >> b >> c;
  delta = (b*b) - (4*a*c);
  if (delta < 0 || a == 0) {
    cout << "Impossivel calcular" << endl;
  } else {
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);
    cout.precision(5);
    cout << fixed << "R1 = " << x1 << endl;
    cout << fixed << "R2 = " << x2 << endl;
  }
}