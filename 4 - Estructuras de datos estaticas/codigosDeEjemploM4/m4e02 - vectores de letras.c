/*
En este codigo fuente se muestra cómo se trabaja con vectores de letras
*/

#include <stdio.h>
#define DIM 10

int f1_declaracion(){
    int i;
    /* asi se declara un vector de letras*/
    char vec2[] = {'a','b','c','d'}; /* no especifico tamaño pero toma el tamaño de la cantidad de elementos */
    /*
    carga del vector por posicion,
    esté o no iniciado
    */
    printf("Declaracion de vectores, asignacion y acceso de valores\n");
    vec2[0]=578; /* este valor (65+512) no entra en un char (overflow) pero algo queda guardado. Que queda? */
    vec2[3]=55; /* que valor es el 55 en la tabla ASCII? */
    vec2[2]='z'; /* asi se indica que lo que se guarda es el valor ASCII de la 'z' */
    /*
    mostrar datos del vector
    */
    printf("Algunos datos: %c %c %c\n", vec2[0], vec2[3],vec2[2]);
}

int f2_recorriendo(){
    /* ciclo que recorre el vector */
    char i, vec1[DIM]={'M','a','r','t','i','n'};

    printf("Mostrar vector de letras\n");
    for (i=0 ; i<DIM ; i++)
        printf("%d-%c\n",i,vec1[i]);
    printf("\n");
}

void actualizarVector(char* unVector, int dim){
    int i;
    float sum;

    for (i=0 ; i<DIM ; i++)
        unVector[i] += 32;
}

void mostrarVector(char* unVector, int dim){
    int i;

    printf("Mostrar vector que vino por parametro:\n|"); /* ver detalle del pipe */
    for (i=0 ; i<dim ; i++){
        printf("%c|",unVector[i]);
        }
    printf("\n");
}


int main(){
    char vec[DIM]={'I','N','S','P','T','-','U','T','N'};

    f1_declaracion();
    f2_recorriendo();
    mostrarVector(vec,DIM);
    actualizarVector(vec,DIM);
    mostrarVector(vec,DIM);

    return 0;
    }
