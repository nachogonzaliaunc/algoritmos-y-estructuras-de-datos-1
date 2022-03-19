#include <stdio.h>

int main() {
  int x, y, z;

  printf("ingresa el valor de x: ");
  scanf("%d", &x);
  printf("ingresa el valor de y: ");
  scanf("%d", &y);

  printf("\nhago el intercambio\n\n");
  z = x;
  x = y;
  y = z;

  printf("ahora el valor de x es %d\n", x);
  printf("ahora el valor de y es %d\n", y);

  return 0;
}