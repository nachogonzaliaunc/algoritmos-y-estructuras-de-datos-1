#include <stdio.h>

int main() {
  int x, y, z, a, b;

  printf("ingresar el valor de x: ");
  scanf("%d", &x);
  printf("ingresar el valor de y: ");
  scanf("%d", &y);
  printf("ingresar el valor de z: ");
  scanf("%d", &z);

  a = x;
  b = y;
  x = y;
  y = y + a + z;
  z = a + b;

  printf("\nahora x vale: %d\n", x);
  printf("ahora y vale: %d\n", y);
  printf("ahora z vale: %d\n", z);

  return 0;
}