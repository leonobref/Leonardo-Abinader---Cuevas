#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[100], reversa[100];
    int a, i;
    printf("Digite uma palavra: ");
    gets(palavra);
    fflush(stdin);
    
    for(i = 0; palavra[i] !='\0'; i++){
        if(palavra[i] >= 97 && palavra[i] <= 122)
            palavra[i] = palavra[i] - ('a' - 'A');
    }

    strcpy(reversa,palavra);
    strrev(reversa);
    a = strcmp(palavra, reversa);
    if (a == 0)
        printf("\nEh palindromo.");
    else
        printf("\nNao eh palindromo");
    return 0;
}
