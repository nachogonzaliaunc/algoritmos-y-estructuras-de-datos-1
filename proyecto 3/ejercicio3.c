#include <stdio.h>
/* main function */
int main() {
  
  int x;
  printf("ingrese el valor x\n");
  scanf("%d", &x);
  x = 5;
  printf("el valor de x es %d\n", x);

  int a;
  int b;
  printf("ingrese el valor a\n");
  scanf("%d", &a);
  printf("ingrese el valor b\n");
  scanf("%d", &b);
  a = a + b;
  printf("ahora a vale %d\n", a);
  b = b + b;
  printf("ahora b vale %d\n", b);

  int y;
  int w;
  printf("ingrese el valor y\n");
  scanf("%d", &y);
  printf("ingrese el valor w\n");
  scanf("%d", &w);
  w = w + w;
  printf("ahora w vale %d\n", w);
  y = y + w;
  printf("ahora y vale   %d\n", y);

  return 0;
}
/*
  programa      |input |output
  1a ejecucion 1|  1   |  5
  1b ejecucion 1| 2, 5 | 7, 10
  1c ejecucion 1| 2, 5 | 10, 12
  1a ejecucion 2|  2   |  5
  1b ejecucion 2| 3, 1 | 4, 2
  1c ejecucion 2| 3, 1 | 2, 5
  1a ejecucion 3|  3   |  5
  1b ejecucion 3| 8, 3 | 11, 6
  1c ejecucion 3| 8, 3 | 6, 14
*/