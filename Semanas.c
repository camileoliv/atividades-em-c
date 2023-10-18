#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"portuguese");
    int codigo;

    printf("\n---Escolha o dia da semana digitando seu código--\n");
    printf("1 \t Domingo \n");
    printf("2 \t Segunda\n");
    printf("3 \t Terça\n");
    printf("4 \t Quarta\n");
    printf("5 \t Quinta\n");
    printf("6 \t Sexta\n");
    printf("7 \t Sábado\n");
    printf("\n---------------------FIM------------------------\n");
    scanf("%i", &codigo);

    switch (codigo)
    {
    case 1:
        printf("Domingo é final de semana");
        break;
        case 2:
        printf("Segunda é dia útil");
        break;
        case 3:
        printf("Terça é dia útil");
        break;
        case 4:
        printf("Quarta é dia útil");
        break;
        case 5:
        printf("Quinta é dia útil");
        break;
        case 6:
        printf("Sexta é dia útil");
        break;
        case 7:
        printf("Sábado é final de semana");
        break;
    default:
        printf("Erro inválido");
        break;
    }

    return 0;
}
