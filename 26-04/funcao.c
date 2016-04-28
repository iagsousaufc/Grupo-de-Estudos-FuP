#include "stdio.h"


int fatorial(int n){
	if(n == 1) return 1;
	return n * fatorial(n-1);
}

int main() {
	int x, resultado;

	printf("Digite o valor: ");
	scanf("%d", &x);

	resultado = fatorial(x);

	printf("O fatorial de %d eh %d", x, resultado);

	return 0;
}
