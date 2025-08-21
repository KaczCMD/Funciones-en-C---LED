#include <stdio.h>


int sumar(int a, int b) {
  return a + b;
}

int main() {
  int num1, num2, resultado;

  printf("Ingrese el primer entero: ");
  scanf("%d", &num1);
  printf("Ingrese el segundo entero: ");
  scanf("%d", &num2);


  resultado = sumar(num1, num2);

  printf("La suma es: %d\n", resultado);

  return 0;
}