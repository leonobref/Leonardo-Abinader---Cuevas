#include <stdio.h>

int main(){
    float s = 0, c = 1, b = 1;
    while(c <= 99){
        s += c/b;
        c += 2;
        b += 1;
    }
    printf("A soma e igual a: %.2f", s);
}
