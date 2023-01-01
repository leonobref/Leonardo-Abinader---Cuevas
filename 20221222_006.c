#include<stdio.h>
int main()
{  
int s=0,d,num,i=1;
printf("Digite um numero: ");
scanf("%d",&num);
d= 2 * num ;
while (i<=num)
{  
 if(num % i == 0)
   s=s+i;
   i += 1;
}
 if(s == d)
   printf("\n%d e um numero perfeito ",num);
 else
  printf ("\n%d nao e um numero perfeito",num);
 return 0;
}
