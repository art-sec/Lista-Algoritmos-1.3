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
		printf("Luizinho � o ca�ula da fam�lia.\n");
	}
	else if (IdadeHuguinho < IdadeLuizinho && IdadeHuguinho < IdadeZezinho) {
		printf("Huguinho � o ca�ula da fam�lia.\n");
	}
	else {
		printf("Zezinho � o ca�ula da fam�lia.\n");
	}
}