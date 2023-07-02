#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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



struct persona {
  char nombre[50];
  int edad;
  float altura;
};

void eliminarPersona(struct persona* personas, int* cantidadPersonas);

void eliminarAutomovil(struct automovil* automoviles, int* cantidadAutomoviles);
void eliminarNeumatico(struct neumatico* neumaticos, int* cantidadNeumaticos);
void eliminarAceite(struct aceite_motor* aceites, int* cantidadAceites);
void eliminarLiquidoFrenos(struct liquido_frenos* liquidos, int* cantidadLiquidos);
void eliminarPiso(struct piso_goma* pisos, int* cantidadPisos);


int main() {
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
	
	
  struct persona personas[Cantidad];
  int cantidadPersonas = 0;
  int opcion;

  while (1) {
    printf("\n      |Elimiar|\n"); 
    
	printf("\n   -----------------\n");
    printf("1. |    Automovil  |\n");
    printf("2. |    Numatico   |\n");
    printf("3. |Aceite de Motor|\n");
    printf("4. |Liquido de Fren|\n");
    printf("5. | Piso de Goma  |\n");      
	printf("''  -----------------\n");
    
    printf("Ingrese una opción: ");
    scanf("%d", &opcion);

    switch (opcion) {
      case 1:
        printf("--------------------\n");
        printf("|Eliminar Automovil|\n");
        printf("--------------------\n");
        		printf("\n");
        eliminarAutomovil(automoviles,&cantidadAutomoviles);		
        break;
      case 2:
       	printf("-------------------\n");
        printf("|Eliminar Numatico|\n");
        printf("-------------------\n");
        		printf("\n");
        eliminarNeumatico(neumaticos,&cantidadNeumaticos);
        break;
      case 3:
      	printf("--------------------------\n");
        printf("|Eliminar Aceite de Motor|\n");
        printf("--------------------------\n");
        		printf("\n");
        eliminarAceite(aceites,&cantidadAceites);
        break;
      case 4:
      	printf("---------------------------\n");
        printf("|Eliminar Liquido de Freno|\n");
        printf("---------------------------\n");
        		printf("\n");
       eliminarLiquidoFrenos( liquidos, &cantidadLiquidos);
        		
       break;
       
       case 5:
        printf("------------------------\n");
        printf("|Eliminar  Piso de Goma|\n");
        printf("------------------------\n");
        		printf("\n");
        eliminarPiso( pisos, &cantidadPisos);
        break;
        
      default:
        printf("Opción inválida. Intente nuevamente.\n");
        break;
    }
  }

  return 0;
}

/*void eliminarPersona(struct persona* personas, int* cantidadPersonas) {
  if (*cantidadPersonas == 0) {
    printf("No hay personas para eliminar.\n");
    return;
  }

  int indice;
  printf("Ingrese el índice de la persona a eliminar (0-%d): ", *cantidadPersonas - 1);
  scanf("%d", &indice);

  if (indice < 0 || indice >= *cantidadPersonas) {
    printf("Índice inválido.\n");
    return;
  }

  // Mover las personas restantes una posición hacia atrás
  for (int i = indice; i < *cantidadPersonas - 1; i++) {
    personas[i] = personas[i + 1];
  }

  (*cantidadPersonas)--;
  printf("Persona eliminada correctamente.\n");
}*/

void eliminarAutomovil(struct automovil* automoviles, int* cantidadAutomoviles){
  if (*cantidadAutomoviles == 0) {
    printf("No hay Automoviles  para eliminar.\n");
    return;
  }

  int indice;
  printf("Ingrese el índice de los Automoviiles a eliminar (0-%d): ", *cantidadAutomoviles - 1);
  scanf("%d", &indice);

  if (indice < 0 || indice >= *cantidadAutomoviles) {
    printf("Índice inválido.\n");
    return;
  }
  
  for (int i = indice; i < *cantidadAutomoviles - 1; i++) {
    automoviles[i] = automoviles[i + 1];
  }

  (*cantidadAutomoviles)--;
  printf("Automovil eliminada correctamente.\n");
}

void eliminarNeumatico(struct neumatico* neumaticos, int* cantidadNeumaticos){

  if (*cantidadNeumaticos == 0) {
    printf("No hay Neumaticos para eliminar.\n");
    return;
  }

  int indice;
  printf("Ingrese el índice de los Neumaticos a eliminar (0-%d): ", *cantidadNeumaticos - 1);
  scanf("%d", &indice);

  if (indice < 0 || indice >= *cantidadNeumaticos) {
    printf("Índice inválido.\n");
    return;
  }
  
  for (int i = indice; i < *cantidadNeumaticos - 1; i++) {
    neumaticos[i] = neumaticos[i + 1];
  }

  (*cantidadNeumaticos)--;
  printf("Neumaticos eliminada correctamente.\n");
}

void eliminarAceite(struct aceite_motor* aceites, int* cantidadAceites){

  if (*cantidadAceites == 0) {
    printf("No hay Aceites de motor para eliminar.\n");
    return;
  }

  int indice;
  printf("Ingrese el índice de los Aceites de motor a eliminar (0-%d): ", *cantidadAceites - 1);
  scanf("%d", &indice);

  if (indice < 0 || indice >= *cantidadAceites) {
    printf("Índice inválido.\n");
    return;
  }
  
  for (int i = indice; i < *cantidadAceites - 1; i++) {
    aceites[i] = aceites[i + 1];
  }

  (*cantidadAceites)--;
  printf("Aceites de motor eliminada correctamente.\n");
}

void eliminarLiquidoFrenos(struct liquido_frenos* liquidos, int* cantidadLiquidos){

  if (*cantidadLiquidos == 0) {
    printf("No hay Liquidos de frenos para eliminar.\n");
    return;
  }

  int indice;
  printf("Ingrese el índice de los Liquidos de freno a eliminar (0-%d): ", *cantidadLiquidos - 1);
  scanf("%d", &indice);

  if (indice < 0 || indice >= *cantidadLiquidos) {
    printf("Índice inválido.\n");
    return;
  }
  
  for (int i = indice; i < *cantidadLiquidos - 1; i++) {
    liquidos[i] = liquidos[i + 1];
  }

  (*cantidadLiquidos)--;
  printf("Liquido de frenos eliminada correctamente.\n");
}

void eliminarPiso(struct piso_goma* pisos, int* cantidadPisos){

  if (*cantidadPisos == 0) {
    printf("No hay Pisos de Goma para eliminar.\n");
    return;
  }

  int indice;
  printf("Ingrese el índice de los Pisos de Goma a eliminar (0-%d): ", *cantidadPisos - 1);
  scanf("%d", &indice);

  if (indice < 0 || indice >= *cantidadPisos) {
    printf("Índice inválido.\n");
    return;
  }
  
  for (int i = indice; i < *cantidadPisos - 1; i++) {
    pisos[i] = pisos[i + 1];
  }

  (*cantidadPisos)--;
  printf("Pisos de Goma eliminada correctamente.\n");
}