#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    // Definindo variaveis
    float media;
    float soma;
    float produto;
    int primeiroValor;
    int segundoValor;
    int maior;
    int menor;

    // Solicitando dados
    printf("Digite o primeiro valor: ");
    scanf("%i", &primeiroValor);

    printf("Digite o segundo valor: ");
    scanf("%i", &segundoValor);

    system("cls || clear");

    // Calculando

    media = (primeiroValor + segundoValor) / 2;
    soma = primeiroValor + segundoValor;
    produto = primeiroValor * segundoValor;
    maior = primeiroValor > segundoValor ? primeiroValor : segundoValor;
    menor = primeiroValor < segundoValor ? primeiroValor : segundoValor;

    // Mostrando dados
    printf("A média dos valores: %.2f \n", media);
    printf("A soma dos valores: %.2f \n", soma);
    printf("Produto resultado dos valores: %.2f \n", produto);
    printf("O valor maior: %i \n", maior);
    printf("O valor menor: %i \n", menor);

    return 0;
}