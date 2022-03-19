#include <stdio.h>
#include <stdbool.h>

int main() {
  int x;

  printf("ingrese un valor: \n");
  scanf("%d", &x);

  int i = 2;
  bool res = 1;

  while(i < x && res) {
    res = res && ((x % i) != 0);
    i++;
    printf("res= %d\n", res);
    printf("x= %d\n", x);
    printf("i= %d\n\n", i);
  }

  return 0;
}
/*
  el programa indica si un numero x es primo,
  donde i es el numero que va iterando de un en uno buscando algun posible divisor de x,
  si no encuentra algun divisor en el rago 2..x-1, entonces x es primo.
  supongamos que x = 5;
  los estados del programa son los siguientes:
  x -> 5, i -> 2, res -> true
  x -> 5, i -> 3, res -> true
  x -> 5, i -> 4, res -> true
*/