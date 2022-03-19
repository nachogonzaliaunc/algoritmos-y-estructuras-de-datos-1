#include <stdio.h>

/* pido al usuario el arreglo */
void pedir_arreglo(int a[], int tam) {
  for(int i = 0; i < tam; i++) {
    printf("ingrese el valor %d del arreglo: ", i+1);
    scanf("%d", &a[i]);
  }
}

/* imprimo el arreglo en pantalla */
void imprimir_arreglo(int a[], int tam) {
  printf("\nel arreglo es:\n[ ");
  for(int i = 0; i < tam - 1; i++) {
    printf("%d, ", a[i]);
  }
  printf("%d ]\n", a[tam - 1]);
}

/* ordeno el arreglo de menor a mayor */
void sort(int a[], int tam) {
  int pivot, j;

  for(int i = 1; i < tam; i++) {
    pivot = a[i];
    for(j = i - 1; 0 <= j && pivot < a[j]; j--) {
      a[j + 1] = a[j];
    }
    a[j + 1] = pivot;
  }

  printf("el arreglo ordenado es: \n[ ");
  for(int i = 0; i < tam - 1; i++) {
    printf("%d, ", a[i]);
  }
  printf("%d ]\n", a[tam - 1]);
}

/* funcion main */
int main() {
  int tam;

  do {
    printf("ingresa el largo del arreglo: ");
    scanf("%d", &tam);
  } while(tam < 0);

  int a[tam];

  pedir_arreglo(a, tam);
  imprimir_arreglo(a, tam);
  sort(a, tam);

  return 0;
}