#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("n: ");

    if (n % 2 == 0)
    {
        printf("Par\n");
    }

    else
    {
        printf("Impar\n");
    }

}
