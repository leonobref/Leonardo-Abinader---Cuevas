#include <stdio.h>
#include <math.h>

float pedenum(){
    float num;
    printf("Digite um numero real entre 0 e 1: ");
    scanf("%f", &num);
    if(num >= 0 && num <= 1)
        return num;
    else{
        while(num < 0 || num > 1){
            printf("Digite um numero real entre 0 e 1, por favor: ");
            scanf("%f", &num);
}
}
return num;
}

float arctan(float x){
    float atan, rad;
    int cont = 1, cont2 = 3;
    atan = x;
    for(;;){
        atan += (pow(x,cont)/cont);
        if((pow(x,cont)/cont) < 0.0001)
        break;
        cont += 4;
        atan -= (pow(x,cont2)/cont2);
        if((pow(x,cont2)/cont2) < 0.0001)
        break;
        cont2 += 4;
    }
    rad = (atan * 3.14159)/180;
    return rad;
}

void imprime(float a, float b){
    printf("O arcotangente de %.2f eh igual a %.2f rad", a, b);
}

int main(){
    float num, atan;
    num = pedenum();
    atan = arctan(num);
    imprime(num, atan);
    return 0;
}
