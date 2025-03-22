#include <cs50.h>
#include <stdio.h>


int main(void)
{
    int soma = 0;
    for(int i = 1;i <= 4;i++)
    {
         soma = soma + get_int("Bimestre %i: ", i);
    }

    int media = soma / 4;
    printf("%i\n", media);
    if (media > 8)
    {
        printf("Passou de ano\n");
    }
    else
    {
        printf("Não passou\n");
    }

    // int media = soma / 4;
    // int b1 = get_int("Bimestre 1: ");
    // int b2 = get_int("Bimestre 2: ");
    // int b3 = get_int("Bimestre 3: ");
    // int b4 = get_int("Bimestre 4: ");
    // int soma = b1 + b2 + b3 + b4;
    // int media = soma / 4;
    // printf("%i\n", media);

    // if (media > 7)
    // {
    //     printf("Passou de ano\n");
    // }
    // else
    // {
    //     printf("Infelizmente não passou, Pode chorar\n");
    // }
}