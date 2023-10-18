#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL,"portuguese");
    //Declarando variaveis
    int primeiroNumero;
    int segundoNumero;
    int terceiroNumero;
    int maior;
    int menor;

    //Solicitando dados
    printf("Digite o primeiro valor:");
    scanf("%i", &primeiroNumero);
    printf("Digite o segundo valor:");
    scanf("%i", &segundoNumero);
    printf("Digite o terceiro valor:");
    scanf("%i", &terceiroNumero);

    system("cls || clear");

    //Analise
    maior = primeiroNumero > segundoNumero ? primeiroNumero : segundoNumero ;
    maior = maior > terceiroNumero ? maior : terceiroNumero;

    menor = primeiroNumero < segundoNumero ? primeiroNumero : segundoNumero ;
    menor = menor < terceiroNumero ? menor : terceiroNumero;
 
    //Mostrando dados
    printf("O maior número: %i \n", maior);
    printf("O menor número: %i \n", menor);

    return 0 ;
}
