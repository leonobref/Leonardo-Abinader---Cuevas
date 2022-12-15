//Calculo da área de um triângulo

#include <stdio.h>

int main()
{
    float b, h;
    printf ("\nBase do triangulo: ");
    scanf ("%f", &b);

    printf ("Altura do triangulo: ");
    scanf ("%f", &h);

    printf("\nArea do Triangulo = %.2f\n\n\n", (b * h)/2);

    system("pause");
    return(0);
}
