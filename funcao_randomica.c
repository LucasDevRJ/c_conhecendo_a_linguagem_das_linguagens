#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	//rand() gera numeros randomicos
	int n1 = rand();
	int n2 = rand();
	printf("Numero randomico 1 = %d\n", n1);
	printf("Numero randomico 2 = %d\n", n2);

	int segundos = time(0);
	srand(segundos);
	printf("%d\n", segundos);
}