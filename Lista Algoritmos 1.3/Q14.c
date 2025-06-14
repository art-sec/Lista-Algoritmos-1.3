#include <stdio.h>
#include <stdlib.h>

int main() {
	int escolhaUser, escolhaComputador;
	escolhaComputador = rand() % 3 + 1; // 1: Pedra, 2: Papel, 3: Tesoura
	printf("Escolha:\n1 - Pedra\n2 - Papel\n3 - Tesoura\n");
	scanf("%d", &escolhaUser);
	if (escolhaUser < 1 || escolhaUser > 3) {
		printf("Escolha inv�lida!\n");
		return 1;
	} else if (escolhaUser == escolhaComputador) {
		printf("Empate!\n");
	}
	switch (escolhaComputador) {
				case 1: // Computador escolheu Pedra
			if (escolhaUser == 2) {
				printf("Voc� ganhou! Papel cobre Pedra.\n");
			} else {
				printf("Voc� perdeu! Pedra quebra Tesoura.\n");
			}
			break;
		case 2: // Computador escolheu Papel
			if (escolhaUser == 3) {
				printf("Voc� ganhou! Tesoura corta Papel.\n");
			} else {
				printf("Voc� perdeu! Papel cobre Pedra.\n");
			}
			break;
		case 3: // Computador escolheu Tesoura
			if (escolhaUser == 1) {
				printf("Voc� ganhou! Pedra quebra Tesoura.\n");
			} else {
				printf("Voc� perdeu! Tesoura corta Papel.\n");
			}
			break;
	}
	return 0;
}