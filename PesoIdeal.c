#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"portuguese");
	
	 // Definindo Váriaveis
    float altura, pesoIdeal;
    char escolhaDeSexo;

    // Solicitando dados do usuário
    printf("Calculadora de peso ideal! \n");
    printf("Para começar escolha seu sexo \n");
    printf("(M) para masculino \n");
    printf("(F) para feminino\n");
    scanf("%c", &escolhaDeSexo);
    
    system ("clear || cls");
    
    printf("Digite sua altura");
    scanf("%f", &altura);
    
    if (escolhaDeSexo == 'm') {
    	escolhaDeSexo = 'M';
	}

    // Apresentando dados

    switch (escolhaDeSexo)
    {
    case 'M' :
    	pesoIdeal = (72.7 * altura) -58;
        printf("O seu peso ideal é: %.2f \n", pesoIdeal);
        break;
    
    case 'F':
    	pesoIdeal = (62.1 * altura) -44.7;
        printf("O seu peso ideal é: %.2f \n", pesoIdeal);
        break;
    
    default:
        printf("Erro - Escolha inválida");
        break;	
		}
	
	return 0;
}



