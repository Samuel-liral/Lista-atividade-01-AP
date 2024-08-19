#include <stdio.h>

int main() {
    int numero, antecessor;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    antecessor = numero - 1;

    printf("O antecessor de %d e %d", numero, antecessor);

    return 0;
}
