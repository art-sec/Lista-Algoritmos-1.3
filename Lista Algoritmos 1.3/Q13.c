#include <stdio.h>

int main() {
	int escolha, quantidade;
	float preco, total;

	printf("Insira o codigo do produto (100-105):\n");
	scanf("%d", &escolha);
	printf("Insira a quantidade:\n");
	scanf("%d", &quantidade);

	switch (escolha) {
		case 100:
			preco = 5.00;
			break;
		case 101:
			preco = 3.50;
			break;
		case 102:
			preco = 4.00;
			break;
		case 103:
			preco = 7.00;
			break;
		case 104:
			preco = 8.00;
			break;
		case 105:
			preco = 2.00;
			break;
		default:
			printf("Codigo invalido.\n");
			return 1;
	}
	total = preco * quantidade;
	printf("Total a pagar: R$ %.2f\n", total);
	return 0;
}