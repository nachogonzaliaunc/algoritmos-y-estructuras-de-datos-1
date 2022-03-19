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

int main() {
  int n_max;

  do {
  printf("introduce el largo del arreglo: ");
  scanf("%d", &n_max);
  } while(n_max <= 0);

  int a[n_max];

  pedirArreglo(a, n_max);
  imprimeArreglo(a, n_max);

  return 0;
}