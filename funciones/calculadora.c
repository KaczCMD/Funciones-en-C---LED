#include <stdio.h>

float sumar(float a, float b);
float restar(float a, float b);
float multiplicar(float a, float b);
float dividir(float a, float b);

int main() {
    float num1, num2, resultado;
    char operador;

    printf("Calculadora\n");
    printf("Ingrese la operación: ");
    scanf("%f %c %f", &num1, &operador, &num2);

    switch (operador) {
        case '+':
            resultado = sumar(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = restar(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = multiplicar(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = dividir(num1, num2);
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Error: División por cero no permitida.\n");
            }
            break;
        default:
            printf("Operador no válido. Use +, -, * o /.\n");
    }

    return 0;
}

float sumar(float a, float b) {
    return a + b;
}

float restar(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    return a / b;
}
