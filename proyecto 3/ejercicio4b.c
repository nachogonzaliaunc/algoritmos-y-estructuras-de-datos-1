#include <stdio.h>
/* main function */
int main() {
  int x;
  int y;
  int z;
  int m;
  printf("ingrese el primer valor\n");
  scanf("%d", &x);
  printf("ingrese el segundo valor\n");
  scanf("%d", &y);
  printf("ingrese el tercer valor\n");
  scanf("%d", &z);
  printf("ingrese el cuarto valor\n");
  scanf("%d", &m);

  if(x < y) {
    m = x;
  } else {
    m = y;
  }

  printf("\nen este momento, x vale %d\n", x);
  printf("en este momento, y vale %d\n", y);
  printf("en este momento, z vale %d\n", z);
  printf("en este momento, m vale %d\n", m);

  if(m < z) {
    
  } else {
    m = z;
  }

  printf("\nx vale %d\n", x);
  printf("y vale %d\n", y);
  printf("z vale %d\n", z);
  printf("m vale %d\n\n", m);

  return 0;
}

/*
  el programa busca el menor de 3 valores, en este caso x,y,z
  la variable m aloja el menor de x,y,z; por lo que es innecesario inicializarla
*/