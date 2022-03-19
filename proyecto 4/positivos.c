#include <stdio.h>
#include <stdbool.h>
/* pido el arreglo al usuario */
void pedirArreglo(int a[], int n_max) {
  for(int i = 0; i < n_max; i++) {
    printf("ingrese el valor %d del arreglo: ", i + 1);
    scanf("%d", &a[i]);
  }
}
/* imprimo el arreglo en pantalla */
void imprimeArreglo(int a[], int n_max) {
  if(n_max == 1) {
    printf("[ %d ]\n", a[0]);
  } else {
    printf("[ ");
    for(int i = 0; i < n_max - 1; i++) {
      printf("%d, ", a[i]);
    }
    printf("%d ]\n", a[n_max - 1]);
  }
}
/* busco si existe al menos un positivo en el arreglo */
bool existe_positivo(int a[], int tam) {
  int res = false;

  for(int i = 0; i < tam && res == false; i++) {
    if(0 <= a[i]) {
      res = true;
    }
  }

  if(res == false) {
    printf("no existe ningun numero positivo en el arreglo\n");
  } else {
    printf("hay al menos un elemento positivo en el arreglo\n");
  }

  return res;
}
/* corroboro si todos los elementos del arreglo son positivos */
bool todos_positivos(int a[], int tam) {
  int res = true;

  for(int i = 0; i < tam && res == true; i++) {
    if(a[i] < 0) {
      res = false;
    }
  }

  if(res == true) {
    printf("todos los numeros del arreglo son positivos\n");
  } else {
    printf("hay al menos un numero negativo en el arreglo\n");
  }

  return res;
}
/* funcion main */
int main() {
  int tam;

  do {
  printf("introduce el largo del arreglo: ");
  scanf("%d", &tam);
  } while(tam <= 0);

  int a[tam];

  pedirArreglo(a, tam);
  imprimeArreglo(a, tam);

  /* doy a elegir al usuario que funcion ejecutar */
  int c;
  printf("elija que funcion usar\n1: existe_positivo\n2: todos_positivos\n");
  scanf("%d", &c);

  while (c != 1 && c != 2) {
    printf("error\n");
    scanf("%d", &c);
  }

  if(c == 1) {
    existe_positivo(a, tam);
  } else if (c == 2) {
    todos_positivos(a, tam);
  }

  return 0;
}