#include <stdio.h>

int encontrarMayor(int a, int b, int c){
    int mayor = a;
    if (b > mayor) {
        mayor = b;
    }
    if (c > mayor) {
        mayor = c;
    }
    return mayor;
}

int main() {
    int num1, num2, num3;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &num3);

    int mayor = encontrarMayor(num1, num2, num3);
    printf("El numero mayor es: %d\n", mayor);

    return 0;

}
