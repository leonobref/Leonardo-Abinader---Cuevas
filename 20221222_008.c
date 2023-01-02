#include <stdio.h>

int main() {
  int n, a, b, h;
  int sn;

  printf("Digite um numero: ");
  scanf("%d" , &n);

  for (h = 1; h <= n; h++) {
    sn = 0;
    for (a = 1; a < h && !sn; a++) {
      b = a;
      while (a*a + b*b < h*h)
	b += 1;
      if (a*a + b*b == h*h){
	printf("Catetos %d e %d\n", a, b);
	sn = 1;
      }
    }
  }

  return 0;
}
