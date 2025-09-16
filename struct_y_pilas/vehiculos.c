#include <stdio.h>
#include <string.h>

typedef struct{
    char nombre[50];
    char Pais [50];
    int age_fundation;
} Marca;

typedef struct{
    char nombre[50];
    Marca mar;
    int year;
    float price;

} Modelo;

typedef struct{
    Modelo mod;
    char color[20];
    char tipo[50];
    int year;
    int id;
} Vehiculo;

int main(){
    Marca marca1 = {"Toyota", "Japon", 1937};
    Marca marca2 = {"Ford", "Estados Unidos", 1903};
    Marca marca3 = {"Volkswagen", "Alemania", 1937};

    Modelo modelo1 = {"Hilux", marca1, 2023, 60.300};
    Modelo modelo2 = {"Focus", marca2, 2018, 80.000};
    Modelo modelo3 = {"Golf", marca3, 2025, 100.000};

    Vehiculo vehiculo1 = {modelo1, "Negro", "Camioneta", 2023, 1};
    Vehiculo vehiculo2 = {modelo2, "Rojo", "Auto", 2018, 2};
    Vehiculo vehiculo3 = {modelo3, "Azul", "Auto", 2025, 3};

    printf("Vehiculo 1: %s (%s)\n", vehiculo1.mod.nombre, vehiculo1.mod.mar.nombre);
    printf("Vehiculo 2: %s (%s)\n", vehiculo2.mod.nombre, vehiculo2.mod.mar.nombre );
    printf("Vehiculo 3: %s (%s)\n", vehiculo3.mod.nombre, vehiculo3.mod.mar.nombre);

    return 0;
}
