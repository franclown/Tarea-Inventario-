#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define Cantidad 5

typedef struct automovil{
    
    int id;
    char marca[31];
    char modelo[31];
    char chasis[31];
    float peso;
    float ancho;
    float largo;
    float alto;
    int puertas;
    char aire[5];
    char combustible[21];
    char consumo[21];
};

struct neumatico{

    int id;
    char marca[31];
    float ancho_seccion;
    float perfil;
    char estructura;
    float diametro_interior;
};

struct aceite_motor{

    int id;
    char marca[21];
    char base_aceite;
    float formato_litros;
    float viscosidad;
};

struct liquido_frenos{

    int id;
    char marca[31];
    float formato_litros;
};

 struct piso_goma{
    
    int id;
    char marca[31];
    char color[21];
    int cantidad;
}; 

void agregarAutomovil(struct automovil* automoviles, int* cantidadAutomoviles);
void agregarNeumatico(struct neumatico* neumaticos, int* cantidadNeumaticos);
void agregarAceite(struct aceite_motor* aceites, int* cantidadAceites);
void agregarLiquidoFrenos(struct liquido_frenos* liquidos, int* cantidadLiquidos);
void agregarPiso(struct piso_goma* pisos, int* cantidadPisos);

void mostrarMenu(int opcionSeleccionada) {
    printf("       ---------\n");
	printf("       |Agregar|\n");
    printf("       ---------\n");
    printf("\n");
       printf(".---------------.\n");
    printf("%s |   Automovil   |\n", opcionSeleccionada == 1 ? "->" : " ");
    printf("%s |    Numatico   |\n", opcionSeleccionada == 2 ? "->" : " ");
    printf("%s |Aceite de Motor|\n", opcionSeleccionada == 3 ? "->" : " ");
    printf("%s |Liquido de Fren| \n",opcionSeleccionada == 4 ? "->" : " ");
    printf("%s | Piso de Goma  |\n", opcionSeleccionada == 5 ? "->" : " ");
       printf(".---------------.\n");
}

int main(){
	
	struct automovil automoviles[Cantidad];
	struct neumatico neumaticos[Cantidad];
	struct aceite_motor aceites[Cantidad];
	struct liquido_frenos liquidos[Cantidad];
	struct piso_goma pisos[Cantidad];
	
	int cantidadAutomoviles = 0;
	int cantidadNeumaticos = 0;
	int cantidadAceites = 0;
	int cantidadLiquidos = 0;
	int cantidadPisos = 0;
	
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
                    opcion = 5;
                }
                break;
            case 80: // Flecha abajo
                opcion++;
                if (opcion > 5) {
                    opcion = 1;
                }
                break;
        }

    } while (tecla != 13); // 13 es el código ASCII para la tecla Enter
	 system("cls");
    switch (opcion) {
        case 1:
        	printf("-------------------\n");
        	printf("|Agregar Automovil|\n");
        	printf("-------------------\n");
        		printf("\n");
        	
        	agregarAutomovil(automoviles,&cantidadAutomoviles); 
            break;
            
        case 2:
        	printf("--------------------\n");
        	printf("|Agregar Neumaticos|\n");
        	printf("--------------------\n");
        		printf("\n");
        	
        	agregarNeumatico(neumaticos,&cantidadNeumaticos);
            break;
        case 3:
        	printf("-------------------------\n");
        	printf("|Agregar Aceite de Motor|\n");
        	printf("-------------------------\n");
        		printf("\n");
        		
        	agregarAceite(aceites, &cantidadAceites);
        
        
            break;
            
        case 4:
        	printf("--------------------------\n");
        	printf("|Agregar Liquido de Freno|\n");
        	printf("--------------------------\n");
        	printf("\n");
        	agregarLiquidoFrenos(liquidos,&cantidadLiquidos);
            break;
            
        case 5:
        	printf("----------------------\n");
        	printf("|Agregar Piso de Goma|\n");
        	printf("----------------------\n");
        	printf("\n");
        	agregarPiso(pisos,&cantidadPisos);
        	
			break;
			
    }
	
	return 0;
}


 void agregarAutomovil(struct automovil* automoviles, int* cantidadAutomoviles){
  if (*cantidadAutomoviles == Cantidad) {
    printf("No se pueden agregar más automóviles. Límite alcanzado.\n");
    return;
  }

struct automovil nuevoAutomovil;
    printf("Ingrese el ID del automovil: ");
    scanf("%d", &nuevoAutomovil.id);
    printf("Ingrese la marca del automovil: ");
    scanf("%s", nuevoAutomovil.marca);
    printf("Ingrese el modelo del automovil: ");
    scanf("%s", nuevoAutomovil.modelo);
    printf("Ingrese el número de chasis del automovil: ");
    scanf("%s", nuevoAutomovil.chasis);
    printf("Ingrese el peso del automovil: ");
    scanf("%f", &nuevoAutomovil.peso);
    printf("Ingrese el ancho del automovil: ");
    scanf("%f", &nuevoAutomovil.ancho);
    printf("Ingrese el largo del automovil: ");
    scanf("%f", &nuevoAutomovil.largo);
    printf("Ingrese la altura del automovil: ");
    scanf("%f", &nuevoAutomovil.alto);
    printf("Ingrese el número de puertas del automovil: ");
    scanf("%d", &nuevoAutomovil.puertas);
    printf("Ingrese el estado del aire acondicionado (Sí/No): ");
    scanf("%s", nuevoAutomovil.aire);
    printf("Ingrese el tipo de combustible del automovil: ");
    scanf("%s", nuevoAutomovil.combustible);
    printf("Ingrese el consumo del automóvil (litros/km): ");
    scanf("%s", nuevoAutomovil.consumo);

    automoviles[*cantidadAutomoviles] = nuevoAutomovil;
    (*cantidadAutomoviles)++;
    printf("Automóvil agregado correctamente.\n");
}

void agregarNeumatico(struct neumatico* neumaticos, int* cantidadNeumaticos){
	if (*cantidadNeumaticos == Cantidad) {
        printf("No se pueden agregar más Neumaticos. Límite alcanzado.\n");
        return;
    }
    
    struct neumatico nuevoNeumatico;
    
    printf("Ingrese el ID del Neumatico: ");
    scanf("%d", &nuevoNeumatico.id);
    printf("Ingrese la marca del Neumatico: ");
    scanf("%s", nuevoNeumatico.marca);
    printf("Ingrese el ancho de seccion del Neumatico: ");
    scanf("%f", &nuevoNeumatico.ancho_seccion);
    printf("Ingrese el perfil del Neumatico: ");
    scanf("%f", &nuevoNeumatico.perfil);
    printf("Ingrese la Estructura del Nuematico: ");
    scanf("%s", nuevoNeumatico.estructura);  
    printf("Ingrese el diametro interior del Neu: ");
    scanf("%f", &nuevoNeumatico.diametro_interior);
    
    neumaticos[*cantidadNeumaticos] = nuevoNeumatico;
    (*cantidadNeumaticos)++;
    printf("Neumatico agregado correctamente.\n");
}

void agregarAceite(struct aceite_motor* aceites, int* cantidadAceites){
	if (*cantidadAceites == Cantidad) {
        printf("No se pueden agregar más Aceite de Motor. Límite alcanzado.\n");
        return;
    }
    
     struct aceite_motor nuevoAceite_motor;
    printf("Ingrese el ID del Aceite de freno: ");
    scanf("%d", &nuevoAceite_motor.id);
    printf("Ingrese la marca del Aceite: ");
    scanf("%s", nuevoAceite_motor.marca);
    printf("Ingrese la base aceitosa del Aceite: ");
    scanf("%s", nuevoAceite_motor.base_aceite);
    printf("Ingrese el formato en litros del Aceite : ");
    scanf("%f", &nuevoAceite_motor.formato_litros);
    printf("Ingrese la viscocidad del Aceite: ");
    scanf("%f", &nuevoAceite_motor.viscosidad);



    aceites[*cantidadAceites] = nuevoAceite_motor;
    (*cantidadAceites)++;
    printf("Aceite de Motor agregado correctamente.\n");
}

void agregarLiquidoFrenos(struct liquido_frenos* liquidos, int* cantidadLiquidos) {
    if (*cantidadLiquidos == Cantidad) {
        printf("No se pueden agregar más líquidos de frenos. Límite alcanzado.\n");
        return;
    }

    struct liquido_frenos nuevoLiquido;
    printf("Ingrese el ID del líquido de frenos: ");
    scanf("%d", &nuevoLiquido.id);
    printf("Ingrese la marca del líquido de frenos: ");
    scanf("%s", nuevoLiquido.marca);
    printf("Ingrese el formato en litros del líquido de frenos: ");
    scanf("%f", &nuevoLiquido.formato_litros);

    liquidos[*cantidadLiquidos] = nuevoLiquido;
    (*cantidadLiquidos)++;
    printf("Líquido de frenos agregado correctamente.\n");
}


void agregarPiso(struct piso_goma* pisos, int* cantidadPisos){
	
	if (*cantidadPisos == Cantidad) {
        printf("No se pueden agregar más Pisos de Goma. Límite alcanzado.\n");
        return;
	}
	
	 struct piso_goma nuevoPiso_goma;
    printf("Ingrese el ID del Piso de Goma: ");
    scanf("%d", &nuevoPiso_goma.id);
    printf("Ingrese la marca del Piso de Goma: ");
    scanf("%s", nuevoPiso_goma.marca);
    printf("Ingrese el color del Piso de Goma: ");
    scanf("%s", nuevoPiso_goma.color);
    printf("Ingrese la cantidad de Pisos de Goma: ");
    scanf("%d", &nuevoPiso_goma.cantidad);
    
    pisos[*cantidadPisos] = nuevoPiso_goma;
    (*cantidadPisos)++;
    printf("Piso de Goma agregado correctamente.\n");
	
}

