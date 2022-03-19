#include <stdio.h>
/* main function */
int main() {
  
  int x;
  int y;
  printf("ingrese el primer valor\n");
  scanf("%d", &x);
  printf("ingrese el segundo valor\n");
  scanf("%d", &y);
  if(x >= y) {
    x = 0;
  } else {
    x = 2;
  }
  printf("el valor de x es: %d\n", x);

  return 0;
}
/*
  en este programa;
  si x es mayor o igual a y, entonces le asignamos 0 a x;
  en caso contrario, le asignamos el valor 2 a x
*/