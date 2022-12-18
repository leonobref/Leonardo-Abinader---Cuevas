#include <stdio.h>

int main(){
    printf("Esse programa calcula a area de um circulo\n");
    float r, pi;
    printf("Digite raio do circulo: ");
    scanf("%f", &r);
    pi = 3.14;
    printf("\nArea do circulo = %.1f\n", pi*r*r);

    system("pause");
    return 0;
}
