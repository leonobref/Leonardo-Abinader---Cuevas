#include <stdio.h>

int fib(int n) {
int fibonacci, i = 3, F1 = 1, F2 = 1;
    if (n == 1)
    fibonacci = 1;
    if (n == 2)
    fibonacci = 1;
    while(i <= n){
        fibonacci = F1 + F2;
        F1 = F2;
        F2 = fibonacci;
        i++;
    }
return fibonacci;
}


int main()
{
    int n;
    printf("\nDigite uma posicao na sequencia de fibonacci: ");
    scanf("%d", &n);
    printf("A posicao %d na sequencia de fibonacci eh %d",n, fib(n));
}
