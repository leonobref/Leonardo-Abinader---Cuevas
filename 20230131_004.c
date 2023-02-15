#include <stdio.h>
#include <string.h>
#include <conio.h>

void opa (char s1[21]){
    printf("\nDigite uma string s1 com no maximo 20 caracteres: \n");
    gets(s1);
    fflush(stdin);
}
void opb (char s1[21]){
    printf("\nO tamanho de s1 eh: %d\n", strlen(s1));
}
void opc (char s1[21],char s2[21]){
    printf("\nDigite uma string s2 com no maximo 20 caracteres: \n");
    gets(s2);
    fflush(stdin);
    if (strcmp(s1,s2) == 0)
        printf("s1 e s2 sao iguais!\n");
    else
        printf("s1 e s2 sao diferentes!\n");
}
void opd (char s1[21], char s2[21]){
    printf("\nDigite uma string s2 com no maximo 20 caracteres: \n");
    gets(s2);
    fflush(stdin);
    strcat(s1,s2);
    printf("A concatenacao das duas strings eh:\n");
    puts (s1);
}

void ope (char s1[21]){
    char s3[21];
    strcpy(s3,s1);
    strrev(s3);
    puts (s3);
}

void opf (char s1[21]){
    char c1;
    int i, cont = 0;
    printf("Digite um caracter: ");
    c1 = getchar();
    fflush(stdin);
    for(i = 0; s1[i] !='\0'; i++){
        if(s1[i] == c1)
            cont += 1;
    }
    printf("A quantidade de vezes que %c aparece na string eh: %d\n", c1, cont);
}

void opg (char s1[21]){
    char c1, c2;
    int i = 0, cont = 0;
    printf("Digite um caracter: ");
    c1 = getchar();
    fflush(stdin);
    printf("Digite um caracter que vai substituir o primeiro %c na string: ", c1);
    c2 = getchar();
    fflush(stdin);
    for (;;){
        if(s1[i] == c1){
            s1[i] = c2;
            break;
        }
        i++;
        
    }
    printf("Nova string:\n");
    puts(s1); 
}

void oph (char s1[21], char s2[21]){

    printf("\nDigite uma string s2 com no maximo 20 caracteres: \n");
    gets(s2);
    fflush(stdin);

    if (strstr(s1,s2) != NULL)
        printf("Eh substring!\n");
    else
        printf("Nao eh substring!\n");
}

void opi (char s1[21]){
    char s3[21];
    int p1, t;
    int i,j = 0;
    printf("\nDigite a posicao que vai comecar a substring: ");
    scanf("%d", &p1);
    printf("Digite o tamanho da substring: ");
    scanf("%d", &t);

    for (i = p1; i < p1 + t; i++){
        s3[j] = s1[i];
        j++;
    }
    puts(s3);
} 

int main()
{
    char s1[21], s2[21];
    char opcao;
    for(;;){
    printf("\nEscolha uma opcao:\n");
    printf("(a) Ler uma string S1 (tamanho maximo 20 caracteres);\n");
    printf("(b) Imprimir o tamanho da string S1;\n");
    printf("(c) Comparar a string S1 com uma nova string S2\n");
    printf("(d) Concatenar a string S1 com uma nova string S2\n");
    printf("(e) Imprimir a string S1 de forma reversa;\n");
    printf("(f) Contar quantas vezes um dado caractere aparece na string S1.\n");
    printf("(g) Substituir a primeira ocorrencia do caractere C1 da string S1 pelo caractere C2.\n");
    printf("(h) Verificar se uma string S2 e substring de S1.\n");
    printf("(i) Retornar uma substring da string S1.\n");
    printf("(s) SAIR\n");
    opcao = getch();
    if (opcao == 'a')
        opa(s1);
    else if (opcao == 'b')
        opb(s1);
    else if (opcao == 'c')
        opc(s1,s2);
    else if (opcao == 'd')
        opd(s1,s2);
    else if (opcao == 'e')
        ope(s1);
    else if (opcao == 'f')
        opf(s1);
    else if (opcao == 'g')
        opg(s1);
    else if (opcao == 'h')
        oph(s1, s2);
    else if (opcao == 'i')
        opi(s1);
    else if( opcao == 's'){
        printf("\nFim do programa");
        break;
    }
    }
}
