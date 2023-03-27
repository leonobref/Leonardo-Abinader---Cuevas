#include <stdio.h>
int main()
{
    int inteiro = 4;
    float real = 5.8;
    char caracter = 'S';
    int *pontinteiro = &inteiro;
    float *pontreal = &real;
    char *pontcaracter = &caracter;
    printf("Antes da modificacao: \n");
    printf("Inteiro: %d|", inteiro);
    printf("Real: %.1f|", real);
    printf("Char: %c", caracter);
    *pontinteiro = 10;
    *pontreal = 8.2;
    *pontcaracter = 'F';
    printf("\n\nDepois da modificacao: \n");
    printf("Inteiro: %d|", inteiro);
    printf("Real: %.1f|", real);
    printf("Char: %c", caracter);
    return 0;
}
