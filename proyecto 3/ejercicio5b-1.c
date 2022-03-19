#include <stdio.h>

int main() {
  int x;
  int y;

  printf("ingresa el valor de x: \n");
  scanf("%d", &x);
  printf("ingresa el valor de y: \n");
  scanf("%d", &y);

  int i = 0;
  while(x >= y) {
    x = x - y;
    i++;
  }

  printf("\nx = %d\n", x);
  printf("y = %d\n", y);
  printf("i = %d\n", i);
  
  return 0;
}
/*
  el codigo hace una division, donde en principio
  x es el dividendo, y el divisor;
  y al final
  i es el resultado, y sigue siendo el divisor, x es el resto

  supongamos que queremos dividir 13 entre 3, estos serian los estados luego de cada iteracion en el bucle while:
  x -> 13, y -> 3, i -> 0
  x -> 10, y -> 3, i -> 1
  x -> 7, y -> 3, i -> 2
  x -> 4, y -> 3, i -> 3
  x -> 1, y -> 3, i -> 4
*/