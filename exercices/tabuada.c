//1 pedir para o usuario um numero qualqr (X)
//2 fazer a tabuada do numero usando for
//1.1=1
//1.2=2
//1.3=3
//1.4=4
//1.5=5




#include <cs50.h>
#include <stdio.h>


int main (void)
{
    int n = get_int("Qual o Numero da Tabuada? ");

    printf("🐵🐵🐵 Tabuada DO %i 🐵🐵🐵\n\n", n);

    for(int valor = 1;valor <= 10; valor++)
    {
        printf("%i x %i = %i\n",n, valor, n * valor);
    }
}

