#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando variaveis
    int valor;

    // Solicitando daos
    printf("Digite um valor: ");
    scanf("%f", &valor);

    // Mostrando dados
    if (valor > 10)
    {
        printf("� maior que 10!");
    }
    else
    {
        printf("� menor que 10");
    }

    return 0;
}