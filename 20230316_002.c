#include <stdio.h>
#include <stdlib.h>
int main(){
    int **a;
    int i,j;

    a = (int **) malloc(2 * sizeof(int *));

    for (i=0; i<2; i++)
        *(a+i)= (int *) malloc (3 * sizeof (int));

    for (i=0; i<2; i++)
        for (j=0; j<3; j++){
            printf("Valor para %d,%d: ",i,j);
            scanf ("%d",(*(a+i)+j));
    }

    for (i=0; i<2; i++)
        for (j=0; j<3; j++){
            printf("\n(Indexes) Valor em %d,%d : %d",i, j, a[i][j]);
            printf("\n(Ponteiros) Valor em %d,%d : %d",i, j, *(*(a+i)+j));
    }

    for (i=0; i<2; i++)
        free(*(a+i));

    free(a);
    return 0;
}
