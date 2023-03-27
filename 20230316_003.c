#include <stdio.h>
#include <stdlib.h>

double **aloca(int f, int c){
    double **m;
    int i, j;

    m = (double **) malloc(f * sizeof (double *));

    for (i=0; i<f; i++)
        *(m+i)= (double *) malloc (c * sizeof (double));

    for (i=0; i<f; i++){
        for (j=0; j<c; j++){
                printf ("Valor em %d,%d: ", i, j);
                scanf ("%lf", (*(m+i)+j));
        }
    }
    return m;
 }

int main(){
    int n, m, i, j;
    double **m1;
    double **m2;
    double **soma;

    printf ("Das matrizes\n");
    printf ("\nNumero de filas: ");
    scanf ("%d", &m);
    printf ("\nNumero de colunas: ");
    scanf ("%d", &n);

    printf ("Matriz 1\n");
    m1 = aloca(m,n);

    printf ("Matriz 2\n");
    m2 = aloca(m,n);

    printf ("\nMatriz Soma\n");
    soma = (double **) malloc(m * sizeof (double *));

    for (i=0; i<m; i++)
        *(soma+i)= (double *) malloc (n * sizeof (double));


    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
                (*(*(soma+i)+j)) = (*(*(m1+i)+j))+(*(*(m2+i)+j));
        }
    }

    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
                printf ("Valor em %d,%d= %.2lf\n", i, j, *(*(soma+i)+j));
         }
    }

    free(m1);
    free(m2);
    free(soma);
    return 0;
}
