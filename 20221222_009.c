#include <stdio.h>

int main() {
int m, n, x = 0, y = 0, xm, ym, z ,zm;
xm = 0;
ym = 0;
zm = 0;
printf("Digite m e n: ");
scanf ("%d %d", &m, &n);

while(x <= m){
  while(y <= n){
    z = (x*y) - (x*x) + y;
    if (z > zm){
      xm = x;
      ym = y;
      zm = z;
    }
    y += 1;
  }
  y = 0;
  x += 1;
}

printf("\nX maximo = %d", xm);
printf("\nY maximo = %d", ym);


return 0;
}
