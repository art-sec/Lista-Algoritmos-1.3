#include <stdio.h>
#include <math.h>

int main() {
	int escolha;
	double number;
	printf("Insira um numero: \n");
	scanf("%lf", &number);
	printf("Insira o tipo de calculo: \n 101 - Raiz Quadrada \n 102 - A metade \n 103 - 0.1 do numero \n 104 - O dobro \n");
	scanf("%d", &escolha);
	switch (escolha) {
				case 101:
			printf("Raiz Quadrada de %.2lf = %.2lf\n", number, sqrt(number));
			break;
		case 102:
			printf("A metade de %.2lf = %.2lf\n", number, number / 2);
			break;
		case 103:
			printf("10%% de %.2lf = %.2lf\n", number, number * 0.1);
			break;
		case 104:
			printf("O dobro de %.2lf = %.2lf\n", number, number * 2);
			break;
		default:
			printf("Opcao invalida!\n");
			break;
	}
	return 0;
}