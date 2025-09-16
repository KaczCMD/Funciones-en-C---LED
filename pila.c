#include <string.h>
#include <stdio.h>
#define MAX 5

char pila[MAX][30];
int tope = -1;

int isEmpty() {
    return tope == -1;
}

int isFull() {
    return tope == MAX - 1;
}

void push(char Equipos[]){
    if (isFull()) {
        printf("Pila llena\n");
    }else {
        tope++;
        strcpy(pila[tope], Equipos);
        printf("Se apilo el equipo: %s\n", Equipos);
        printf("\n");
    }
}
void pop() {
    if (isEmpty()) {
        printf("Pila vacia\n");
    }else {
        printf("Se desapilo el equipo: %s\n", pila[tope]);
        tope--;
        printf("\n");
    }

}
void mostrar(){
    if (isEmpty()) {
        printf("Pila sin contenido");
    }else {
        printf("Contenido de la pila:\n");
        for (int i = tope; i >= 0; i--) {
            printf("[%s]\n", pila[i]);
        }
    }

}

int main(){
    
    push("Barcelona");
    push("Bayern de Munich");
    push("Racing Club");
    push("River Plate");
    push("Boca Juniors");

    mostrar();
    pop();
    mostrar();

    return 0;
}
