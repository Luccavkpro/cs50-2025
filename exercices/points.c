#include <stdio.h>
#include <cs50.h>

int main(void)
{
    const int MEU = 2;
    int points = get_int("Quantos ponto você perdeu? ");

    if (points < MEU)
    {
        printf("você perdeu menos pontos do que eu.\n");
    }

    else if (points > MEU)
    {
        printf("você perdeu mais pontos do que eu\n");
    }

    else
    {
        printf("você perdeu o memsmo numero de pontos que eu.\n");
    }
}
