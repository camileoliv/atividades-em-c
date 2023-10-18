#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
  setlocale(LC_ALL, "portuguese");
  
  int idade;
  int i =0;
  int old = 0;
  int newBorn = 0;
  int menu;
  float salario;
  float mulheresSalario;
  float mediaSalario;
  char sexo;

 do {
  
    printf("Codigo |  Descricacao \n");
    printf("   1   |  Adicionar pessoa \n");
    printf("   2   | Sair e exibir resultados \n");
    printf("Escolha o codigo:");
    scanf("%d", &menu);
    
     system("clear||cls");

     switch (menu)  {
     case 1:
      printf("Digite sua idade: ");
      scanf("%i", &idade);
      
      fflush(stdin);

      printf("Genero: (M) Masculino (F) Feminino: ");
      scanf("%c", &sexo);
      sexo = toupper (sexo);

      printf("Digite o seu ultimo/atual salario: ");
      scanf("%f", &salario);
      
      system("clear||cls");

      if (sexo = 'F' && salario >= 5.000 )
      {
        mulheresSalario++;
      }


      if (i == 0)
      {
        old = idade;
        newBorn = idade;
        
        old: old > newBorn? old : newBorn;
        newBorn: old < newBorn? old : newBorn;
        
        i++;
      }
      
      mediaSalario = soma / i

      break;
     case 2:

      printf("Media de salario: %.2f", mediaSalario);
      printf("Pessoa mais velha: %s", old);
      printf("Pessoa mais nova: %s", newBorn);
      printf("\n Numero de mulheres com salario acima de 5.000: %.3f", mulheresSalario);
      
     default:
      printf("Opcao invalida!");
      break;
    }
 } while (menu != 2);

  return 0;
}
