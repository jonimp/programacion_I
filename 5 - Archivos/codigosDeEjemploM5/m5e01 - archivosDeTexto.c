/*
En este codigo fuente se muestra cómo se trabaja con archivos de texto
*/
#include <stdio.h>
#define DIM 100

void banner(){
    printf("********************************************\n");
    printf("*** Aprendiendo a usar archivos de texto ***\n");
    printf("********************************************\n");
    printf("\n");
}

int menu(){
    int a;
    printf("****** Menu ******\n");
    printf("Elija una opcion:\n");
    printf("0- Salir del programa\n");
    printf("1- Mostrar archivo por pantalla\n");
    printf("2- Crear un archivo\n");
    printf("3- funcion: fgets\n");
    printf("4- funcion: fputs\n");
    printf("5- funcion: fprintf\n");
    printf("6- funcion: fscanf\n");
    printf("7- Crear y/o agregar data a un archivo\n");
    scanf("%d",&a);
    return a;
}

void f1_mostrarArchivoPorPantalla(FILE* unArchivo){
    int c;

    printf("F1: Mostrar contenido de un archivo por pantalla\n");
    c=getc(unArchivo);
    while (c!=EOF){
        printf("%c",c);
        c=getc(unArchivo);
    }
    printf("\n\n");
    /*
    Busquen la palabra "álbumes. Esta bien escrita o hay algun problemas?

    PRACTICA:
    1- hacer una funcion que cuente las ocurrencias de cada vocal y muestre resumen por pantalla
    2- hacer una funcion que muestre el texto por pantalla, pero una oracion por renglon
    3- hacer funcion que cuente la cantidad de oraciones del texto
    */
    printf("\n\n");
}

void f2_crearArchivo(){
    /*
    en esta funcion se crea un archivo de texto ingresado por pantalla. Se termina el ingreso con CTRL+Z
    que es el fin de flujo o ejecucion (CTRL+C tambien sirve pero cierra el programa).
    */
    FILE* archivo = fopen("txt/otroEjemplo.txt","wt");
    int c;

    printf("F2: Ingrese todo el texto que quiera, para terminar presionar Enter y luego CTRL+Z\n");
    fflush(stdin); // limpiamos el buffer del teclado (stdin)
    c=fgetc(stdin);
    while (c!=EOF){
        fputc(c,archivo);
        c=fgetc(stdin);
    }
    fclose(archivo);
    printf("El texto se guardo en el archivo txt/otroEjemplo.txt\n");
    printf("\n\n");
}

void f3_fgets(FILE* archivo){
    char texto[2000];

    printf("F3: Mostrar contenido de un archivo por pantalla con fgets\n");
    if(archivo!=NULL) {
        fgets(texto,2000,archivo);
        while(!feof(archivo)){
            puts(texto); /* el doble \n es porque puts agrega un \n */
            fgets(texto,2000,archivo);
        }
        puts(texto); /* feof da fin de archivo en la ultima lectura antes de mostrar por pantalla */
        fclose(archivo);
    }
    else{
        printf("Error - puntero al archivo invalido\n");
    }
    printf("\n\n");
}

void f4_fputs(){
    FILE* archivo = fopen("txt/otroEjemplo.txt","wt");

    printf("\nF4: Grabando archivo 'txt/otroEjemplo.txt' usando fputs\n");
    fputs("I'm on my way",archivo);
    fputs("I'm on my way",archivo);
    fputs("Home sweet home...\n",archivo); /* Atentos a este \n agregado aqui (porque la cadena no lo incluye)!! */
    fputs("Tonight, tonight",archivo);
    fputs("I'm on my way",archivo);/* Atentos a la falta de espacios entre las cadenas en el archivo!! */
    fputs("I'm on my way",archivo);
    fputs("Home sweet home...\n",archivo);
    printf("IMPORTANTE: Revisar como se escribio el archivo y compararlo con el codigo\n\n");
    fclose(archivo);
    printf("\n\n");
}

void f5_fprintf(){
    FILE* archivo = fopen("txt/otroEjemplo.txt","wt");
    int nacimiento = 1958;
    char* banda = "Montley Crue";

    printf("F5: Grabando archivo 'txt/otroEjemplo.txt' usando fprintf\n");
    fprintf(archivo,"Nikki Sixx nacio en %d\n",nacimiento);
    fprintf(archivo,"Nikki es el bajista de %s\n",banda);
    fclose(archivo);
    printf("\n\n");
    /*
    Prueben con otros formatos de texto, como varias variables...
    */
}

void f6_fscanf(){
    int dim;
    float iva;
    char empresa[20];
    FILE* archivo = fopen("txt/configuraciones.txt","rt");

    printf("\nF6: Grabando archivo usando fscanf\n");
    fscanf(archivo,"Empresa: %s\n",empresa);
    fscanf(archivo,"Dimension de vector: %d\n",&dim);
    fscanf(archivo,"IVA: %f\n",&iva);
    printf("Configuraciones leidas:\nEmpresa:%s\nDim. del vector:%d\nIVA:%2.2f\n\n",empresa,dim,iva);
    fclose(archivo);
    printf("\n\n");
    /*
    Que pasaria si el formato no es exactamente igual que en el archivo? funciona? Prueben...
    */
}

void f7_crear_agregarTexto(){
    FILE* archivo=NULL;
    char buffer[DIM];
    int leidos;

    archivo=fopen("txt/archivoDeF7.txt","rt");
    if (archivo==NULL){
        archivo=fopen("txt/archivoDeF7.txt","wt");
        printf("El archivo no existe! se creo el archivo vacio\n");
    } else {
        printf("El archivo ya existe!\n");
    }
    freopen("txt/archivoDeF7.txt","at",archivo);
    fflush(stdin); // recordar limpiar el buffer del teclado para borrar el "enter" que queda de haber ingresado la opcion
    leidos=(int)fgets(buffer, DIM, stdin);
    while (leidos!=0){
        fputs(buffer,archivo);
        leidos=(int)fgets(buffer, DIM, stdin);
    }
    fclose(archivo);
    printf("Archivo cerrado\n");
    printf("\n\n");
}

void errores(int i){
    /*
    Funcion de manejo de errores centralizado
    */
    switch(i){
        case 1:
            printf("Error %d: Opcion invalida!\n",i);
            break;
    }
}

int main(){
    int opcion;
    FILE* unArchivo;

    banner();
    opcion=menu();
    while(opcion!=0){
        switch(opcion){
            case 0:
                return 0;
            case 1:
                /* apertura de archivo existente de texto en modo lectura */
                unArchivo = fopen("txt/textoEjemplo.txt","rt");
                f1_mostrarArchivoPorPantalla(unArchivo);
                fclose(unArchivo);
                break;
            case 2:
                f2_crearArchivo();
                break;
            case 3:
                unArchivo = fopen("txt/textoEjemplo.txt","rt");
                f3_fgets(unArchivo);
                fclose(unArchivo);
                break;
            case 4:
                f4_fputs();
                break;
            case 5:
                f5_fprintf();
                break;
            case 6:
                f6_fscanf();
                break;
            case 7:
                f7_crear_agregarTexto();
                break;
            default:
                errores(1);
                break;
        }
        opcion=menu();
    }
    return 0;
    }
