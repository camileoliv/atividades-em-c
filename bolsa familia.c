#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
  setlocale(LC_ALL, "portuguese");

  // Declarando variaveis
  int idade;
  int i =0;
  int old = 0;
  int menu;
  int newBorn = 0;
  float salario;
  float mulheresSalario;
  float mediaSalario;
  char sexo[500];

  do
  {

    printf("Codigo |  Descricacao \n");
    printf("   1   |  Adicionar pessoa \n");
    printf("   2   | Sair e exibir resultados \n");
    printf("Escolha o codigo:");
    scanf("%d", &menu);

        switch (menu)
    {
    case 1:
      printf("Digite sua idade: ");
      scanf("%i", &idade);
      
      fflush(stdin);

      printf("Genero: (M) Masculino (F) Feminino");
      scanf("%c", &sexo);

      printf("Digite o seu ultimo/atual salario:");
      scanf("%f", &salario);

      //if (sexo = 'F' && salario >= 5.000 )
      //{
        //mulheresSalario++;
      //}

      if (i == 0)
      {
        old = idade;
        newBorn = idade;
        i++;
      }
      else if (idade > old)
      {
        old = idade;
      }
      else if (idade < newBorn)
      {
        newBorn = idade;
      }

      break;
    case 2:
      printf("\n Media de salario: %.2f", mediaSalario);
      //printf("\n Numero de mulheres com salario acima de 5.000: %.3f", mulheresSalario);
      printf("\n Pessoa mais velha: %s", old);
      printf("\n Pessoa mais nova: %s", newBorn);

    default:
      printf("Opcao invalida!");
      break;
    }
  } while (menu != 2);

  return 0;
}
