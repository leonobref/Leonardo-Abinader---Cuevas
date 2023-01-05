#include <stdio.h>

int pes, sem;

void pesosemana (){
	printf("Digite o peso do feto (gramas): ");
  scanf("%d", &pes);
  printf("Digite a duracao da gestacao (Semanas): ");
  scanf("%d", &sem);
}

void analise (int P, int S){
  if(P < 100 || S < 28)
    printf("Parto nao devera ser realizado, reavaliar clinicamente");
  else{
    if(P>2500){
      if(S > 28)
        printf("\nParto Normal");
      if(S <= 28)
        printf("\nParto Cesariana");
    }
    else if(1500< P < 2000){
      if(S > 36)
        printf("\nParto Normal");
      else
        printf("\nParto Cesariana");
    }
    else if(2000 <= P <= 2500)
    printf("\nParto Cesariana");
    else if(100 <= P <= 1500)
    printf("\nParto Cesariana");
  }
}

int main()
{
  pesosemana();
  analise(pes, sem);
  return 0;
}
