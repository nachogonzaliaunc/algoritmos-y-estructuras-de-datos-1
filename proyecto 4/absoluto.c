#include <stdio.h>
/* le pido un numero al usuario */
int pedirNumero() {
  int n;
  printf("ingresa un numero:\n");
  scanf("%d", &n);
  return n;
}
/* calculo el valor absoluto */
int abs(int x) {
  int n;

  if(x < 0) {
    n = x * -1;
  }

  return n;
}
/* funcion main */
int main() {
  int n;

  n = abs(pedirNumero());

  printf("el valor absoluto es: %d\n", n);

  return 0;
}