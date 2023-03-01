#include <stdio.h>
#include <string.h>
#include <conio.h>

void opa(char na[2][20][100]){
    int i, j;
    for (i = 0; i < 2; i ++){
        printf("\nEquipe %d: \n", i+1);
        for(j = 0; j < 20; j++){
            if (strlen(na[i][j]) > 0)
                puts(na[i][j]);
        }
    }

}
void opb(char na[2][20][100], int sa[2][20]){
    int i, j, soma1 = 0, soma2 = 0;
    i = 0;
    for(j = 0; j < 20; j++){
        if (strlen(na[i][j]) > 0){
            if (sa[i][j] == 1)
            soma1 += 1;
        }
    }
    i = 1;
    for(j = 0; j < 20; j++){
        if (strlen(na[i][j]) > 0){
            if (sa[i][j] == 1)
            soma2 += 1;
        }
    }
    if(soma1 > soma2)
    printf("A equipe com mais mulheres eh a Equipe 1.\n");
    else if(soma2 > soma1)
    printf("A equipe com mais mulheres eh a Equipe 2.\n");
    else if(soma2 == soma1)
    printf("As duas equipes tem a mesma quantidade de mulheres. \n");
}

int opc(char nma [2][20][100], int sa [2][20], float nta[2][20], char ms[20][100]){
    int i,j;
    int contagemms = 0;
    for (i = 0; i < 2; i++){
        for (j = 0; j < 20; j++){
            if (strlen(nma[i][j]) > 0 && sa[i][j] == 1 && nta[i][j] >= 8){
                strcpy(ms[contagemms], nma[i][j]);
                contagemms += 1;
            }  
        }
    }
    return contagemms;
}

void opd(char ms[20][100], int contagemms){
    int i;
    for (i = 0; i < contagemms; i++){
            puts(ms[i]);
    }
}
void ope(char nma[2][20][100], int sa[2][20], float nta[2][20], int i){
    int j;
    for (j = 0; j < 20; j++){
        if (strlen(nma[i][j]) > 0 && sa[i][j] == 1){
            nta[i][j] += 1;
            if (nta[i][j] > 10)
                nta[i][j] = 10;
        }
    }
}

void opg(char nma[2][20][100], int sa[2][20], float nta[2][20]){
    int i = 0, j, quantidade1 = 0, quantidade2 = 0, e = 0, sexo = 3;
    float nota = 11;
    for(j = 0; j < 20; j++){
        if (strlen(nma[i][j]) > 0)
            quantidade1 += 1;
    }
    i = 1;
    for(j = 0; j < 20; j++){
        if (strlen(nma[i][j]) > 0)
            quantidade2 += 1;
    }
    do{
        printf("Digite o numero da equipe (1 ou 2) que voce quer adicionar um aluno: ");
        scanf("%d", &e);
    }while (e < 1 || e > 2);
    e = e - 1;
    if (e == 0){
    fflush(stdin);
    printf("Digite o nome do aluno: ");
    gets(nma[e][quantidade1]);
    fflush(stdin);
    while(sexo < 0 || sexo > 1){
        printf("Digite o numero do sexo (0 para homem ou 1 para mulher): ");
        scanf("%d", &sexo);
        sa[e][quantidade1] = sexo;
    }
    while(nota < 0 || nota > 10){
        printf("Digite a nota do aluno (0 a 10): ");
        scanf("%f", &nota);
        nta[e][quantidade1] = nota;
    }
    }
    else if(e == 1){
    fflush(stdin);
    printf("Digite o nome do aluno: ");
    gets(nma[e][quantidade2]);
    fflush(stdin);
    while(sexo < 0 && sexo > 1){
    printf("Digite o numero do sexo (0 para homem ou 1 para mulher): ");
    scanf("%d", &sexo);
    sa[e][quantidade2] = sexo;
    }
    while(nota < 0 && nota > 10){
    printf("Digite a nota do aluno (0 a 10): ");
    scanf("%f", &nota);
    nta[e][quantidade2] = nota;
    }
    }
}

int main(){
    char opcao;
    int contagemms;
    char nma [2][20][100] = {{"Carlos Eduardo", "Renato Augusto", "Gabriela Sa", "Renata Vieira", "Jose Correia", "Vasco Vasquez"}, {"Maria Fernanda","Rodrigo Faro", "Ana Paula", "Giovana Braga", "Ingrid Souza", "Flavio Dagoberto"}};
    int sa [2][20]= {{0,0,1,1,0,0}, {1,0,1,1,1,0}};
    float nta [2][20]= {{5.5,9.8,8,7.2,3.1,10},{8,7,1.3,9.75,6.4,7.5,8.2}};
    char ms [20][100];
    for(;;){
    printf("\nEscolha uma opcao:\n");
    printf("(a) Imprimir as equipes;\n");
    printf("(b) Dizer qual eh a equipe com mais mulheres;\n");
    printf("(c) Separar as mulheres que tem nota maior ou igual a 8;\n");
    printf("(d) Imprimir o nome das mulheres que podem participar do projeto.\n");
    printf("(e) Acrescentar um ponto as alunas da equipe 1.\n");
    printf("(f) Acrescentar um ponto as alunas da equipe 2.\n");
    printf("(g) Adicionar um aluno a uma das equipes.\n");
    printf("(s) Sair\n\n");
    opcao = getch();
    fflush(stdin);
    if (opcao == 'a')
        opa(nma);
    else if (opcao == 'b')
    opb(nma, sa);
    else if (opcao == 'c')
    contagemms = opc(nma, sa, nta, ms);
    else if (opcao == 'd')
    opd(ms, contagemms);
    else if (opcao == 'e')
    ope(nma, sa, nta, 0);
    else if (opcao == 'f')
    ope(nma, sa, nta, 1);
    else if (opcao == 'g')
    opg(nma, sa, nta);
    else if (opcao == 's'){
        printf("Programa encerrado.");
        break;
    }
    } 
    return 0;
}
