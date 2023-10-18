#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    // Definindo variaveis
    int codigo;
    char prato [200];
    float valor;

    //
    printf(" Escolha o prato digitando seu código \n");
    printf("1- Picanha \n");
    printf("2- Lasanha \n");
    printf("3- Strogonoff \n");
    printf("4- Bife Acebolado \n");
    printf("5- Pão com ovo\n");
    scanf("%i", &codigo);

    switch (codigo)
    {
    case 1:
        valor = 25.00;
        strcpy(prato, "Picanha");
        break;
    case 2:
        valor = 20.00;
        strcpy(prato, "Lasanha");
        break;
    case 3:
        valor = 18.00;
        strcpy(prato, "Strogonoff");
        break;
    case 4:
        valor = 15.00;
        strcpy(prato, "Bife Acebolado");
        break;
    case 5:
        valor = 5.00;
        strcpy(prato, "Pão com ovo");
        break;
    default:
        printf("Erro - inváido");
        break;
    }

    printf("Prato escolhido: %s \n", prato);
    printf("Total: %.2f \n", valor);

    return 0;
}
