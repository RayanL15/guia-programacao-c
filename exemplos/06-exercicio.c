#include <stdio.h>
int main (){

//descobrir se foi aprovado ou reprovado com a média das notas//

//digite as 3 notas// 
    float nota1;
    printf("digite a sua primeira nota: \n");
    scanf ("%f", &nota1);

    float nota2;
    printf("digite a sua segunda nota: \n");
    scanf ("%f", &nota2);

    float nota3;
    printf("digite a sua terceira nota: \n");
    scanf ("%f", &nota3);

//calcula a média//
    float valor = (nota1 + nota2 + nota3) / 3;
    printf("\t Sua media e: %.2f", valor);

//fala se aprovado ou reprovado//
    if (valor >= 7) {
        printf("\n \t voce foi aprovado!");
    } else {
        printf("\n \t voce foi reprovado.");
    }
    return 0;
}