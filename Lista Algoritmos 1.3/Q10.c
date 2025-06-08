#include <stdio.h>

int main() {
	double saldoMedio, credito;
	printf("Digite o saldo medio: ");
	scanf("%f", &saldoMedio);
	if (saldoMedio >= 0 && saldoMedio <= 200) {
		printf("Saldo medio invalido.Sem Credito\n");
	}
	else if (saldoMedio >= 201 && saldoMedio <= 400) {
		credito = saldoMedio * 2;
		printf("Saldo medio valido: %.2f. Credito: %.2f\n", saldoMedio, credito);
	} else if(saldoMedio >= 401 && saldoMedio <= 600) {
		credito = saldoMedio * 0.3;
		printf("Saldo medio valido: %.2f. Credito: %.2f\n", saldoMedio, credito);
	}
	else if (saldoMedio > 600) {
		credito = saldoMedio * 0.4;
		printf("Saldo medio valido: %.2f. Credito: %.2f\n", saldoMedio, credito);
	}
}