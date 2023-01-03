#include <stdio.h>

int main() {
  int n, a, b, h;
  int sn;

  printf("Digite um numero: ");
  scanf("%d" , &n);

  for (h = 1; h < n; h++) {
    sn = 0;
    for (a = 1; a < h && !sn; a++) {
      b = a;
      while (a*a + b*b < h*h)
	b += 1;
      if (a*a + b*b == h*h){
	printf("Inteiro: %d\n", h);
	sn = 1;
      }
    }
  }

  return 0;
}
