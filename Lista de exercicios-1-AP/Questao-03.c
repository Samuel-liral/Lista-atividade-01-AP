#include <stdio.h>

int main() {
	int anos, meses, dias, total_dias;
	
	printf("Digite sua idade em anos: ");
	scanf("%d", &anos);
	
	printf("Digite a idade em meses: ");
	scanf("%d", &meses);
	
	printf("Digite a idade em dias: ");
	scanf("%d", &dias);
	
	total_dias = anos * 365 + meses * 30 + dias;
	
	printf("A idade total em dias e: %d\n", total_dias);
	
	return 0;
}
