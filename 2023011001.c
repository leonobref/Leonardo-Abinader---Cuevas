#include <stdio.h>

void contalgarismos(int d, int n){
	int soma = 0, m;
	m = n;				
	while (m != 0){
		if(m % 10 == d){
			soma += 1;		
		}	
	m = m /10;
}
	printf("A quantidade de digitos %d em %d eh igual a: %d", d, n, soma);	
}

int main()  {
	int d, n;
	printf("Digite um digito (0 a 9): ");
	scanf("%d", &d);
	if(0 <= d && d <= 9){
		printf("Digite um numero inteiro: ");
		scanf("%d", &n);
		contalgarismos(d,n);
	}
	else
	printf("\nVoce nao digitou um numero de 0 a 9!!!");
		
return 0;
    }
