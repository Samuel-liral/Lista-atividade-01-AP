#include <stdio.h>

int main() {
	float salario_atual, percentual_reajuste, novo_salario;
	
	printf("Digite seu salario atual: R$ ");
	scanf("%f", &salario_atual);
	
	printf("Digite o percentual de reajuste: ");
	scanf("%f", &percentual_reajuste);
	
	novo_salario = salario_atual + (salario_atual * percentual_reajuste / 100);
	
	printf("O valor do novo salario e de: R$ %.2f\n", novo_salario);
	
	return 0;
}
