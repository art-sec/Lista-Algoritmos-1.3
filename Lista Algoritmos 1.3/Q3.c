//Fa�a um algoritmo que receba os valores dos tr�s lados de um tri�ngulo e
//informe se ele � escaleno(3 lados diferentes), equil�tero(3 lados iguais) ou
//is�sceles(2 lados iguais).
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
		printf("Os lados do tri�ngulo devem ser maiores que zero.\n");
	} else if (a == b && b == c) {
		printf("O tri�ngulo � equil�tero.\n");
	} else if (a != b && a != c && b != c) {
		printf("O tri�ngulo � escaleno.\n");
	} else {
		printf("O tri�ngulo � is�sceles.\n");
	}
}