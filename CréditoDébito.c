#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"portuguese");
	
	 // Definindo Váriaveis
    float precoUnidade;
    float precoFinal;
    float desconto;
    float precoPorParcela;
    int quantidadeDeParcelas;
    int opcaoDePagamento;

    // Solicitando dados do usuário

    printf("Digite o valor do produto que deseja comprar:");
    scanf("%f", &precoUnidade);
    
    fflush (stdin);
    
    printf("Formas de Pagamento \n");
    printf("(1) - Á vista \n");
    printf("(2) - Parcelado \n");
    printf("Digite a forma de pagamento:\n");
    scanf("%i", &opcaoDePagamento);

    // Switch Case para forma de pagamento

    switch (opcaoDePagamento)
    {
    case 1 :
        desconto = precoUnidade * 0.10;
        precoFinal = (precoUnidade - desconto);

        printf("Valor do Produto: %.1f \n", precoUnidade);
        printf("Forma de Pagamento: Á Vista \n");
        printf("Valor do Desconto: %.1f \n", desconto);
        printf("Total a Pagar: %f", precoFinal);
        break;
    
    case 2:
        printf("Digite a quantidade de parcelas:");
        scanf("%i", &quantidadeDeParcelas);
        break;

        if (quantidadeDeParcelas > 6) {
         printf("Número de parcelas excedido");
        } else{
         precoPorParcela = precoUnidade / quantidadeDeParcelas;
         printf("Valor do Produto: %.1f \n", precoUnidade);
         printf("Forma de Pagamento: Parcelado \n");
         printf("Quantidade de parcelas: %i \n",quantidadeDeParcelas);
         printf("Valor das parcelas: %.2f \n", precoPorParcela);
         printf("Total a Pagar: %.2f", precoFinal);
         break;
        }
    
    default:
        printf("Forma de Pagamento Inválida");
        break;	
		}
	
	return 0;
}

