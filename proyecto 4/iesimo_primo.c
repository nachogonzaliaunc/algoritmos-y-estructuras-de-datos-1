#include <stdio.h>
#include <stdbool.h>
/* calculo si un numero es primo */
bool es_primo(int n) {
  bool res = true;

  if(n == 0 || n == 1) {
    res = false;
  } else {
    for(int i = 2; i < n; i++) {
      if(n % i == 0) {
        res = false;
      }
    }
  }

  return res;
}
/* bisco el n-esimo primo */
int iesimo_primo(int n) {
  int res = 0;
  int x = 0;

  for(int counter = 0; x < n; counter++) {
    if(es_primo(counter)) {
      res = counter;
      x++;
    }
  }

  return res;
}
/* funcion main */
int main() {
  int n, i;
  
  do {
    printf("ingresa el valor de n: ");
    scanf("%d", &n);
  } while(n < 0);

  i = iesimo_primo(n);
  
  printf("el %d-esimo primo es: %d\n", n, i);

  return 0;
}