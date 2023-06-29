#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
    char nombre[30];
    char apellidomaterno[30];
    char apellidopaterno[30];
}registro;

typedef struct {
    char nombreUsuario[30];
    char contrasena[30];
}Usuario;


int main(){
	Usuario b2;
	registro n1;

	
    printf("   ------------\n");
    printf("   |Bienvenido|\n");
    printf("   ------------\n");
    printf("\n");

    printf("    ----------\n");
    printf("    |Registro|\n");
    printf("    ----------\n");
    printf("\n");
	
    printf("------------------\n");
    printf("|      Nombre    |:");
    gets(n1.nombre);
    printf("|Apellido Materno|:");
    gets(n1.apellidomaterno);
    printf("|Apellido Paterno|:");
    gets(n1.apellidopaterno);
    printf("------------------\n");
    printf("\n");

    printf("     ---------\n");
    printf("     |Usuario|\n");
    printf("     ---------\n");
    printf("\n");

    printf("-------------------\n");
    printf("|Nombre de Usuario|:");
	gets(b2.nombreUsuario);
    printf("|    Contrasena   |:");  
    gets(b2.contrasena);
    printf("-------------------\n");
    printf("\n");
}






