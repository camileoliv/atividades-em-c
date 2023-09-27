#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando variaveis
    char nome [500];
    int idade;
    float primeiraNota;
    float segundaNota;
    float terceiraNota;
    float media;
    char situacao [500];

    // Solicitando dados
    printf("Escreva o seu nome: ");
    gets(nome);

    printf("Escreva a sua idade: ");
    scanf("%i", &idade);

    printf("Escreva a sua primeira nota: ");
    scanf("%f", &primeiraNota);

    printf("Escreva a sua segunda nota: ");
    scanf("%f", &segundaNota);

    printf("Escreva a sua terceira nota: ");
    scanf("%f", &terceiraNota);

    system("cls || clear");

    // Calculando
    media = (primeiraNota + segundaNota + terceiraNota) / 3;

    // Mostrando dados
    printf("Nome: %s \n", nome);
    printf("Idade: %d anos. \n", idade);
    printf("Média: %.2f \n", media);

        if (media < 7)
    {
        strcpy(situacao,"Reprovado!");
    }
    else
    {
        strcpy(situacao,"Aprovado!");
    }

     printf("Situação: %s \n", situacao);

    return 0;
}