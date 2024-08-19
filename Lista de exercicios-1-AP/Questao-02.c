#include <stdio.h>

int main() {
	int A, b, h;
	
	printf("Digite o valor da base do retangulo: ");
	scanf("%d", &b);
	
	printf("Digite o valor da altura do retangulo: ");
	scanf("%d", &h);
	
	A = b * h;
	
	printf("A area do retangulo e de: %d", A);
	
	return 0;
}

