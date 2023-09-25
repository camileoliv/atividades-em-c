#include <stdio.h>
#include <stdlib.h>


int main () {
    // Declarando variáveis
    int idade = 20; 
    float peso = 89.2;
    char sexo = 'F';
    char nome [250] = "Renato"; 
    float altura = 1.70;
    char sobrenome [250] = "Barreto";

    // Exibindo dados para o usuário.
    printf("Idade: %d anos. \n", idade);
    printf("Peso: %.2f Kg. \n", peso);
    printf("Sexo: %c \n", sexo);
    printf("Nome: %s \n", nome);
    printf("Altura: %.2f \n", altura);
    printf("Sobrenome: %s \n", sobrenome);

    return 0;
}