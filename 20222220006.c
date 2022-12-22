#include <stdio.h>

int main(){
    int n = 0, m;
    while (n < 10){
        while (m < 10){
            printf("\n%d x %d = %d\n", n, m, n*m);
            m = m + 1;
        }
    n = n + 1;
    m = 0;
    }
}
