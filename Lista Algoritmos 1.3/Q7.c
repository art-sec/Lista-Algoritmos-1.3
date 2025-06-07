#include <stdio.h>

int main() {
	float n;
	printf("Digite o valor de N: \n");
	scanf("%f", &n);
	if (n <= 10) {
		printf("F1\n");
	}
	else if (n > 10 && n <= 100) {
		printf("F2\n");
	}
	else {
		printf("F3\n");
	}
	return 0;
}