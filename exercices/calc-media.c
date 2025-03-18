//[X] pegar a nota de cada bimestre 1
//[X] calcular a media 2
//[X] saber se passei de, calcular se a media é maior que sete 3
    //[X] se a media for maior que 7 imprimir que passo 3.1
    //[X] se a media for menor imprimir que nao passoi 3.2

    #include <cs50.h>
    #include <stdio.h>
    
    
    int main(void)
    {
        int b1 = get_int("Bimestre 1: ");
        int b2 = get_int("Bimestre 2: ");
        int b3 = get_int("Bimestre 3: ");
        int b4 = get_int("Bimestre 4: ");
        int soma = b1 + b2 + b3 + b4;
        int media = soma / 4;
        printf("%i\n", media);
    
        if (media > 7)
        {
            printf("Passou de ano\n");
        }
        else
        {
            printf("Infelizmente não passou, Pode chorar\n");
        }
    }