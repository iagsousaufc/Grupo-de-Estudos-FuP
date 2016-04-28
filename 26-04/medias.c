#include "stdio.h"

int main() {
	float maior, menor, nota;
	int n, i;

	printf("o endereco de maior eh: %p", &maior);

	printf("Quantas notas: ");
;	scanf("%d", &n);
	// n > 1

	printf("Digite a nota 1: ");
	scanf("%f", &nota);

	maior = nota;
	menor = nota;

	for(i = 2; i <= n; i++){
		printf("Digite a nota %d: ", i);
		scanf("%f", &nota);

		if(nota <= menor){
			menor = nota;
		}
		if(nota >= maior){
			maior = nota;
		}
	}

	printf("A nota maior eh: %.2f \nA nota menor eh: %.2f", maior, menor);
	return 0;
}
