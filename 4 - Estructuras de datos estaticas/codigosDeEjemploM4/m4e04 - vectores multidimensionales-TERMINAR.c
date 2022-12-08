/*
En este codigo fuente se muestra cómo se trabaja con vectores multidimensionales, alias matrices
*/
#include <stdio.h>
#include <string.h>
#define DIM 10

void f1_cargarMatriz1(int* mat1,int tam1,int tam2){
    int i,j;

    for (i=0 ; i<tam1 ; i++)
        for (j=0 ; j<tam2 ; j++)
            mat1[i][j]=i+j;
}

f2_cargarMatriz2(int* mat2,int tam1, int tam2, int tam3){
        int i,j,k,contador=0;

    for (i=0 ; i<tam1 ; i++)
        for (j=0 ; j<tam2 ; j++)
            for (k=0 ; k<tam3 ; k++)
            mat1[i][j][k]=i+j;
}

int main(){
    int mat1[DIM][DIM], mat2[DIM][DIM][5];
    int opcion;

    printf("Ingrese un numero de funcion a probar:");
    scanf("%d",&opcion);
    fflush(stdin);

    while (opcion != 0){
        switch(opcion){
        case 1:
            f1_cargarMatriz1(mat1,DIM,DIM);
            break;
        case 2:
            f2_cargarMatriz2(mat2,DIM,DIM,5);
            break;
        case 3:
            f3_mostrarDiag(mat1,DIM);
            break;
        }
    printf("Ingrese un numero de funcion a probar nuevamente (0 para salir):");
    scanf("%d",&opcion);
    }

    return 0;
    }
