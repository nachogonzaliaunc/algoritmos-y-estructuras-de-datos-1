#include <stdio.h>
/* le pido al usuario un numero entero */
int pedirEntero(void) {
  int x;
  printf("ingrese un numero: \n");
  scanf("%d", &x);

  return x;
}
/* imprimo por pantalla un numero */
void imprimirEntero(int x) {
  printf("El minimo es: %d\n", x);
}
/* calculo el minimo entre 3 valores */
int min(int x, int y, int z) {
  int m;

  if(x < y) {
    m = x;
  } else {
    m = y;
  }

  if(m < z) {
  } else {
    m = z;
  }

  return m;
}
/* funcion main */
int main() {
  int x = pedirEntero();
  int y = pedirEntero();
  int z = pedirEntero(); 

  int m = min(x, y, z);

  imprimirEntero(m);

  return 0;
}

/* 
  la ventaja mas clara es que no se repite codigo innecesariamente
*/