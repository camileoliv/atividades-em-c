#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"portuguese");

    //Declarando variaveis
    char codigo [250];
    char resultado [250];
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
    if (idade >= 65 || tempo >= 30)
    {
        strcpy(resultado, "Requerer aposentadoria");
    } else {
        strcpy(resultado, "Não querer aposentadoria");
    }

    system("cls || clear");

    printf("Código do funcionário: %s \n", codigo);
    printf("Idade: %i \n", idade);
    printf("Tempo trabalhado: %i \n", tempo);
    printf("Resultado da ánalise: %s \n", resultado);

    return 0 ;
}