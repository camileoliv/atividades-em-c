#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "portuguese");

    //Declarando variaveis
    int idade;

    //Solicitando dados
    printf("Qual a sua idade?");
    scanf("%i", &idade);

    //Analise
    if (idade < 18 || idade > 65)
    {
      printf("N�o � obrigado a votar");
    } else {
        printf("� obrigado a votar");
    }
    

    return 0 ;
}