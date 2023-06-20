#include <stdio.h>
#include <stdlib.h>

int main(){    	
  char gabarito[80], respostas[80];
	int n, respostas_certas = 0;
	
	scanf("%d", &n);
	scanf("%s", gabarito);
	gabarito[n] = '\0';
	scanf("%s", respostas);
	respostas[n] = '\0';

	for (int i = 0; i < n; i++){
		if (gabarito[i] == respostas[i]){
			respostas_certas++;
		}
	}
	
	printf("%d", respostas_certas);

  return 0;
}