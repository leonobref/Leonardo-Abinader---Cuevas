#include <stdio.h>
#include <conio.h>
#include <string.h>

void palavraaocontrario(){
    int i, tamanho;
    char palavra[200];
    printf("Digite uma palavra: ");
    gets(palavra);
    fflush(stdin);
    tamanho = strlen(palavra);
    for (i = tamanho; i >= 0; i--)
        printf("%c", palavra[i]); 
}
void semvogais(){
    char string[200];
    int i;
    printf("\n\nDigite uma string: ");
    gets(string);
    fflush(stdin);
    for(i = 0; string[i] !='\0'; i++){
        if(string[i] != 'a' && string[i] != 'A' && string[i] != 'e' && string[i] != 'E' && string[i] != 'i' && string[i] != 'I' && string[i] != 'o' && string[i] != 'O' && string[i] != 'u' &&string[i] != 'U')
            printf("%c", string[i]);
    }
}

void maiusculo(){
    char string[200];
    int i;
    printf("\n\nDigite uma string: ");
    gets(string);
    fflush(stdin);
    for(i = 0; string[i] !='\0'; i++){
        if(string[i] >= 97 && string[i] <= 122)
            string[i] = string [i] - ('a' - 'A');
    }
    puts(string);
}

void contacaracter(){
    char string[200], k;
    int i, cont = 0;
    printf("\nDigite uma string: ");
    gets(string);
    fflush(stdin);
    printf("Digite um caracter: ");
    k = getchar();
    for(i = 0; string[i] !='\0'; i++){
        if(string[i] == k)
            cont += 1;
    }
    printf("A quantidade de vezes que %c aparece na string eh: %d", k, cont);
}

void somecaracter(){
    char string[200], k;
    int i;
    fflush(stdin);
    printf("\n\nDigite uma string: ");
    gets(string);
    printf("Digite um caracter: ");
    k = getchar();
    for(i = 0; string[i] !='\0'; i++){
        if(string[i] == k)
        string[i] = ' ';
    }  
    puts(string);
}

int main()
{
    palavraaocontrario();
    semvogais();
    maiusculo();
    contacaracter();
    somecaracter();

    return 0;
}
