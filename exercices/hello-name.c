#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string resposta = get_string("Qual seu nome?");
    printf("ola  %s Bem vindo a Ilha da Cobiça\n ", resposta);
}