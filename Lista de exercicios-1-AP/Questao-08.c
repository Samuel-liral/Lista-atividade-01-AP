#include <stdio.h>

int main() {
    float C, F;
    
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &F);
    
    C = (5.0 / 9.0) * (F - 32);
    
    printf("A temperatura em graus Celsius e de: %.2f\n", C);

    return 0;
}
