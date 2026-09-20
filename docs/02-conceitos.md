# Conceitos Básicos

## Variáveis

Variáveis são utilizadas para armazenar valores durante a execução do programa.

Exemplo:

```c
int idade = 18;
float altura = 1.75;
char letra = 'A';
```

## Entrada e saída

O `printf` é utilizado para mostrar informações na tela.

Exemplo:

```c
printf("Ola!");
```

O `scanf` é utilizado para receber dados digitados pelo usuário.

Exemplo:

```c
int idade;

scanf("%d", &idade);
```

## Estruturas condicionais

As estruturas `if` e `else` permitem executar diferentes partes do programa dependendo de uma condição.

Exemplo:

```c
if (idade >= 18) {
    printf("Maior de idade");
} else {
    printf("Menor de idade");
}
```

## Switch

O `switch` é utilizado quando existem várias opções possíveis.

Exemplo:

```c
int opcao = 1;

switch (opcao) {
    case 1:
        printf("Opcao 1");
        break;

    case 2:
        printf("Opcao 2");
        break;

    default:
        printf("Opcao invalida");
}
```

## Estruturas de repetição

Estruturas como `for` e `while` permitem repetir instruções.

### For

O `for` é utilizado quando sabemos quantas vezes queremos repetir uma ação.

Exemplo:

```c
for (int i = 1; i <= 5; i++) {
    printf("%d\n", i);
}
```

### While

O `while` repete um bloco de código enquanto uma condição for verdadeira.

Exemplo:

```c
int i = 1;

while (i <= 5) {
    printf("%d\n", i);
    i++;
}
```
