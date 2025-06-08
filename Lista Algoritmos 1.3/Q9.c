#include <stdio.h>

int main() {
	char nome[50], nome2[50];
	float altura, peso, altura2, peso2;
	printf("Digite o nome da primeira pessoa: ");
	scanf("%49[^\n]", nome); // Lê o nome, permitindo espaços
	printf("Digite a altura da primeira pessoa (em metros): ");
	scanf("%f", &altura);
	printf("Digite o peso da primeira pessoa (em kg): ");
	scanf("%f", &peso);
	printf("Digite o nome da segunda pessoa: ");
	scanf(" "); // Limpa o buffer do teclado
	scanf("%49[^\n]", nome2); // Lê o nome da segunda pessoa
	printf("Digite a altura da segunda pessoa (em metros): ");
	scanf("%f", &altura2);
	printf("Digite o peso da segunda pessoa (em kg): ");
	scanf("%f", &peso2);

	if (altura > altura2) {
		printf("%s eh mais alto que %s\n", nome, nome2);
	} else if (altura < altura2) {
		printf("%s eh mais alto que %s\n", nome2, nome);
	} else {
		printf("%s e %s tem a mesma altura\n", nome, nome2);
	}
	if (peso > peso2) {
		printf("%s eh mais pesado que %s\n", nome, nome2);
	} else if (peso < peso2) {
		printf("%s eh mais pesado que %s\n", nome2, nome);
	} else {
		printf("%s e %s tem o mesmo peso\n", nome, nome2);
	}
	return 0;
}