#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Usuario{
	char nombre[30];
    char apellidomaterno[30];
    char apellidopaterno[30];
    char nombreUsuario[30];
    char contrasena[30];
}Usuario1={"Juan","Zuzunaga","Garza","Administrador","Administrador123"};

int main (){
	
	char usuarioIngresado[30];
	
	char claveIngresado[30];
	
	char UsuarioVdd[30]={"Administrador"};
	
	char ContrasenaVdd[30]={"Administrador123"};
	
	int intento = 0 , ingresa = 0 , caracter;
	
	int i=0,j=0;
	
	

	printf("   ----------\n");
    printf("   |Ingresar|\n");
    printf("   ----------\n");
    printf("\n");
	
	printf("-------------------\n");
    printf("|Nombre de Usuario|:");
    gets(usuarioIngresado);
    printf("-------------------\n");
    printf("|    Contrasena   |:"); 
	 
	while (caracter = getch()) {

		if (caracter == 13) {
			claveIngresado[i] = '\0';
			break;
				
		} else if (caracter == 8) {
			if (i > 0) {
				i--;
				printf("\b \b");
			}
				
		} else {
			if (i < 30) {
				printf("*");
				claveIngresado[i] = caracter;
				i++;
				}
			}
	}	
	printf("\n");
	printf("-------------------\n");	
  
    
            if (strcmp(usuarioIngresado,UsuarioVdd) == 0 && strcmp(claveIngresado,ContrasenaVdd) == 0) {
                ingresa = 1;  
            }
       

        if (ingresa == 0) {
            printf("\n\tUsuario y/o clave son incorrectos\n");
            intento++;
            getchar();
        }
     while (intento < 3 && ingresa == 0);
	
	if (ingresa == 1) {
		printf("\n\n\tBienvenido al Sistema\n");
		
        /* Aquí va el código del programa cuando el usuario ingresa sus credenciales correctas */
	
	} else {
		printf("\n\n\tHa sobrepasado el numero maximo de intentos permitidos\n");
	}

	return 0; 
}
	
	
   
    
    
