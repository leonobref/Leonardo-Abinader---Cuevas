#include <stdio.h>
#include <string.h>

int main()
{
    char frase[200];
    int i;
    printf("Digite uma frase para ser codificada: \n");
    gets(frase);
    fflush(stdin);
    for (i = 0; frase[i] != '\0'; i++){
        if ((frase[i] >= 'a'&& frase[i] <= 'z') || (frase[i] >= 'A' && frase[i] <= 'Z')){

            if(frase[i] >= 97 && frase[i] <= 122)
            frase[i] = frase [i] - ('a' - 'A');

            if(frase[i] == 'Z')
                frase[i] = 'C';

            else if(frase[i] == 'Y')
                frase[i] = 'B';

            else if(frase[i] == 'X')
                frase[i] = 'A';

            else
                frase[i] = frase[i] + 3;
    }
    }
    puts(frase);
}
