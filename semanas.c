#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"portuguese");
    int codigo;

    printf("\n---Escolha o dia da semana digitando seu c�digo--\n");
    printf("1 \t Domingo \n");
    printf("2 \t Segunda\n");
    printf("3 \t Ter�a\n");
    printf("4 \t Quarta\n");
    printf("5 \t Quinta\n");
    printf("6 \t Sexta\n");
    printf("7 \t S�bado\n");
    printf("\n---------------------FIM------------------------\n");
    scanf("%i", &codigo);

    switch (codigo)
    {
    case 1:
        printf("Domingo � final de semana");
        break;
        case 2:
        printf("Segunda � dia �til");
        break;
        case 3:
        printf("Ter�a � dia �til");
        break;
        case 4:
        printf("Quarta � dia �til");
        break;
        case 5:
        printf("Quinta � dia �til");
        break;
        case 6:
        printf("Sexta � dia �til");
        break;
        case 7:
        printf("S�bado � final de semana");
        break;
    default:
        printf("Erro inv�lido");
        break;
    }

    return 0;
}