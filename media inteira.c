#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
    int contador = 0;
    float numero = 0;
    float media;
    float soma;

    do
    {
        printf("Digite o %i° valor: ",contador+1);
        scanf("%f", &numero);

        if (numero > 0)
        {
            soma += numero;
            contador++;
        }
        
    } while (numero > 0);

    media = soma / contador;

    printf("Média: %.2f", media);

    return 0;
}