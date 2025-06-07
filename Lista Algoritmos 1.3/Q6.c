#include <stdio.h>

int main() {
	float litros;
	char tipo;
	printf("Digite a quantidade de litros: ");
	scanf("%f", &litros);
	printf("Digite o tipo de combustivel (A para alcool, G para gasolina): ");
	scanf(" %c", &tipo);
	switch (tipo) {
		case 'A':
			if (litros <= 20) {
				printf("Valor a pagar: R$ %.2f\n", litros * 6 * 0.97);
			}
			else {
				printf("Valor a pagar: R$ %.2f\n", litros * 6 * 0.95);
			}
			break;
		case 'G':
			if (litros <= 20) {
				printf("Valor a pagar: R$ %.2f\n", litros * 8 * 0.96);
			}
			else {
				printf("Valor a pagar: R$ %.2f\n", litros * 8 * 0.94);
			}
			break;
		default:
			printf("Tipo de combustível inválido.\n");
			break;
	}
}