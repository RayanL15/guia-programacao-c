#include <stdio.h>

int main() {
    int opcao;

    // Mostra as opções para o usuário
    printf("Escolha uma opcao:\n");
    printf("1 - Ver saldo\n");
    printf("2 - Fazer deposito\n");
    printf("3 - Fazer saque\n");
    printf("4 - Sair\n");

    printf("Digite uma opcao: ");
    scanf("%d", &opcao);

    // O switch verifica o valor da variavel "opcao"
    switch (opcao) {

        // Se opcao for igual a 1
        case 1:
            printf("Voce escolheu ver o saldo.");
            break; // Encerra o switch

        // Se opcao for igual a 2
        case 2:
            printf("Voce escolheu fazer um deposito.");
            break;

        // Se opcao for igual a 3
        case 3:
            printf("Voce escolheu fazer um saque.");
            break;

        // Se opcao for igual a 4
        case 4:
            printf("Saindo do programa...");
            break;

        // Se nenhuma das opções acima for escolhida
        default:
            printf("Opcao invalida.");
    }

    return 0;
}