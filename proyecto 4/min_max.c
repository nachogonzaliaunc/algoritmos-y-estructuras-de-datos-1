#include <stdio.h>

struct datos_t {
  int maximo;
  int minimo;
};

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
/* calculo el maximo y el minimo */
struct datos_t min_max(int a[], int tam) {
  struct datos_t datos = { a[0], a[0] };

  for(int i = 0; i < tam - 1; i++) {
    if(datos.maximo < a[i]) {
      datos.maximo = a[i];
    } else if(a[i] < datos.minimo) {
      datos.minimo = a[i];
    }
  }

  printf("\nel minimo del arreglo es: %d\n", datos.minimo);
  printf("el maximo del arreglo es: %d\n", datos.maximo);

  return datos;
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
  min_max(a, tam);

  return 0;
}