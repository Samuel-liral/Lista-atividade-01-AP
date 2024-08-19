#include <stdio.h>

int main() {
	float custo_fabrica, custo_final;
	
	printf("Digite o custo de fabrica do carro: R$ ");
	scanf("%f", &custo_fabrica);
	
	custo_final = custo_fabrica + (custo_fabrica * 28 / 100) + (custo_fabrica * 45 / 100);
	
	printf("O custo final do carro e de: R$ %.2f", custo_final);
	
	return 0;
}
