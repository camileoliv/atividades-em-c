#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 int main () {
    setlocale(LC_ALL,"portuguese");
    int quantidadeDeMacas;
    float precoUnitario;
    float precoFinal;

    printf("Digite a quantidade de maçãs:");
    scanf("%i", &quantidadeDeMacas);

    if (quantidadeDeMacas < 12){
        precoUnitario = 1.30;
    } else {
        precoUnitario = 1;
    }

    precoUnitario = quantidadeDeMacas < 12 ? 1.30 : 1;

    precoFinal = quantidadeDeMacas * precoUnitario;

    printf("Quantidade de maçãs: %d \n", quantidadeDeMacas);
    printf("Preço da unidade: R$2 %.2f \n", precoUnitario);
    printf("Preço final: %.2f \n", precoFinal);
  

    return 0 ;
 }
