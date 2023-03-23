#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprime(float *primeiro, float *ultimo){
    while(primeiro <= ultimo){
        printf("%.2f, ", *primeiro);
        primeiro++;
    }
    printf("\n");
}
int main(){
    float a[20], b[25], c[30];

    srand((unsigned int)time(NULL));

    float z = 100.0;
    for (int i=0;i<20;i++)
        a[i]= (((float)rand()/(float)(RAND_MAX)) * z);
    for (int i=0;i<25;i++)
        b[i]= (((float)rand()/(float)(RAND_MAX)) * z);
    for (int i=0;i<30;i++)
        c[i]= (((float)rand()/(float)(RAND_MAX)) * z);

    printf("O primeiro vetor eh igual a: \n");    
    for (int i=0;i<20;i++)
        printf("%.2f, ", a[i]);
    printf("\nO segundo vetor eh igual a: \n");     
    for (int i=0;i<25;i++)
        printf("%.2f, ", b[i]);
    printf("\nO terceiro vetor eh igual a: \n");   
    for (int i=0;i<30;i++)
        printf("%.2f, ", c[i]);
    
    printf("\n\nImprimindo duas partes do Primeiro Vetor: \n");
    imprime(&a[0], &a[5]);
    imprime(&a[9], &a[14]);
    printf("\nImprimindo duas partes do Segundo Vetor: \n");
    imprime(&b[19], &b[23]);
    imprime(&b[4], &b[11]);
    printf("\nImprimindo duas partes do Terceiro Vetor: \n");
    imprime(&c[13], &c[22]);
    imprime(&c[25], &c[29]);
}
