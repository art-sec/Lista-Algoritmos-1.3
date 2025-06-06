#include <stdio.h>

int main() {
	float f1, f2, f3, media;
	printf("Digite a nota da primeira prova: \n");
	scanf("%f", &f1);
	printf("Digite a nota da segunda prova: \n");
	scanf("%f", &f2);
	printf("Digite a nota da terceira prova: \n");
	scanf("%f", &f3);
	media = (f1 + f2 + f3) / 3;
	if (media >= 7) {
		printf("Sua media foi: %.2f, Aprovado\n", media);
	} else if (media < 3) {
		printf("Sua media foi: %.2f, Reprovado\n", media);
	} else {
		printf("Sua media foi: %.2f, necessario fazer a Prova final\n", media);
	}
	return 0;
}