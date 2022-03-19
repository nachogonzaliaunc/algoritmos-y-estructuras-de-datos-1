#include <stdio.h>
/* imprimo hola */
void imprimeHola(void) {
  printf("hola\n");
}
/* imprimo chau */
void imprimeChau(void) {
  printf("chau\n");
}
/* funcion main */
int main() {
  for(int i = 0; i < 2; i++) {
    imprimeHola();
  }
  for(int j = 0; j < 2; j++) {
    imprimeChau();
  }
  
  return 0;
}