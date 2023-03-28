#include <stdio.h>
#include <stdlib.h>

void intersecção(int *a, int *b, int *c){
    int czero = 0;
    int *aux;
    aux = c;
    for (int i = 1; i <= *a; i++){
        for(int j = 1; j <= *b; j++)
            if(*(a+i) == *(b+j)){
                *(aux+1) = *(a+i);
                czero += 1;
                aux++;
            }
    }
    *c = czero;
}

int main()
{   
    int n,contagemconjuntos = 1;
    for(;;){
    printf("Digite o numero de conjuntos: ");
    scanf("%d", &n);
    if(n > 1)
        break;
    }
    int a[100];
    printf("Digite o numero de elementos do conjunto %d: ", contagemconjuntos);
    scanf("%d", &a[0]);
    for(int i = 1 ; i<= a[0]; i++){
    printf("Digite o elemento %d do conjunto %d: ", i, contagemconjuntos);
    scanf("%d", &a[i]);
    }
    contagemconjuntos++;

    int b[100];
        printf("Digite o numero de elementos do conjunto %d: ", contagemconjuntos);
        scanf("%d", &b[0]);
        for(int i = 1 ; i<= b[0]; i++){
        printf("Digite o elemento %d do conjunto %d: ", i, contagemconjuntos);
        scanf("%d", &b[i]);
        }
        contagemconjuntos++;

        int c[100];
        intersecção(a,b,c);

    for (int i = 2; i < n; i++){

        int d[100];
        printf("Digite o numero de elementos do conjunto %d: ", contagemconjuntos);
        scanf("%d", &d[0]);
        for(int j = 1 ; j<= d[0]; j++){
        printf("Digite o elemento %d do conjunto %d: ", j, contagemconjuntos);
        scanf("%d", &d[j]);
        }
        contagemconjuntos++;

        intersecção(c,d,c);
    }
    for(int i=1; i<= c[0]; i++)
        printf("%d, ", c[i]);
    return 0;
}
