#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"portuguese");
	
	 // Definindo V�riaveis
    float altura, pesoIdeal;
    char escolhaDeSexo;

    // Solicitando dados do usu�rio
    printf("Calculadora de peso ideal! \n");
    printf("Para come�ar escolha seu sexo \n");
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
        printf("O seu peso ideal �: %.2f \n", pesoIdeal);
        break;
    
    case 'F':
    	pesoIdeal = (62.1 * altura) -44.7;
        printf("O seu peso ideal �: %.2f \n", pesoIdeal);
        break;
    
    default:
        printf("Erro - Escolha inv�lida");
        break;	
		}
	
	return 0;
}



