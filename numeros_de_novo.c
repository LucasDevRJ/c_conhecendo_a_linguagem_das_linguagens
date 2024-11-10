#include <stdio.h>

#define NUMERO_FINAL 100

int main() {
	int numero_incial = 1;

	printf("Programa que exibe numeros de 1 a 100 usando while\n");
	while (numero_incial <= NUMERO_FINAL) {
		printf("%d\n", numero_incial);
		numero_incial++;
	}
}