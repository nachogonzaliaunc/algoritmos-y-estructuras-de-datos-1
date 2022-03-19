#include <stdio.h>
/* pido al usuario el arreglo */
void pedirArreglo(int a[], int n_max) {
  for(int i = 0; i < n_max; i++) {
    printf("ingrese el valor %d del arreglo: ", i + 1);
    scanf("%d", &a[i]);
  }
}
/* imprimo el arreglo original */
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
/* hago el intercambio de posiciones */
void intercambiar(int a[], int tam, int i, int j) {
  int k = a[i];
  a[i] = a[j];
  a[j] = k;

  printf("el nuevo arreglo es: \n");
  imprimeArreglo(a, tam);
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

  int i, j;

  do {
    printf("introduce una posicion del arreglo a intercambiar: ");
    scanf("%d", &i);
  } while (i < 0 || tam <= i);

  do {
    printf("introduce la otra posicion del arreglo a intercambiar: ");
    scanf("%d", &j);
  } while (j < 0 || tam <= j || i == j);

  intercambiar(a, tam, i, j);

  return 0;
}