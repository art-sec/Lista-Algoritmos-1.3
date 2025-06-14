#include <stdio.h>
#include <stdlib.h>

int main() {
	int escolhaUser, escolhaComputador;
	escolhaComputador = rand() % 3 + 1; // 1: Pedra, 2: Papel, 3: Tesoura
	printf("Escolha:\n1 - Pedra\n2 - Papel\n3 - Tesoura\n");
	scanf("%d", &escolhaUser);
	if (escolhaUser < 1 || escolhaUser > 3) {
		printf("Escolha inválida!\n");
		return 1;
	} else if (escolhaUser == escolhaComputador) {
		printf("Empate!\n");
	}
	switch (escolhaComputador) {
				case 1: // Computador escolheu Pedra
			if (escolhaUser == 2) {
				printf("Você ganhou! Papel cobre Pedra.\n");
			} else {
				printf("Você perdeu! Pedra quebra Tesoura.\n");
			}
			break;
		case 2: // Computador escolheu Papel
			if (escolhaUser == 3) {
				printf("Você ganhou! Tesoura corta Papel.\n");
			} else {
				printf("Você perdeu! Papel cobre Pedra.\n");
			}
			break;
		case 3: // Computador escolheu Tesoura
			if (escolhaUser == 1) {
				printf("Você ganhou! Pedra quebra Tesoura.\n");
			} else {
				printf("Você perdeu! Tesoura corta Papel.\n");
			}
			break;
	}
	return 0;
}