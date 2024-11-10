#include <stdio.h>

int main() {
	int numero = 1;
	int soma = 0;
	printf("Soma de Gauss\n");
	for (int i = numero + 1; i <= 100; i++) {
		soma = numero + i;
		printf("%d + %d = %d\n", numero, i, soma);
		numero = soma;
	}
}