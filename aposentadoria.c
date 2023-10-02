#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"portuguese");

    //Declarando variaveis
    char codigo [250];
    int idade;
    int tempo;

    //Solicitando dados
    printf("Digite seu código de empregado: ");
    gets(codigo);

    printf("Digite seu ano de nascimento:");
    scanf("%i", &idade);

    printf("Digite seu tempo trabalhado: ");
    scanf("%i", &tempo);

    //Analise
    idade = 2023 - idade;

    //Mostrando dados
    printf("Código: %s \n", codigo);
    printf("Idade: %i \n", idade);
    printf("Tempo trabalhado: %i \n", tempo);

     if (idade > 64 || tempo > 29)
    {
        printf("Requerer aposentadoria");
    } else {
        printf("Não querer aposentadoria");
    }

    return 0 ;
}