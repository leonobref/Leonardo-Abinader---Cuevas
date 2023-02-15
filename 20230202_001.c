#include <stdio.h>
#include <string.h>
int j = 1;
void preencheequipe(char a[4][120]){
    int i;
    for (i = 0; i < 4; i++){
        printf("Digite o nome do integrante %d da equipe %d: ", i+1, j);
        gets(a[i]);
        fflush(stdin);
    }
    j += 1;
}

int procuraequipe(char e1[4][120], char e2[4][120], char e3[4][120], char e4[4][120], char e5[4][120], char nome[120]){
    int i, x = 0;
    for (i = 0; i < 4; i++){
        if (strcmp(e1[i], nome) == 0)
            x = 1;
    }
    for (i = 0; i < 4; i++){
        if (strcmp(e2[i], nome) == 0)
            x = 2;
    }
    for (i = 0; i < 4; i++){
        if (strcmp(e3[i], nome) == 0)
            x = 3;
    }
    for (i = 0; i < 4; i++){
        if (strcmp(e4[i], nome) == 0)
            x = 4;
    }
    for (i = 0; i < 4; i++){
        if (strcmp(e5[i], nome) == 0)
            x = 5;
    }
    
    return x;
}
int main()
{
    char equipe1[4][120], equipe2[4][120], equipe3[4][120], equipe4[4][120], equipe5[4][120];
    char nome[120];
    int x;
    preencheequipe(equipe1);
    preencheequipe(equipe2);
    preencheequipe(equipe3);
    preencheequipe(equipe4);
    preencheequipe(equipe5);
    printf("Digite um nome para ser achado sua equipe: ");
    gets(nome);
    fflush(stdin);
    x = procuraequipe(equipe1, equipe2, equipe3, equipe4, equipe5, nome);
    if (x == 0)
        printf("\nEssa pessoa nao esta em nenhuma equipe!");
    else
        printf("\nEssa pessoa esta na equipe %d", x);
    return 0;
}
