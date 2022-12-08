#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM 50

typedef struct {
    int legajo;
    int edad;
    char nombre[DIM];
    int nota1;
    int nota2;
    int nota3;
} registro;

void banner(){
    printf("********************************************\n");
    printf("*** Aprendiendo a usar archivos binarios ***\n");
    printf("********************************************\n");
    printf("\n");
}

int menu(){
    int a;
    printf("****** Menu ******\n");
    printf("Elija una opcion:\n");
    printf("0- Salir del programa\n");
    printf("1- Mostrar CSV crudo por pantalla\n");
    printf("2- Mostrar CSV como registros por pantalla\n");
    scanf("%d",&a);
    fflush(stdin);
    return a;
}

void salir(){
    printf(" Cerrando el programa...");
}

void error(int i){
    switch(i){
    case 1:
        printf("Opcion invalida!\n"); break;
    default:
        printf("Error desconocido o error de programacion\n"); break;
    }
}

void f1_mostrarCSVcrudo(){
    FILE* archivo=fopen("txt/datos.csv","rt");
    char buffer[DIM]; // como es un archivo de texto, debo saber el maximo de caracteres por linea posible de antemano
    int leidos;

    fgets(buffer,DIM,archivo); // esta lectura lee la primer linea, que es el encabezado del archivo, lo ignoro

    leidos=fgets(buffer,DIM,archivo);
    while (leidos>0){
        printf("%s",buffer); // no hay \n porque el fgets ya lo agrega a la cadena
        leidos=fgets(buffer,DIM,archivo);
    }
    printf("\n");
    fclose(archivo);
}

void f2_mostrarCSVregistros(){
    FILE* archivo=fopen("txt/datos.csv","rt");
    char buffer[DIM]; // como es un archivo de texto, debo saber el maximo de caracteres por linea posible de antemano
    int leidos,i, nroRegistro=1;
    char* unCampo;

    fgets(buffer,DIM,archivo); // esta lectura lee la primer linea, que es el encabezado del archivo, lo ignoro

    leidos=fgets(buffer,DIM,archivo);
    while (leidos>0){
        i=1;
        printf("Registro#%d:\n",nroRegistro++);
        unCampo=strtok(buffer,";\n"); // parseo la cadena segun los separadores del CSV
        while (unCampo!=NULL){
            printf("Campo%d:%s\n",i++,unCampo);
            unCampo=strtok(NULL,";\n"); // sigo leyendo manteniendo los mismos separadores
        }
        printf("\n");
        leidos=fgets(buffer,DIM,archivo);
    }
    printf("\n");
    fclose(archivo);
}

int main(){
    int opcion;

    banner();
    opcion = menu();
    while (opcion != 0){
        switch(opcion){
        case 0:
            salir(); break;
        case 1:
            f1_mostrarCSVcrudo(); break;
        case 2:
            f2_mostrarCSVregistros(); break; /* hacer mismas funciones pero para guardar ints */
        default:
            error(1); break;
        }
        opcion=menu();
    }
    return 0;
}
