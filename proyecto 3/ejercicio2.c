#include <stdio.h>
#include <stdbool.h>
/* main function */
int main() {
  int x;
  int y;
  int z;
  int b;
  int w;

  printf("Ingrese el primer valor: \n");
  scanf("%d", &x);
  printf("Ingrese el segundo valor: \n");
  scanf("%d", &y);
  printf("Ingrese el tercer valor: \n");
  scanf("%d", &z);
  printf("Ingrese el cuarto valor: \n");
  scanf("%d", &b);
  printf("Ingrese el quinto valor: \n");
  scanf("%d", &w);

  bool res1 = x % 4 == 0;
  bool res2 = (x + y == 0) && (y - x == (-1) * z);
  bool res3 = !b && w;

  printf("%d\n", res1);
  printf("%d\n", res2);
  printf("%d\n", res3);

  return 0;
}
/*
  x -> 4
  y -> -4
  z -> 8
  b -> true
  w -> true
*/