#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    
    //Variaveis
    int valor;


    //Pedindo informações
    printf("Digite um número:");
    scanf("%i, &valor");

    //Mostrando dados

if ( valor %2 == 0)
{
    printf("Esse número é par");
}
else{
    printf("Esse número é ímpar");
}


return 0 ;
}