#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    
    //Variaveis
    int valor;


    //Pedindo informa��es
    printf("Digite um n�mero:");
    scanf("%i, &valor");

    //Mostrando dados

if ( valor %2 == 0)
{
    printf("Esse n�mero � par");
}
else{
    printf("Esse n�mero � �mpar");
}


return 0 ;
}