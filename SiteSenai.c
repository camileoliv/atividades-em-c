#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    char login[250];
    char senha[250];
    char loginSalvo[250] ;
    char senhaSalva[250] ;
    char senhaRepetida [250] ;

    do
    {
        printf("Bem-vindo ao SenaiConnect!\n");
        printf("Faça seu cadastro!\n");
        printf("Crie o seu nome de usuário: ");
        gets(loginSalvo);

        printf("\nCrie a sua senha: ");
        gets(senhaSalva);

        printf("\nRepita a senha: ");
        gets(senhaRepetida);

        printf("Conta criada com sucesso!");

        system("cls||clear");

        if (strcmp(senhaRepetida, senhaSalva) == 0) {
            
         printf("Seja bem-vindo!");
         printf("\nLogin:");
         gets(login);

         printf("Senha:");
         gets(senha);

         system("cls || clear");

            if (strcmp(login, loginSalvo) == 0 && strcmp(senha, senhaSalva) == 0)
           {
            printf("Bem vindo ao SenaiConnect!");
           }
            else
           {
            printf("Dados incorretos, tente novamente.\n");
           }

        }

        
    } while (strcmp (login, loginSalvo) != 0 || strcmp(senha, senhaSalva) != 0);

    return 0;
}