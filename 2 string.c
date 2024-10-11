// Escreva um programa que verifique, em uma string, a existência da letra ‘a’, seja maiúscula ou minúscula,
// além de informar a quantidade de vezes em que ela ocorre.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char letra[100];
    int contador = 0;

    printf("Digite uma palavra:");
    fgets(letra, sizeof(letra), stdin);

    letra[strcspn(letra, "\n")] = '\0';

    for (int i = 0; i < strlen(letra); i++) {
        if (letra[i] == 'a' || letra[i] == 'A') {
            contador++;
        }
    }
    if (contador > 0) {
        printf("A letra 'a'  ocorre %d vez na palavra: \n", contador);
    } else {
        printf("A letra 'a'  nao foi encontrada na Palavra: .\n");
    }

    return 0;

}
