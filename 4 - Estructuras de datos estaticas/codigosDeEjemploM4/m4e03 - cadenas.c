/*
En este codigo fuente se muestra cómo se trabaja con cadenas
*/
#include <stdio.h>
#include <string.h>
#define DIM 20

void f1_declaracion(){
    char cad1[5]; /* Declaracion de un vector de 5 posiciones */
    char cad2[] = {'A','C','D','C','\0'}; /* vector de 5 posiciones, pero respetando estructura de una cadena */
    /* declaracion de una cadena caracter a caracter, los demas valores quedan en vacio */
    char cad3[DIM]={'C','o','m','e',' ','o','n',' ','C','o','m','e',' ','o','n','\0'};
    char cad4[]="love me for the money";
    char* cad5="Listen to the moneytalk";

    /* En el printf y respetando la estructura de una cadena, usamos el formato %s para mostrarlas */
    printf("Cadena 1: %s\n",cad1);
    printf("Cadena 2: %s\n",cad2);
    printf("Cadena 3: %s\n",cad3);
    printf("Cadena 4: %s\n",cad4);
    printf("Cadena 5: %s\n",cad5);

    /* o mostramos letra a letra */
    printf("Cadena 2=%c %c %c %c\n",cad2[0],cad2[1],cad2[2],cad2[3]);
}

void f2_recorriendo(){
    /* ciclo que recorre la cadena */
    int i;
    char cad1[DIM]="Alice Cooper";
    for (i=0 ; i<DIM ; i++)
        if (cad1[i] == '\0')
            break;
    /* usamos el valor en el que queda el contador 'i' para saber el largo de la cadena */
    printf("El largo de la cadena '%s' es de %d caracteres\n",cad1,i);

    /* Dado que una cadena es un vector, podemos reemplazar letras por posicion */
    i=5;
    printf("Cambiemos la posicion %d con la letra 'X'\n",i);
    cad1[i]='X';
    printf("La cadena ahora es: %s\n",cad1);
}

void f3_ingresoPorPantalla(){
    char cad[DIM];
    printf("Ingrese una frase de no mas de %d caracteres:\n",DIM);
    scanf("%s",cad); fflush(stdin);
    printf("la frase ingresada es: %s\n",cad);
    /* si en el caso anterior ingresaste mas de una palabra,
    habras notado que solo se leyo la primer palabra. Esto es asi
    por como funciona el formato %s en lectura */
    printf("Ingrese una frase:\n");
    scanf("%[^\n]s",cad); fflush(stdin);
    printf("La frase ingresada es: %s\n",cad);
    /* Pero por como funciona SCANF que no valida el tamaño del bufer,
    es mejor utilizar fgets */
    printf("Ingrese una frase mas:\n");
    get(cad);
    printf("La frase ingresada es: %s\n",cad);
    /* Testear las demas  funciones de la pagina 9 del modulo 4*/
}

int largoDeCadena(char* unaCadena){
    int i;

    for (i=0;unaCadena[i]!='\0';i++)
        ;
    return i;
}

int compararLargoCadena(char* unaCadena,char* otraCadena){
    int i;

    for(i=0;unaCadena[i]!='\0' && otraCadena[i]!='\0';i++){
        unaCadena++;
        otraCadena++;
    }
    if(unaCadena[i]!='\0'&&otraCadena[i]=='\0')
        return 1;
    else
        if(unaCadena[i]=='\0'&&otraCadena[i]!='\0')
            return -1;
        else
            return 0;
}

void f4_funcionesDeCadena(){
    char* unaCadena="Do you need some time on your own...";
    char* otraCadena="Do you need some time all alone........";
    int i;
    /* Vean la forma en que esta desarrollada la funcion largoDeCadena o strlen */
    i=largoDeCadena(unaCadena);
    printf("Largo de cadena: %d\n",i);
    printf("*** REVISE LAS DEMAS FUNCIONES DE CADENAS Y PRUEBELAS USTED MISMO ***\n");
    i=compararLargoCadena(unaCadena,otraCadena);
    printf("La comparacion de cadenas dio %d\n",i);
}

void f5_strtok(){
    /* para esta funcion, la cadena DEBE ser un vector (no funciona con un char*) */
    char cadena1[]="It's a long way to the top, If you wanna rock 'n' roll";
    char cadena2[]="It's a long way to the top, If you wanna rock 'n' roll";
    char* separadores1 =" ";
    char* separadores2 =" ',";
    char* token;
    /* Esta funcion divide la cadena en subcadenas o TOKENs
    segun los caracterese SEPARADORES que se pasan en el segundo parametro */
    printf("Primer tokenizacion\n");
    token = strtok(cadena1,separadores1);
    while (token!=NULL){
        printf("%s\t",token);
        /* es IMPORTANTE mantener siempre el mismo set de separadores */
        token=strtok(NULL,separadores1);
    }
    printf("\n");

    printf("Segunda tokenizacion\n");
    token = strtok(cadena2,separadores2);
    while (token!=NULL){
        printf("%s\t",token);
        /* es IMPORTANTE mantener siempre el mismo set de separadores */
        token=strtok(NULL,separadores2);
    }
    printf("\n");
}

void actualizarVector(int* unVector, int dim){
    int i;

    for (i=0 ; i<dim ; i++)
        unVector[i]+=3;
}

void mostrarVector(int* unVector, int dim){
    int i;

    printf("|");
    for (i=0 ; i<dim ; i++)
        printf("%d|",unVector[i]);
    printf("\n");
}

void f6_modificarVector(){
    int vec[10]={5,10,15,20,25,30};

    actualizarVector(vec,10);
    mostrarVector(vec,10);
}

int main(){
    int vec[DIM]={11,22,22,33,32,23,55,66,77,88,99,76,45,43,67,71,2,39,44},i=0;
    int opcion;

    printf("Ingrese un numero de funcion a probar:");
    scanf("%d",&opcion);
    fflush(stdin);

    switch(opcion){
        case 1:
            f1_declaracion();
            break;
        case 2:
            f2_recorriendo();
            break;
        case 3:
            f3_ingresoPorPantalla();
            break;
        case 4:
            f4_funcionesDeCadena();
            break;
        case 5:
            f5_strtok();
            break;
        case 6:
            f6_modificarVector();
            break;
    }

    return 0;
    }
