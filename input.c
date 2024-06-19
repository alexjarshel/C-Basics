#include <stdio.h>

#define texto "Entrada e saida de dados"

int main (){

    printf("%s\n", texto);

    int idade = 0;
    int ano = 1950;
    printf ("Valor inicial da Idade %d. \n", idade);

    printf ("Digite o valor da Idade e do ano \n");

    scanf("%d %d" , &idade , &ano);

    printf ("Valor Final da Idade %d.\n", idade);
    printf ("Valor Final do ano %d.\n", ano);

}