#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL, "portuguese");

    int idade;
    int i = 0;
    int old = 0;
    int newBorn = 999;
    int menu;
    float soma;
    float salario;
    int mulheresSalario;
    float mediaSalario;
    char sexo;

    do
    {

        printf("Codigo |  Descricacao \n");
        printf("   1   |  Adicionar pessoa \n");
        printf("   2   | Sair e exibir resultados \n");
        printf("Escolha o codigo:");
        scanf("%d", &menu);

        system("clear||cls");

        switch (menu)
        {
        case 1:
            printf("Digite sua idade: ");
            scanf("%d", &idade);

            fflush(stdin);

            printf("Genero: (M) Masculino (F) Feminino: ");
            scanf("%c", &sexo);
            sexo = toupper (sexo);

            printf("Digite o seu ultimo/atual salario: ");
            scanf("%f", &salario);

            system("clear||cls");

            if (sexo == 'F' && salario >= 5000)
            {
                mulheresSalario++;
            }

            old = idade > old ? idade : old;
            newBorn = idade < newBorn ? idade : newBorn;

            i++; // contador.
            soma += salario;

            mediaSalario = soma / i;

            break;
        case 2:

            printf("\nMedia de salario: %.2f", mediaSalario);
            printf("\nPessoa mais velha: %d", old);
            printf("\nPessoa mais nova: %d", newBorn);
            printf("\nNumero de mulheres com salario acima de 5.000: %i", mulheresSalario);

            break;
        default:
            printf("Opcao invalida!");
            break;
        }
    } while (menu != 2);

    return 0;
}
