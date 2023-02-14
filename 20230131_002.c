#include <stdio.h>
#include <string.h>

void maiseconomico(char a[5][100],float b[5]){
    int i;
    float x;
    x = b[0];
    for (i = 1; i < 5; i++){
        if (b[i] > x){
        x = b[i];
        }
    }
    for (i = 0; i < 5; i++){
        if (b[i] == x)
        printf("O carro mais economico eh o %s\n", a[i]);
    }
}
void paramil(char a[5][100], float b[5]){
    float c[5];
    int i;
    for (i = 0; i < 5; i++)
        c[i] = 1000 / b[i];
    for (i = 0; i < 5; i++)
        printf("O %s gasta %.2f litros de combustivel para percorrer 1000 km.\n",a[i],c[i]);
}

int main(){
    char a[5][100];
    int i, indicemaior;
    for (i = 0; i < 5; i++){
        printf("Digite o nome de um carro: ");
        gets(a[i]);
        fflush(stdin);
    }
    float b[5];
    for (i = 0; i < 5; i++){
        printf("Digite o consumo do %s (km/l): ",a[i]);
        scanf("%f", &b[i]);
    }
    printf("\n");
    maiseconomico(a,b);
    printf("\n");
    paramil(a,b);
    return 0;
}
