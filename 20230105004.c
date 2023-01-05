#include <stdio.h>

int fat(int n) {
int fatorial;
for(fatorial = 1; n > 1; n = n - 1)
fatorial = fatorial * n;
return fatorial;
}

int main()
{
    int n;
    printf("\nDigite um numero que voce quer encontrar seu fatorial: ");
    scanf("%d", &n);
    printf("Fatorial de %d = %d",n, fat(n));
}
