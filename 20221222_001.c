#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float y,x,e,z;
    e = 0.1;
    printf("Digite um numero: ");
    scanf("%f", &y);
    x = y/2;

    for(;;){
        z = x - (((x*x)-y)/(2*x));

        if (abs(z-x) < e) {
            printf("\nA raiz quadrada aproximada de %.1f = %.1f", y , z);
            printf("\nA raiz quadrada de %.1f utilizando a funcao sqrt = %.1f", y,sqrt(y));
            break;
        }
        else
        x = z;
    }
    return 0;
}
