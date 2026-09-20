#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero para saber o fatorial: ");
    scanf("%d", &numero);

    // Começa com 1 porque vamos fazer multiplicações
    int multiplicacao = 1;

    // i começa em 1
    // o for continua enquanto i for menor ou igual ao numero
    // a cada repetição, i aumenta 1
    for (int i = 1; i <= numero; i++) {

        // Multiplica o valor atual pelo valor de i
        multiplicacao *= i;
    }

    printf("O fatorial de %d e: %d", numero, multiplicacao);

    return 0;
}