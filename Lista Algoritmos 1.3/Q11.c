#include <stdio.h>

int main() {
	int mes, ano;
	int bissexto = 0;
	printf("Digite o mes (1-12): ");
	scanf("%d", &mes);
	printf("Digite o ano: ");
	scanf("%d", &ano);
	if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        	bissexto = 1;
    	}
	switch (mes) {
				case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("31 dias\n");
			break;
		case 4: case 6: case 9: case 11:
			printf("30 dias\n");
			break;
		case 2:
			if (ano == 366) {
				printf("29 dias\n");
			} else {
				printf("28 dias\n");
			}
			break;
		default:
			printf("Mes invalido\n");
			break;
	}
	printf("Total de dias no ano: %d\n", bissexto ? 366 : 365);
	return 0;
}
