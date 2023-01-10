#include <stdio.h>

int contalgarismos(int d, int n){
	int soma = 0, m;
	m = n;				
	while (m != 0){
		if(m % 10 == d){
			soma += 1;		
		}	
	m = m /10;
}
	return soma;	
}

void per(int a, int b){
	int c, i = 0;
	while(i <= 9){
	if(contalgarismos(i, a) == contalgarismos(i, b)){
	c = 1;
	i += 1;
}
	else if(contalgarismos(i, a) != contalgarismos(i, b)){
	c = 0;
	break;
				}
}
	if(c == 1)
	printf("\n%d eh permutacao de %d", a, b);
	else if(c == 0)
	printf("\n%d nao eh permutacao de %d", a, b);
}

int main()  {
	int a, b;
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &a);
	if(0 < a){
		printf("Digite um numero inteiro positivo: ");
		scanf("%d", &b);
		if(0 < b){
		per (a,b);
}
		else
		printf("\nVoce nao digitou um numero positivo!");
}
	else
	printf("\nVoce nao digitou um numero positivo!");	
return 0;
    }
