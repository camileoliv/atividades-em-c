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

    printf(" Escolha uma opera��o \n");
    printf("1- Soma \n");
    printf("2- Subtra��o \n");
    printf("3- Multiplica��o \n");
    printf("4- Divis�o \n");
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
        printf("Erro - opera��o inv�lida");
        break;
    }

    printf("Primeiro n�mero: %i \n", primeiroNumero);
    printf("Primeiro n�mero: %i \n", segundoNumero);
    printf("Opera��o escolhida: %i \n", operador);
    printf("Resultado: %i \n", resultado);

    return 0;
}