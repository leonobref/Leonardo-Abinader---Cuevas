#include <stdio.h>
#include <string.h>
#include <conio.h>

void opa (char a[20][121], int soma){
    int i;
    for (i = 0; i < soma; i++)
        printf("%s\n", a[i]);
}
void opb (char a[20][121], int soma){
    int i, posicao;
    printf("Digite a posicao de quem voce quer excluir da lista: ");
    scanf("%d", &posicao);
    for (i=posicao - 1; i < soma - 1; i++){
    strcpy(a[i], a[i+1]);
    }
    strcpy(a[soma - 1], "");
    soma -= 1;
}
void opc(char a[20][121], int soma){
    int i,j;
    char b[20][121];
    for (i = 0; i < soma; i++)
        strcpy(b[i],a[i]);
    char aux[121];
        for(i = 0; i < soma; i++){
            for(j = 0; j < soma; j ++)
            if (strcmp(b[i],b[j]) < 0){
                strcpy(aux,b[i]);
                strcpy(b[i],b[j]);
                strcpy(b[j],aux);
            }
        }
        for(i = 0; i < soma; i++){
            printf("%s\n", b[i]);
        }
}
void opd(char a[20][121], int soma){
    int i,j;
    char aux[121];
        for(i = 0; i < soma; i++){
            for(j = 0; j < soma; j ++)
            if (strcmp(a[i],a[j]) < 0){
                strcpy(aux,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],aux);
            }
        }
}
int main()
{
    char a[20][121], k, soma = 0;
    int i;
    for(i = 0; i < 20; i++){
    printf("Deseja inserir mais um nome?(s para sim e outra tecla para nao)\n");
        k = getch();
        if (k == 's'){
        printf("Insira um nome: \n");
        gets(a[i]);
        fflush(stdin);
        soma += 1;
        }
        else{
        printf("Lista finalizada.\n");
        break;
        }
    }
    char opcao;
    for(;;){
    printf("\nEscolha uma opcao:\n");
    printf("(a) Imprimir a lista de nomes;\n");
    printf("(b) Eliminar um nome da lista;\n");
    printf("(c) Iprimir os nomes da lista em ordem alfabetica\n");
    printf("(d) Inserir os nomes da lista em outra lista em ordem alfabetica.\n");
    printf("(s) Sair\n\n");
    opcao = getch();
    fflush(stdin);
    if (opcao == 'a')
        opa(a, soma);
    else if (opcao == 'b')
    opb(a, soma);
    else if (opcao == 'c')
    opc(a, soma);
    else if (opcao == 'd')
    opd(a, soma);
    else if (opcao == 's'){
        printf("Programa encerrado.");
        break;
    }
    }  
    return 0;
}
