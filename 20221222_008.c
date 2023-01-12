#include <stdio.h>
int main() {
  int n, a, b, h;
  printf("Digite um numero: ");
  scanf("%d" , &n);

  for (h = 1; h < n; h++) {
    for (a = 1; a < h; a++) {
      b = a;
      while (a*a + b*b < h*h)
	    b += 1;
      if (a*a + b*b == h*h){
	printf("Inteiro: %d\n", h);
      }
    }
  }
  return 0;
}
