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
      printf("Não é obrigado a votar");
    } else {
        printf("É obrigado a votar");
    }
    

    return 0 ;
}
