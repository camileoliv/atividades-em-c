#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    // Declarando variaveis
    char loginSalvo[250] = "AkunSayang";
    char senhaSalva[250] = "negonei12";
    char login[250];
    char senha[250];

    // Solicitando dados
    printf("Login:");
    gets(login);

    printf("Senha:");
    gets(senha);

    // Mostrando resultados
    if (strcmp(login, loginSalvo) == 0 && strcmp(senha, senhaSalva) == 0)
    {
        printf("Bem vindo amado!"); /* code */
    }
    else
    {
        printf("Você não é o amado!");
    }

    return 0;
}
