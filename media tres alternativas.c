#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main () {
    setlocale(LC_ALL,"portuguese");
     int i;
     float nota;
     float soma = 0;
     float media;
     char resultado [200];

     for (i=0;i <3; i++) {
        do {
            printf("Digite a %d° nota do aluno: \n", i+1);
            scanf("%f",&nota);

        } while (nota < 0 || nota > 10);

        soma += nota;
     }

     media = soma / i;

     if (media >= 7) {
        strcpy(resultado, "Aprovado!");
     } else if (media >= 5 && media <= 6.9) {
        strcpy(resultado, "Recuperação!");
     } else 
     strcpy (resultado, "Reprovado!");

     printf ("\n Média: %.2f", media);
     printf ("\n Resultado: %s", resultado);

    return 0;
}