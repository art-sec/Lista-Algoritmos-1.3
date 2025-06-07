//Faça um algoritmo que receba os valores dos três lados de um triângulo e
//informe se ele é escaleno(3 lados diferentes), equilátero(3 lados iguais) ou
//isósceles(2 lados iguais).
#include <stdio.h>

int main() {
	float a, b, c;
	printf("Digite o valor do lado A: ");
	scanf("%f", &a);
	printf("Digite o valor do lado B: ");
	scanf("%f", &b);
	printf("Digite o valor do lado C: ");
	scanf("%f", &c);
	if (a <= 0 || b <= 0 || c <= 0) {
		printf("Os lados do triângulo devem ser maiores que zero.\n");
	} else if (a == b && b == c) {
		printf("O triângulo é equilátero.\n");
	} else if (a != b && a != c && b != c) {
		printf("O triângulo é escaleno.\n");
	} else {
		printf("O triângulo é isósceles.\n");
	}
}