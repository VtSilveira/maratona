#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Leitura do número de dias (d) e do total de horas de estudo (sumTime)
  int d, sumTime;
  cin >> d >> sumTime;

  // Vetor de pares para armazenar os limites de horas de estudo (minTimei e maxTimei)
  vector<pair<int, int>> tasks(d);

  // Leitura dos limites de horas de estudo para cada dia e armazenamento no vetor "tasks"
  for (int i = 0; i < d; i++) {
    int minTime, maxTime;
    cin >> minTime >> maxTime;
    tasks[i] = {minTime, maxTime};
  }

  // Inicialização das variáveis para calcular a soma mínima e máxima de horas de estudo
  int minSum = 0, maxSum = 0;

  // Cálculo das somas mínima (minSum) e máxima (maxSum) de horas de estudo para todos os dias
  for (int i = 0; i < d; i++) {
    minSum += tasks[i].first;
    maxSum += tasks[i].second;
  }

  // Verificação se a soma total de horas de estudo está dentro dos limites permitidos
  if (sumTime < minSum || sumTime > maxSum) {
    // Se não estiver, imprime "NO" e encerra o programa
    cout << "NO" << endl;
    return 0;
  }

  // Se a soma total de horas de estudo está dentro dos limites permitidos, imprime "YES"
  cout << "YES" << endl;

  // Vetor para armazenar as horas de estudo em cada dia, inicializado com os valores mínimos
  vector<int> ans(d);

  // Preenchimento do vetor "ans" com os valores mínimos de horas de estudo para cada dia,
  // e subtração desses valores da soma total de horas de estudo (sumTime)
  for (int i = 0; i < d; i++) {
    ans[i] = tasks[i].first;
    sumTime -= tasks[i].first;
  }

  // Loop para verificar se ainda é possível alocar mais horas de estudo para cada dia,
  // respeitando os limites máximos impostos pelos pais
  for (int i = 0; i < d; i++) {
    // Calcula o valor a ser adicionado ao dia atual, que é o mínimo entre a diferença
    // entre a soma total de horas desejada (sumTime) e o valor já alocado para esse dia,
    // e a diferença entre o limite máximo e o valor já alocado para esse dia
    int add = min(sumTime, tasks[i].second - tasks[i].first);

    // Adiciona o valor calculado ao dia atual e subtrai esse valor da soma total de horas (sumTime)
    ans[i] += add;
    sumTime -= add;
  }

  // Impressão das horas de estudo para cada dia
  for (int i = 0; i < d; i++) {
    cout << ans[i] << " ";
  }

  // Quebra de linha após imprimir as horas de estudo para cada dia
  cout << endl;
}
