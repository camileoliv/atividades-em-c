#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
 int main () {
    setlocale(LC_ALL,"portuguese");

    //Declarando variaveis

    //Solicitando dados
    printf("Código |  Descrição \n");
    printf("   1   |  Adicionar pessoa \n");
    printf("   2   | Sair e exibir resultados \n");
    printf("Escolha o código:");
    scanf("%d",&menu)

    switch (menu)
    {
    case 1: printf("Digite sua idade: ");
    scanf("%i",&idade);

    printf("Gênero: (M) Masculino (F) Feminino");
    scanf("%c",&sexo);

    printf("Digite o seu último/atual salário:");
    scanf("%i",&salario);

    if (sexo = 'F')
    {
      mulheresSalario = 
    }
    
      break;
      case 2:
      printf("Média de salário: %.2f", mediaSalario);
      printf("Pessoa mais velha: %s", old);
      printf("Pessoa mais nova: %s", newBorn);
    
    default:


      break;
    }

    //Analise de dados

    //Exibição de resultados
    return 0;
 }