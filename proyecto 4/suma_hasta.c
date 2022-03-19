#include <stdio.h>
#include <assert.h>
/* le pido un numero al usuario */
int pedirNumero() {
  int n;
  printf("ingresa el valor de n: ");
  scanf("%d", &n);

  assert(0 < n);
  return n;
}
/* calculo la suma de todos los naturales hasta n con la formula de gauss */
int suma_hasta(int n) {
  return (n * (n + 1) / 2);
}
/* funcion main */
int main() {
  int n = suma_hasta(pedirNumero());

  printf("la suma de todos los naturales hasta n es: %d\n", n);

  return 0;
}