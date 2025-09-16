#include <stdio.h>
#include <string.h>

#define MAX 50

typedef struct {
    char nombre[MAX];
    char pais[MAX];
    int anio_fundacion;
} Marca;

typedef struct {
    char nombre[MAX];
    Marca mar;
    int anio;
    float precio;
} Modelo;

typedef struct {
    Modelo mod;
    char color[MAX];
    char tipo[MAX];
    int id;
} Vehiculo;

void cargarMarca(Marca *mar) {
    printf("Ingrese el nombre de la marca: ");
    scanf("%s", mar->nombre);
    printf("Ingrese el pais de la marca: ");
    scanf("%s", mar->pais);
    printf("Ingrese el año de fundacion de la marca: ");
    scanf("%d", &mar->anio_fundacion);
}

void cargarModelo(Modelo *mod, Marca marca[], int cantMarcas) {
    printf("Ingrese el nombre del modelo: ");
    scanf("%s", mod->nombre);
    printf("Ingrese el año del modelo: ");
    scanf("%d", &mod->anio);
    printf("Ingrese el precio del modelo: ");
    scanf("%f", &mod->precio);

    printf("Seleccione la marca del modelo (0 a %d):\n", cantMarcas - 1);
    for (int i = 0; i < cantMarcas; i++) {
        printf("%d. %s\n", i, marca[i].nombre);
    }
    int marcaSeleccionada;
    scanf("%d", &marcaSeleccionada);
    mod->mar = marca[marcaSeleccionada];
}

void cargarVehiculo(Vehiculo *veh, Modelo modelo[], int cantModelos) {
    printf("Ingrese el color del vehiculo: ");
    scanf("%s", veh->color);
    printf("Ingrese el tipo del vehiculo: ");
    scanf("%s", veh->tipo);
    printf("Ingrese el id del vehiculo: ");
    scanf("%d", &veh->id);

    printf("Seleccione el modelo del vehiculo (0 a %d):\n", cantModelos - 1);
    for (int i = 0; i < cantModelos; i++) {
        printf("%d. %s\n", i, modelo[i].nombre);
    }
    int modeloSeleccionado;
    scanf("%d", &modeloSeleccionado);
    veh->mod = modelo[modeloSeleccionado];
}

void listarVehiculos(Vehiculo vehs[], int n) {
    printf("\n--- LISTADO DE VEHICULOS ---\n");
    for (int i = 0; i < n; i++) {
        printf("ID %d | Marca: %s (%s) | Modelo: %s (%d) | Color: %s | Tipo: %s | Precio: %.2f\n",
               vehs[i].id,
               vehs[i].mod.mar.nombre,
               vehs[i].mod.mar.pais,
               vehs[i].mod.nombre,
               vehs[i].mod.anio,
               vehs[i].color,
               vehs[i].tipo,
               vehs[i].mod.precio);
    }
}

int main() {
    int nMarcas, nModelos, nVehiculos;

    printf("Ingrese la cantidad de marcas: ");
    scanf("%d", &nMarcas);
    printf("Ingrese la cantidad de modelos: ");
    scanf("%d", &nModelos);
    printf("Ingrese la cantidad de vehiculos: ");
    scanf("%d", &nVehiculos);

    Marca marcas[nMarcas];
    Modelo modelos[nModelos];
    Vehiculo vehiculos[nVehiculos];

    for (int i = 0; i < nMarcas; i++) {
        printf("\n--- Marca %d ---\n", i + 1);
        cargarMarca(&marcas[i]);
    }

    for (int i = 0; i < nModelos; i++) {
        printf("\n--- Modelo %d ---\n", i + 1);
        cargarModelo(&modelos[i], marcas, nMarcas);
    }

    for (int i = 0; i < nVehiculos; i++) {
        printf("\n--- Vehiculo %d ---\n", i + 1);
        cargarVehiculo(&vehiculos[i], modelos, nModelos);
    }

    listarVehiculos(vehiculos, nVehiculos);

    return 0;
}
