#include<stdio.h>
int main()
{  
float massainicial, massa, massafinal;
float tempo, tempominutos, tempohoras, pdcs = 0;
printf("Digite a massa inicial: ");
scanf("%f", &massainicial);
massa = massainicial;
do{
    massa = massa / 2;
    pdcs += 1;
}while(massa > 0.5);
massafinal = massa;
tempo = pdcs * 50;
tempominutos = tempo / 60;
tempohoras = tempominutos/60;
printf("Massa Inicial: %.2f", massainicial);
printf("\nMassa final: %.2f", massafinal);
printf("\nO tempo do processo em segundos: %.2f", tempo);
printf("\nO tempo do processo em minutos: %.2f", tempominutos);
printf("\nO tempo do processo em horas: %.2f", tempohoras);
return 0;
}
