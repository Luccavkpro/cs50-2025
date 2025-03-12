#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int l = get_int("l: ");
    int s = get_int("s: ");
    printf("%i\n", l + s);
}