#include <stdio.h>

int main() {
  /*
    este bloque de codigo toma un valor,
    preferentemente mayor a 0 para que pueda finalizar,
    y va restando de a 1 hasta llegar a 0
  */
  int i;
  printf("ingresa un valor\n");
  scanf("%d", &i);
  while(i != 0) {
    i--;
    printf("%i\n", i);
  }


  /*
    este bloque de codigo almacena un valor en una variable,
    si es distinto de 0 entra al bucle while,
    asigna 0 a la variable y termina,
    si es 0 no hace nada
  */
  int j;
  printf("ingresa un valor\n");
  scanf("%d", &j);
  while(j != 0) {
    j = 0;
    printf("%i\n", j);
  }

  return 0;
}