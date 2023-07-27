#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    // Leitura do número de carros (n)
    int n;
    cin >> n;

    // Se n for igual a 0, encerra o loop e o programa
    if (n == 0) {
      break;
    }

    // Criação de uma pilha para simular a rua lateral e uma variável para manter a ordem esperada dos carros
    stack<int> street;
    int current_order = 1;

    // Loop para ler a sequência de carros que chegam na rua principal
    for (int i = 0; i < n; i++) {
      int car;
      cin >> car;

      // Enquanto a pilha não está vazia e o carro do topo é igual à ordem esperada
      while (!street.empty() && street.top() == current_order) {
        // Retira o carro do topo da pilha e incrementa a ordem esperada
        street.pop();
        current_order++;
      }

      // Se o carro atual é igual à ordem esperada, incrementa a ordem esperada
      if (car == current_order) {
        current_order++;
      } else {
        // Senão, empilha o carro na pilha
        street.push(car);
      }
    }

    // Enquanto a pilha não está vazia e o carro do topo é igual à ordem esperada
    while (!street.empty() && street.top() == current_order) {
      // Retira o carro do topo da pilha e incrementa a ordem esperada
      street.pop();
      current_order++;
    }

    // Verifica se a pilha está vazia, indicando que os carros foram organizados corretamente
    if (street.empty()) {
      cout << "yes" << endl;
    } else {
      // Se ainda há carros na pilha, indica que não foi possível atingir a ordem desejada
      cout << "no" << endl;
    }
  }

  return 0;
}
