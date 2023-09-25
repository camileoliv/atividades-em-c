#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"portuguese");

    float primeiraNota;
    float segundaNota;
    float media;

   printf("Digite a primeira nota: ");
   scanf("%f",&primeiraNota);

   printf("Digite a segunda nota: ");
   scanf("%f",&segundaNota);

   media = (primeiraNota + segundaNota) / 2;

   printf("Primeira nota: %.2f \n", primeiraNota);
   printf("Segunda nota: %.2f \n", segundaNota);
   printf("Média: %.2f \n", media);

   return 0;
}