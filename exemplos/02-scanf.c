#include <stdio.h>

int main() {

    // Cria a variável, mas ainda sem definir o valor
    int idade;

    // Mostra uma mensagem para o usuário
    printf("Digite sua idade: ");

    // scanf recebe um valor digitado pelo usuário
    // %d significa que esperamos um número inteiro
    // &idade indica onde esse valor será armazenado
    scanf("%d", &idade);

    // Mostra o valor que foi digitado
    printf("Você tem %d anos.\n", idade);

    return 0;
}