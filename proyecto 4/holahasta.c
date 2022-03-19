#include <stdio.h>
#include <assert.h>
/* le pido un numero al usuario */
int pedirNumero() {
  int n;
  printf("ingresa un numero:\n");
  scanf("%d", &n);

  assert(0 < n);
  return n;
}
/* imprimo hola n veces */
void holaHasta(int n) {
  int i;
  while(i < n) {
    printf("hola\n");
    i++;
  }
}
/* funcion main */
int main() {
  holaHasta(pedirNumero());

  return 0;
}