/*
En este codigo fuente se muestra cómo se trabaja con vectores
*/

#include <stdio.h>
#define DIM 20

int f1_declaracion(){
    int i;
    /* asi se declara un vector */
    int vec1[10]; /* se debe especificar el tamaño siempre, el vector queda vacio */
    char vec2[] = {'a','b','c','d'}; /* no especifico tamañp pero toma el tamaño de la cantidad de elementos */
    int vec3[DIM]={11,22,33}; /* uso de valores con instrucciones DEFINE */
    /*
    carga del vector por posicion,
    esté o no iniciado
    */
    printf("Declaracion de vectores, asignacion y acceso de valores\n");
    vec1[0]=999;
    vec1[3]=888;
    vec2[2]='z';
    /*
    mostrar datos del vector
    */
    printf("Algunos datos: %d %d %c\n", vec1[0], vec1[3],vec2[2]);
}

int f2_recorriendo(){
    /* ciclo que recorre el vector */
    int i, vec1[DIM]={11,22,33,44,55,66,77,88,99};

    printf("Mostrar vector\n");
    for (i=0 ; i<DIM ; i++)
        printf("%d-%d ",i,vec1[i]);
}

int f3_promedio(){
    /* como se recorre el vector y se procesa el resultado */
    int i, vec[DIM]={11,22,22,33,32,23,55,66,77,88,99,76,45,43,67,71,2,39,44};
    float sum;

    for (i=0 ; i<DIM ; i++)
        sum += vec[i];
    printf("Promedio = %2.2f\n",sum/DIM);
}

int f4_duplicarVector(int* vec, int tam){
    /*
    El vector se pasa como un puntero, por ende hay que
    pasar el tamaño del vector como otro parametro
    */
    int i;
    printf("Duplicando los valores del vector\n");
    for (i=0 ; i<tam ; i++)
        vec[i]*=2;
    printf("\n");
}

int f5_recorriendo2(int* vec, int tam){
    /*
    recorriendo el vector como un puntero
    */
    int i;
    printf("Recorriendo vector como puntero\n");
    for (i=0 ; i<DIM ; i++,vec++)
        printf("%d-%d ",i,*vec);
    printf("\n");
}

int main(){
    int vec[DIM]={11,22,22,33,32,23,55,66,77,88,99,76,45,43,67,71,2,39,44},i=0;


    f1_declaracion();

    f2_recorriendo();

    f3_promedio();

    f4_duplicarVector(vec,DIM);
    for (i=0;i<DIM;i++)
        printf("%d-%d ",i,vec[i]);
    printf("\nNotar que el vector se pasa siempre por valor, por ende su contenido se puede modificar!!!\n");

    f5_recorriendo2(vec,DIM);
    for (i=0;i<DIM;i++)
        printf("%d-%d ",i,vec[i]);

    return 0;
    }
