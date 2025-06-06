//• Não eleitor(abaixo de 16 anos);
//• Eleitor obrigatório(entre 18 e 65 anos);
//• Eleitor facultativo(entre 16 e 18 anos e acima dos 65 anos).
#include <stdio.h>

int main() {
	int idade;
	printf("Digite a idade: ");
	scanf("%d", &idade);
	if(idade <16) {
		printf("Nao eleitor\n");
	} else if (idade >= 18 && idade <= 65) {
		printf("Eleitor obrigatorio\n");
	} else if ((idade >= 16 && idade < 18) || idade > 65) {
		printf("Eleitor facultativo\n");
	} else {
		printf("Idade invalida\n");
	}
}