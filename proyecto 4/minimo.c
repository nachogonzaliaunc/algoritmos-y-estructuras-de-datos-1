#include <stdio.h>
#include <assert.h>
/* calculo el minimo */
int min(int x, int y) {
  int m;

  if(x < y) {
    m = x;
  } else {
    m = y;
  }

  return m;
}
/* funcion main */
int main() {
  int x, y, m;

  printf("ingresa el primer valor:\n");
  scanf("%d", &x);
  printf("ingresa el segundo valor:\n");
  scanf("%d", &y);

  m = min(x, y);

  printf("el minimo es %d\n", m);

  return 0;
}