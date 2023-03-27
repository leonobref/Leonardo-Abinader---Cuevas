#include <stdio.h>
#include <string.h>
#include <conio.h>
void achaletra(char *string, char *caracter, int *totalachados, int *vetor){
    for(int i = 0; i < 100; i++){
    if(string[i] == caracter){
        vetor[*totalachados] = i;
        *totalachados+= 1;
        }
    }
}

int main()
{
    char string[101];
    char caracter;
    printf("Digite uma String de ate 100 Caracteres: ");
    gets(string);

    printf("Digite um caracter a ser encontrado dentro da String: ");
    caracter = getche();
    int total = 0;
    int vetor[100];
    achaletra(string, caracter, &total, vetor);
    for(int i =0; i < total; i++)
    printf("\nA letra %c foi encontrada na posicao %d", caracter, vetor[i] + 1);
    return 0;
}
