#include <stdio.h>

int main() {
	int eleitores, votos_brancos, votos_nulos, votos_validos;
	float percentual_brancos, percentual_nulos, percentual_validos;
	
	printf("Digite o numero total de eleitores: ");
	scanf("%d", &eleitores);
	
	printf("Digite o numero de votos brancos: ");
	scanf("%d", &votos_brancos);
	
	printf("Digite o numero de votos nulos: ");
	scanf("%d", &votos_nulos);
	
	votos_validos = eleitores - (votos_brancos + votos_nulos);
	percentual_brancos = (float)votos_brancos / eleitores * 100; 
	percentual_nulos = (float)votos_nulos / eleitores * 100; 
	percentual_validos = (float)votos_validos / eleitores * 100;
	
	printf("Percentual de votos brancos: %.2f%%\n", percentual_brancos);
	printf("Percentual de votos nulos: %.2f%%\n", percentual_nulos);
	printf("Percentual de votos validos: %.2f%%\n", percentual_validos);
	
	return 0; 
}
