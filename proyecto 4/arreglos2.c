#include <stdio.h>

void pedirArreglo(int a[], int n_max) {
  for(int i = 0; i < n_max; i++) {
    printf("ingrese el valor %d del arreglo: ", i + 1);
    scanf("%d", &a[i]);
  }
}

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

int sumatoria(int a[], int tam) {
  int res;

  for(int i = 0; i < tam; i++) {
    res = res + a[i];
  }

  printf("la sumatoria del arreglo es: %d\n", res);

  return res;
}

int main() {
  int tam;

  do {
  printf("introduce el largo del arreglo: ");
  scanf("%d", &tam);
  } while(tam <= 0);

  int a[tam];

  pedirArreglo(a, tam);
  imprimeArreglo(a, tam);
  sumatoria(a, tam);

  return 0;
}