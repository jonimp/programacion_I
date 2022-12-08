#include <stdio.h>
#include <stdlib.h>
#define DIM 10

typedef struct {
    int legajo;
    char genero;
    char nombre[DIM];
    int edad;
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
    printf("1- Crear archivo binario de caracteres\n");
    printf("2- Mostrar el archivo binario de caracteres\n");
    printf("3- Crear archivo de registros\n");
    printf("4- Mostrar archivo de registros\n");
    printf("5- Funcion: fseek\n");
    printf("6- Funcion: ftell\n");
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

void f1_crearArchivoDeCaracteres(){
    FILE* archivo = fopen("bin/caracteres.dat","wb");
    char caracter;

    printf("Ingrese caracteres (uno por linea). El caracter '!' finaliza el ingreso de datos\n");
    scanf("%c",&caracter);
    fflush(stdin);
    while(caracter!='!'){
        fwrite(&caracter,sizeof(char),1,archivo); /* Se graba un bloque de 1 byte */
        scanf("%c",&caracter);
        fflush(stdin);
    }
    fclose(archivo);
}

void f2_mostrarArchivoDeEnteros(){
    FILE* archivo = fopen("bin/caracteres.dat","rb");
    char caracter;

    if (archivo==NULL){
        printf("*** Error de apertura de archivo ***\n");
        return;
    }
    printf("Contenido del archivo:\n\n");
    fread(&caracter,sizeof(caracter),1,archivo); /* Se lee un bloque de 1 byte */
    while (!feof(archivo)){
        printf("%c",caracter);
        fread(&caracter,sizeof(caracter),1,archivo);
    }
    printf("\n\n");
    fclose(archivo);
}

registro nuevoRegistro(){
    registro unReg;

    printf("Ingrese legajo:");
    scanf("%d",&(unReg.legajo)); fflush(stdin);
    printf("Ingrese genero (f/m):");
    scanf(" %c",&(unReg.genero)); fflush(stdin);
    printf("Ingrese nombre (max. %d caracteres):",DIM);
    scanf("%s",&(unReg.nombre)); fflush(stdin);
    printf("Ingrese edad:");
    scanf("%d",&(unReg.edad)); fflush(stdin);
    printf("Registro:%d-%c-%s-%d\n",unReg.legajo,unReg.genero,unReg.nombre,unReg.edad);
    return unReg;
}

void f3_crearArchivoDeRegistros(){
    char i='s'; /* Con esta inicializacion aseguro el ingreso de un registro */
    registro unReg;
    FILE* archivo;
    char* nomArchivo="bin/registros.dat";

    archivo=fopen(nomArchivo,"ab"); /* se abre en modo APPEND, si da error, se crea el archivo */
    if(archivo==NULL){
        printf("Error de apertura del archivo. Se crea uno nuevo\n");
        archivo=fopen(nomArchivo,"wb");
    }

    while (i=='s'){
        unReg=nuevoRegistro();
        fwrite(&unReg,sizeof(registro),1,archivo);
        printf("Desea ingresar otro registro (s/n)?\n");
        scanf("%c",&i);
    }
    printf("\n");
    fclose(archivo);
}

void f4_mostrarArchivoDeRegistros(){
    char bytesLeidos,count=1;
    registro unReg;
    FILE* archivo=fopen("bin/registros.dat","rb");

    /* uso el error de lectura para saber el fin de archivo (aunque podria no significar eso) */
    bytesLeidos=fread(&unReg,sizeof(registro),1,archivo);
    while (bytesLeidos!=0){
        printf("Registro #%d:%d-%c-%s-%d\n",count++,unReg.legajo,unReg.genero,unReg.nombre,unReg.edad);
        bytesLeidos=fread(&unReg,sizeof(registro),1,archivo);
    }
    printf("\n");
    fclose(archivo);
}

void f5_fseek(){
    FILE* archivo=fopen("bin/registros.dat","rb");
    int pos;
    registro unReg;

    printf("Ingrese el numero de registro que desea ver: ");
    scanf("%d",&pos); fflush(stdin);
    /* Desde el inicio, me desplazo POS posiciones, o lo que es
    lo mismo, POS*sizeof(registro) cantidad de bytes */
    fseek(archivo,(pos-1)*sizeof(registro),SEEK_SET);
    /* IMPORTANTE: fseek cuenta cantidad de posiciones, con lo cual el puntero a la
    posicion del archivo queda 'al inicio del registro siguiente'. Por ende, hay que contar
    una posicion menos para que quede apuntando a la posicion que yo deseo */
    fread(&unReg,sizeof(registro),1,archivo);
    printf("Data registro %d:\n%d-%c-%s-%d\n",pos,unReg.legajo,unReg.genero,unReg.nombre,unReg.edad);
    /* modifiquen la funcion o creen una nueva que utilize SEEK_CUR y SEEK_END */
    printf("\n");
    fclose(archivo);
}

void f6_ftell(){
    FILE* archivo=fopen("bin/registros.dat","rb");
    int pos;
    registro unReg;

    /* ftell devuelve la posicion actual del puntero de archivo en bytes */
    printf("Size del registro=%d\n",sizeof(registro));
    printf("Posicion en bytes=%d\tPosicion en registros=%d\n",ftell(archivo),ftell(archivo)/sizeof(registro));
    fread(&unReg,sizeof(registro),1,archivo);
    puts("Se leyo un registro");
    fread(&unReg,sizeof(registro),1,archivo);
    puts("Se leyo otro registro");
    printf("Posicion en bytes=%d\tPosicion en registros=%d\n",ftell(archivo),ftell(archivo)/sizeof(registro));
    printf("\n");
    fclose(archivo);
}

int main(){
    int opcion;

    banner();
    opcion = menu();
    do{
        switch(opcion){
        case 0:
            salir(); break;
        case 1:
            f1_crearArchivoDeCaracteres(); break;
        case 2:
            f2_mostrarArchivoDeEnteros(); break; /* hacer mismas funciones pero para guardar ints */
        case 3:
            f3_crearArchivoDeRegistros();break;
        case 4:
            f4_mostrarArchivoDeRegistros(); break;
        case 5:
            f5_fseek(); break;
        case 6:
            f6_ftell();break;
        default:
            error(1); break;


        }
        opcion=menu();
			
    }while (opcion != 0);



    return 0;
}
