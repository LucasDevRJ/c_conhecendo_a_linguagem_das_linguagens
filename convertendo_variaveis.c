#include <stdio.h>

int main() {

	//não vai dar 1,5 porque os valores estão como inteiros
	double pontos = 3 / 2;
	printf("%f\n", pontos);

	//agora funciona, porque o 2 esta como ponto flutuante
	pontos = 3 / 2.0;
	printf("%f\n", pontos);

	int a = 3;
	int b = 2;
	//Nesse caso irá funcionar, porque estamos fazendo o casting
	//que nada mais é do que converter o tipo de dado
	pontos = a / (double) b;
	printf("%f\n", pontos);

	double pi = 3.1415;
	int pi_convertido = (int) pi;
	printf("%f convertido = %d\n", pi, pi_convertido);
}