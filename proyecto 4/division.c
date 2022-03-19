#include <stdio.h>

struct div_t {
  int cociente;
  int resto;
};

struct div_t division (int x, int y) {
  struct div_t div = {0, 0};
  
  int i = 0;
  
  while(x >= y) {
    x = x - y;
    i++;
  }

  div.cociente = i;
  div.resto = x;

  printf("\nel cociente es: %d\n", div.cociente);
  printf("el resto es: %d\n", div.resto);

  return div;
}


int main() {
  int x, y;

  printf("ingrese el valor del dividendo: ");
  scanf("%d", &x);
  printf("ingrese el valor del divisor: ");
  scanf("%d", &y);

  division(x, y);

  return 0;
}