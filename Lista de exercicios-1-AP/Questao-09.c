#include <stdio.h>

int main() {
    float n1, n2, n3, media_final;
    
    printf("Digite o valor da primeira nota do aluno: ");
    scanf("%f", &n1);
    
    printf("Digite o valor da segunda nota do aluno: ");
    scanf("%f", &n2);
    
    printf("Digite o valor da terceira nota do aluno: ");
    scanf("%f", &n3);
    
    media_final = (2 * n1 + 3 * n2 + 5 * n3) / 10;
    
    printf("A media final do aluno e de: %.2f\n", media_final);

    return 0;
}
