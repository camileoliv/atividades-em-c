#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

int idade;
float peso;
char sexo;
char nome [250];
char sobrenome [250];

printf("Digite sua idade: ");
scanf("%d",&idade);

printf("Digite seu peso: ");
scanf("%f",&peso);

fflush(stdin);

printf("Digite seu sexo: ");
scanf("%c",&sexo);

fflush(stdin);

printf("Digite seu nome: ");
gets(nome);

fflush(stdin);

printf("Digite seu sobrenome: ");
gets(sobrenome);

system("cls || clear");

printf("Idade: %d \n", idade);
printf("Peso: %.2f \n", peso);
printf("Sexo: %c \n", sexo);
printf("Nome: %s \n", nome);
printf("Sobrenome: %s \n", sobrenome);


return 0;

}