#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
  double value, int_value;
  int notas, moedas;

  cin >> value;

  value = value + 0.001;

  cout << "NOTAS:" << endl;

  value = modf(value, &int_value);

  notas = (int)(int_value/100);
  int_value = (int)int_value % 100;
  
  cout << notas << " nota(s) de R$ 100.00" << endl;

  notas = (int)(int_value/50);
  int_value = (int)int_value % 50;

  cout << notas << " nota(s) de R$ 50.00" << endl;

  notas = (int)(int_value/20);
  int_value = (int)int_value % 20;

  cout << notas << " nota(s) de R$ 20.00" << endl;

  notas = (int)(int_value/10);
  int_value = (int)int_value % 10;

  cout << notas << " nota(s) de R$ 10.00" << endl;

  notas = (int)(int_value/5);
  int_value = (int)int_value % 5;

  cout << notas << " nota(s) de R$ 5.00" << endl;

  notas = (int)(int_value/2);
  int_value = (int)int_value % 2;

  cout << notas << " nota(s) de R$ 2.00" << endl;

  moedas = (int)(int_value/1);
  int_value = (int)int_value % 1;

  cout << "MOEDAS:" << endl;

  cout << moedas << " moeda(s) de R$ 1.00" << endl;

  moedas = (int)(value/0.5);
  value = value - (moedas * 0.5);

  cout << moedas << " moeda(s) de R$ 0.50" << endl;

  moedas = (int)(value/0.25);
  value = value - (moedas * 0.25);

  cout << moedas << " moeda(s) de R$ 0.25" << endl;

  moedas = (int)(value/0.10);
  value = value - (moedas * 0.10);

  cout << moedas << " moeda(s) de R$ 0.10" << endl;

  moedas = (int)(value/0.05);
  value = value - (moedas * 0.05);

  cout << moedas << " moeda(s) de R$ 0.05" << endl;

  moedas = (int)(value/0.01);
  value = value - (moedas * 0.01);

  cout << moedas << " moeda(s) de R$ 0.01" << endl;
}