#include <stdio.h>
int x, y;
void scanIntIntervalo(){
  printf("Escreva dois numeros inteiros entre 0 e 1000: ");
  scanf("%d %d", &x, &y);
  if (x <= 0 || x >= 1000 || y <= 0 || y >= 1000){
  for(;;){
      printf("Escreva dois numeros inteiros entre 0 e 1000: ");
      scanf("%d %d", &x, &y);
      if (x <= 0 || x >= 1000 || y <= 0 || y >= 1000)
      continue;
      if (0 < x < 1000 && 0 < y < 1000)
      break;
    }
  }
}

int percentual(int x, int y){
  int maior, menor, percent;
  if(x > y){
    maior = x;
    menor = y;
  }
  if(y > x){
    maior = y;
    menor = x;
  }
  if(x == y)
    maior = menor = x;

  percent = (100 * menor)/ maior;
  return percent;
}

int absdif(int x, int y){
  int diferencaabsoluta;
  diferencaabsoluta = abs(x - y);
  return diferencaabsoluta;
}

int main()
{
  scanIntIntervalo();
  printf("\nO percentual do menor numero em relacao ao maior e: %d", percentual(x,y));
  printf("\nO Valor absoluto da diferenca entre os dois numeros e: %d", absdif(x,y));
}
