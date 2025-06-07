#include <stdio.h>

int main() {
	int IdadeLuizinho, IdadeHuguinho, IdadeZezinho;

	printf("Insira a idade de Luizinho: \n");
	scanf("%d", &IdadeLuizinho);
	printf("Insira a idade de Huguinho: \n");
	scanf("%d", &IdadeHuguinho);
	printf("Insira a idade de Zezinho: \n");
	scanf("%d", &IdadeZezinho);

	if (IdadeLuizinho < IdadeHuguinho && IdadeLuizinho < IdadeZezinho) {
		printf("Luizinho é o caçula da família.\n");
	}
	else if (IdadeHuguinho < IdadeLuizinho && IdadeHuguinho < IdadeZezinho) {
		printf("Huguinho é o caçula da família.\n");
	}
	else {
		printf("Zezinho é o caçula da família.\n");
	}
}