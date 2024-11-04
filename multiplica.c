#include<stdio.h>

int main() {
	int x, y, multiplicacao;

	printf("Digite o valor de x: ");
	scanf("%d", &x);

	printf("Digite o valor de y: ");
	scanf("%d", &y);

	multiplicacao = x * y;

	printf("%d x %d = %d", x, y, multiplicacao);
}