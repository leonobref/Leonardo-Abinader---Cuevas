#include <stdio.h>

int main(){

    float m;

    printf("Digite uma distancia em metros: ");
    scanf("%f", &m);

    printf("\nSua distancia em centimetros = %.2f cm\n",m*100);

    system("pause");
    return 0;

}
