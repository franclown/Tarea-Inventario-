#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
    char nombreUsuario[30];
    char contrasena[30];
}Usuario;




int main (){

	char clave[30];
	char caracter;
	int i=0;
	
	Usuario b2;
	
	printf("   ----------\n");
    printf("   |Ingresar|\n");
    printf("   ----------\n");
    printf("\n");
	
	printf("-------------------\n");
    printf("|Nombre de Usuario|:");
	gets(b2.nombreUsuario);
    printf("|    Contrasena   |:"); 
	 
	while (caracter = getch()) {

		if (caracter == 13) {
			clave[i] = '\0';
			break;
				
		} else if (caracter == 8) {
			if (i > 0) {
				i--;
				printf("\b \b");
			}
				
		} else {
			if (i < 30) {
				printf("*");
				clave[i] = caracter;
				i++;
				}
			}
	}	
	printf("\n");
	printf("-------------------\n");	
    return 0;
}
	
   
    
    
