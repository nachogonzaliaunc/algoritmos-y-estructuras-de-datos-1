#include <stdio.h>

struct comp_t {
  int menores;
  int iguales;
  int mayores;
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

struct comp_t cuantos(int a[], int tam, int elem) {
  struct comp_t c = { 0, 0, 0 };
  
  for(int i = 0; i < tam; i++) {
    if(a[i] < elem) {
      c.menores++;
    } else if(a[i] == elem) {
      c.iguales++;
    } else {
      c.mayores++;
    }
  }

  printf("\nhay %d elementos mayores a %d en el arreglo\n", c.mayores, elem);
  printf("hay %d elementos iguales a %d en el arreglo\n", c.iguales, elem);
  printf("hay %d elementos menores a %d en el arreglo\n", c.menores, elem);

  return c;
};


int main() {
  int tam;

  do {
  printf("introduce el largo del arreglo: ");
  scanf("%d", &tam);
  } while(tam <= 0);

  int a[tam];

  pedirArreglo(a, tam);
  imprimeArreglo(a, tam);

  int elem;

  printf("introduce un valor para comparar los elementos del arreglo: ");
  scanf("%d", &elem);

  cuantos(a, tam, elem);

  return 0;
}