#include <stdio.h>

int main() {
	float matematica, portugues, geral, media;
	char nome[50];

	printf("Digite o nome do aluno: ");
	scanf("%49[^\n]", nome); // L� o nome do aluno, permitindo espa�os
	printf("Digite a nota de Matem�tica: ");
	scanf("%f", &matematica);
	printf("Digite a nota de Portugu�s: ");
	scanf("%f", &portugues);
	printf("Digite a nota de Geral: ");
	scanf("%f", &geral);
	media = (matematica + portugues + geral) / 3.0;
	printf("A nota do aluno: %s em portugues foi: %.2f, em matematica: %.2f e em conhecimentos geral: %.2f", nome, portugues, matematica, geral);
	printf("\nA m�dia do aluno %s �: %.2f\n", nome, media);
	if (portugues > 5 && matematica > 5 && geral > 5) {
		if(media >= 7) {
			printf("O aluno %s foi aprovado.\n", nome);
		}
		else {
			printf("O aluno %s foi reprovado.\n", nome);

		}
	}
	else {
		printf("O aluno %s foi reprovado por nota abaixo de 5 em alguma disciplina.\n", nome);
	}
}