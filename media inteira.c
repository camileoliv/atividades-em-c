#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
    setlocale(LC_ALL,"portuguese");

    int i= 0;
    int numero = 0;
    float soma;
    float par;
    float parCont;
    float imparCont;
    float mediaPar;
    float media;

    do
    {
        printf("Digite o %i� n�mero: ",i+1);
        scanf("%i", &numero);

        if (numero > 0)
        {
            soma += numero;

        if (numero % 2 == 0)
        {
           par += numero;
           parCont++;
        } else {
            imparCont ++;
        }
        i++;       
        } 
        
    } while (numero != 0);

    mediaPar = par / parCont;
    media = soma / i;
    
    printf("\n Quantidade de n�meros pares: %f", parCont);
    printf("\n Quantidade de �mpares: %f", imparCont);
    printf("\n M�dia de pares: %.2f", mediaPar);
    printf("\n M�dia geral: %.2f", media);

    return 0;
}