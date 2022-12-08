# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# define DIM 5
/*12. Dado un vector de dimensión N y un valor x float, desarrollar una función que almacene x en la
posición i de un vector. Los valores no se ingresan ordenados por posición, se debe ingresar la
posición y el valor de x hasta completar el vector. Al finalizar, emitir el contenido del vector
indicando la posición ocupada por cada número a partir de la primera posición. Se debe utilizar
funciones.*//*
void llenarVector(float doce[]);

int main(){
	
	float doce[DIM];
	int i;
	
	
	for(i=0;i<DIM;i++){
		doce[i] = 0;
	}

			llenarVector(doce);
		
	printf("LOS VALORES SON:\n");
	for(i=0;i<DIM;i++){
		printf("Posicion: %d valor: %.2f\n", i, doce[i]);
	}
	
	return 0;
}
	
	
	
	void llenarVector(float doce[]){
		
		int indice,ok=0;

		printf("El vector tiene 5 posiciones, se elige indice luego se ingresa el valor\n");
		
		while(ok<DIM){
			printf("Ingresar indice de 0 a 4\n");
				scanf("%d", &indice);
			printf("Ingresar valor\n");
				scanf("%f", &doce[indice]);
			ok++;
		}		
	}
	*/
/*13. Escribe un programa que imprima los elementos de un vector de enteros en orden inverso
utilizando punteros (no utilizar subíndices []).
int v[10] = {1,2,3,4,5,6,7,8,9,10};
int *p;*//*

int main(){
	
	int v[10] = {1,2,3,4,5,6,7,8,9,10};
	int *p;
	int aux=9;
	
		
		
			while(aux>=0){
				p=v+aux;
				printf("%i\n", *p);
				aux--;
			}
			
	return 0;
}*/


/*14. Escribe una función que reciba un vector de enteros y su tamaño, y retorne la cantidad de
números impares que contiene. Trabaja con notación de punteros.
int cuentaImpares(int vector[], int tamanio);
int main(){
	int tam=15, cantidad=0;
	int vector[tam];
	
	cantidad = cuentaImpares(vector, tam);
	printf("%d", cantidad);
	return 0;
}
	
	int cuentaImpares(int vector[], int tamanio){
		
		int *p, contador=0;
		
		tamanio--;
		while(tamanio>=0){
			
			p = vector+tamanio;
			
				tamanio--;
				
				if((*p/2)!=0){
					contador++;
				}
		}
		return contador;
	}*/
/*16. Dadas las siguientes declaraciones:
int v[3] = {10,20,30};
int *p;
p = v;

Explica que imprimiría el printf en cada caso de los siguientes:
a) (*p)++; printf ("%d", *p);
b) *(p++); printf ("%d", *p);
c) *p++; printf ("%d", *p);
*//*
int main(){
	
	int *p;
	int v[3] = {10,20,30};
	
		p = v;
		
		(*p)++; printf ("%d", *p);
		*(p++); printf ("%d", *p);
		*p++; printf ("%d", *p);
	
	return 0;
}*/
/*17. Construye una función tal que dados dos vectores de 5 elementos cada uno, los concatene en
un tercer un vector de 10 elementos. Ej:
V1= 2-56-7-8-30; V2= 7-80-2-4-13; V3= 2-56-7-8-30-7-80-2-4-13;*//*
void concatenarVectores(int v1[], int v2[],int  concatenado[]);
int main(){
	
	int v1[5] = {2,56,7,8,30}, v2[5] = {7,80,2,4,13}, concatenado[10] = {0,0,0,0,0,0,0,0,0,0};
	int i;
		concatenarVectores(v1,v2,concatenado);
	
		for(i=0;i<10;i++){
			printf("%d ", concatenado[i]);
		}
		
			
	return 0;
}

		void concatenarVectores(int v1[], int v2[],int  concatenado[]){
			
			int i;
			
			for(i=0;i<5;i++){
				concatenado[i] = v1[i];
			}
			
			for(i=5;i<10;i++){
				concatenado[i] = v2[i-5];
			}
			
		}
*//*18. Ídem anterior, pero los elementos de los dos vectores deben concatenarse intercalados. Ej:
V4= 2-7-56-80-7-2-8-4-30-13;*//*
void concatenarIntercalados(int v1[], int v2[],int  concatenado[]);
int main(){
	
	int v1[5] = {2,56,7,8,30}, v2[5] = {7,80,2,4,13}, concatenado[10] = {0,0,0,0,0,0,0,0,0,0};
	int i;
	concatenarIntercalados(v1,v2,concatenado);
	
	for(i=0;i<10;i++){
		printf("%d ", concatenado[i]);
	}
	
	return 0;
}
	void concatenarIntercalados(int v1[], int v2[],int  concatenado[]){
		
		int i,j=0,k=0;
		
		for(i=0;i<9;i+=2){
			
			concatenado[i] = v1[j];
			j++;
		}
		
		for(i=1;i<10;i+=2){
			
			concatenado[i] = v2[k];
			k++;
		}
		
	}*/
/*20. Escriba un una función que devuelva un vector de 6 posiciones que deben tener los valores de la
lotería generados aleatoriamente entre 1 y 54 (utilice la función rand ).*/

int main(){
		int loteria[6] = {0,0,0,0,0,0};
		int i;
		
		srand (time(NULL));
		
			for(i=0;i<6;i++){
				loteria[i] = rand() % (54+1);
			}
		
			for(i=0;i<6;i++){
				printf("%d\n", loteria[i]);
			}
	return 0;
}


/*
int main(){
		
	int i;
	int B[] = {3,4,1,2,7,12,-4};
	float f = 4.234, *ptf;
	
		*(B+3) = *B + 15;
		ptf = &f;
		*B = (int)(*ptf);
		f = *ptf + 20;
		*(B + 5) = (int)(*ptf);
		//que emite por pantalla B[], f, ptf?
	
		for(i=0;i<7;i++){
	
			printf("%f ", B[i]);
		}
		
		printf("\n%f", f);
		printf("\n%f", *ptf);
		
	return 0;
}
*/	
	
/*

21. Para probar un congelador, la fábrica registra en un listado la temperatura en el interior durante
todos los días del mes de junio. Escriba una función que reciba un vector con todas estas
temperaturas (generalmente, negativas) y devuelva la mínima temperatura. Luego escriba una
segunda función que diga en qué día del mes se produjo la temperatura mínima.

*//*
#define MES 30	
float recibirMinima(float temperaturas[], int* diaMinimo);
int main(){
	
	float minima, temperatura[MES];
	srand (time(NULL));
	
	int i, diaMenorTemp;
	
	for(i=0;i<MES;i++){
		temperatura[i] = rand() % 15 * (-1);
	}
	
		minima = recibirMinima(temperatura, &diaMenorTemp);
	
	printf("la minima es %f\n", minima);
	printf("Fecha de minima temperatura: %d de junio\n", diaMenorTemp+1);
	
	for(i=0;i<MES;i++){
		
		printf("%f\n", temperatura[i]);
	}
		
	return 0;
}
	float recibirMinima(float temperaturas[MES], int* diaMinimo){
		
		int i, min=0;
		
		for(i=0;i<MES;i++){
			
			if(temperaturas[i]<min){
				min=temperaturas[i];
				*diaMinimo = i;
				
			}
		}
		
			return min;
			 
	}
	
*/	
	
	
	
	
	
	
