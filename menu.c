#include <stdio.h>
#include <conio.h>
#include <windows.h>

void mostrarMenu(int opcionSeleccionada) {
    printf("--------------\n");
	printf("|Sale Car S.A|\n");
    printf("--------------\n");
    printf("%s Busqueda\n", opcionSeleccionada == 1 ? "->" : " ");
    printf("%s Agregar \n", opcionSeleccionada == 2 ? "->" : " ");
    printf("%s Lista \n", opcionSeleccionada == 3 ? "->" : " ");
    printf("%s Actualizar \n", opcionSeleccionada == 4 ? "->" : " ");
    printf("%s Eliminar \n", opcionSeleccionada == 5 ? "->" : " ");
    printf("%s Salir\n", opcionSeleccionada == 6 ? "->" : " ");
}

int main() {
    int opcion = 1;
    int tecla;

    do {
        system("cls"); // Limpiar pantalla
        mostrarMenu(opcion);

        tecla = getch();

        switch (tecla) {
            case 72: // Flecha arriba
                opcion--;
                if (opcion < 1) {
                    opcion = 6;
                }
                break;
            case 80: // Flecha abajo
                opcion++;
                if (opcion > 6) {
                    opcion = 1;
                }
                break;
        }

    } while (tecla != 13); // 13 es el código ASCII para la tecla Enter
	 system("cls");
    switch (opcion) {
        case 1:
        	 printf("----------\n");
        	 printf("|Busqueda|\n");
        	 printf("----------\n");
        	 printf("\n");
        	 printf("----------------\n");
             printf("|Tipo de Struct|\n"); // otro menu mostrando el tipo de struct (auto, neumatico, piso de goma)
             printf("----------------\n");
             printf("|Tipo de Marca |\n");  // busqueda
             printf("----------------\n");
             
            break;
        case 2:
        	printf("---------\n");
            printf("|Agregar|\n");
            printf("---------\n");
            
            break;
        case 3:
        	printf("         -------\n");
            printf("         |Lista|\n");  // MENU DE  TIPO DE STRUCT
            printf("         -------\n");
            printf("\n");
            printf("--------------------------\n");
            printf("|Tipo de Dato | Cantidad |\n");
            printf("|-------------|----------|\n");
            printf("|  Automovil  |          |\n");
            printf("|  Neumatico  |          |\n");
            printf("|   Aceite    |          |\n");
            printf("|Liquido de Fr|          |\n");
            printf("|St. Piso Goma|          |\n");
            printf("--------------------------\n");
            break;
            
        case 4:
        	printf("------------\n");
            printf("|Actualizar|\n");	// MENU DE  TIPO DE STRUCT
            printf("------------\n");
            break;
            
        case 5:
        	printf("----------\n");
            printf("|Eliminar|\n");
            printf("----------\n");
            printf("\n");
            printf("------------------\n");
            printf("|Tipo de Producto|\n");	// MENU DE  TIPO DE STRUCT
            printf("------------------\n");
            printf("\n");
            printf("----------------------\n");
            printf("|Tipo de Sub Producto|\n");
            printf("----------------------\n");
			break;
			
        case 6:
            printf("Saliendo del programa...\n");
            
            break;
    }

    return 0;
}