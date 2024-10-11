//1) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 
//valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na 
//linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e 
//retorne uma mensagem avisando se o número informado pertence ou não a sequência.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero;
    int a = 0, b = 1, c = 0;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    do
    {
        if (numero == 0 || numero == 1)
        {
            printf("O numero %d pertence a sequencia de Fibonacci\n", numero);
            break;
        }
        else if (numero < 0)
        {
            printf("O numero %d nao pertence a sequencia de Fibonacci\n", numero);
            break;
        }
        else
        {
            while (c < numero)
            {
                c = a + b;
                a = b;
                b = c;
            }
            if (c == numero)
            {
                printf("O numero %d pertence a sequencia de Fibonacci\n", numero);
                break;
            }
            else
            {
                printf("O numero %d nao pertence a sequencia de Fibonacci\n", numero);
                break;
            }
        }
    } while (numero >= 0);
    return 0;
}
