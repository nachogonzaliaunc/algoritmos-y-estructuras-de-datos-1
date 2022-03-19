#include <stdio.h>

int pedirEntero(void) {
  int x;
  printf("ingrese un numero: \n");
  scanf("%d", &x);

  return x;
}

void imprimirEntero(int x) {
  printf("El numero es: %d\n", x);
}

int main() {
  imprimirEntero(pedirEntero());

  return 0;
}