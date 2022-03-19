#include <stdio.h>

int main() {
  int x, y, z;

  printf("ingresar el valor de x: ");
  scanf("%d", &x);
  printf("ingresar el valor de y: ");
  scanf("%d", &y);

  z = x + 1;
  y = x + y;
  x = z;

  printf("x + 1 = %d\n", x);
  printf("x + y = %d\n", y);

  return 0;
}