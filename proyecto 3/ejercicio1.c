#include <stdio.h>
#include <stdbool.h>
/* main function */
int main() {
  int x;
  int y;
  int z;

  printf("Ingrese el primer valor: \n");
  scanf("%d", &x);
  printf("Ingrese el segundo valor: \n");
  scanf("%d", &y);
  printf("Ingrese el tercer valor: \n");
  scanf("%d", &z);

  int res1 = x + y + 1;
  int res2 = z * z + y * 45 - 15 * x;
  bool res3 = y - 2 == (x * 3 + 1) % 5;
  int res4 = y / 2 * x;
  bool res5 = y < x * z;

  printf("x + y + 1 = %d\n", res1);
  printf("z * z + y * 45 - 15 * x = %d\n", res2);
  printf("y - 2 == (x * 3 + 1) mod 5 = %d\n", res3);
  printf("y / 2 * x = %d\n", res4);
  printf("y < x * z =  %d\n", res5);

  return 0;
}
/*
                            | x->7, y->3, z->5 | x->1, y->10, z->8
  x + y + 1                 |       11         |        12
  z * z + y * 45 - 15 * x   |       55         |       499
  y - 2 == (x * 3 + 1) % 5  |      false       |      false
  y / 2 * x                 |       7          |        5
  y < x * z                 |      true        |      false
*/