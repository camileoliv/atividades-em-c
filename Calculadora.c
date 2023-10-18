#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int primeiroNumero;
    int segundoNumero;
    int operador;
    int resultado;

    printf(" Escolha uma operação \n");
    printf("1- Soma \n");
    printf("2- Subtração \n");
    printf("3- Multiplicação \n");
    printf("4- Divisão \n");
    scanf("%i", &operador);

    printf("Digite o primeiro valor:");
    scanf("%i", &primeiroNumero);

    printf("Digite o segundo valor:");
    scanf("%i", &segundoNumero);

    system("cls || clear");

    switch (operador)
    {
    case 1:
        resultado = primeiroNumero + segundoNumero;
        break;
    case 2:
        resultado = primeiroNumero - segundoNumero;
        break;
    case 3:
        resultado = primeiroNumero * segundoNumero;
        break;
    case 4:
        resultado = primeiroNumero / segundoNumero;
        break;
    default:
        printf("Erro - operação inválida");
        break;
    }

    printf("Primeiro número: %i \n", primeiroNumero);
    printf("Primeiro número: %i \n", segundoNumero);
    printf("Operação escolhida: %i \n", operador);
    printf("Resultado: %i \n", resultado);

    return 0;
}
