#include <stdio.h>
/*
Escribe un programa que almacene, en un vector con dimensión 10, los números 10 primeros
números de la Quiniela. El ingreso de los datos será indicando posición-numero, de modo que
puedo ingresar la posición 5 antes que la posición 2.

#define DIM 10
int main(){
	
	int i,numero,posicion, quiniela[DIM];
	
	for(i=0; i<DIM; i++){
	printf("Ingresar posicion de 1 a 10 para luego colocar un numero en ella: ");
		scanf("%d", &posicion);
		
		printf("Ingresar numero a colocar: ");
			scanf("%d", &numero);
			
		posicion--;
	quiniela[posicion] = numero;
	}
	
	printf("Lista de numeros: \n");
		
		for(i=0; i<DIM; i++){
			printf("posicion %d: %d\n", i+1, quiniela[i]);
		}
	
	return 0;
}
*/
/*
Escribe un programa con un menú que defina las siguientes funciones y emita los resultados, la
dimensión del vector será de 10 (elementos):
a) Cargar m elementos de un vector por teclado. Deberá considerar que no podrá superar el
máximo de elementos de vector: void cargar(int vect[], int unNum);
b) Leer elementos de un vector hasta encontrar el número entero a . Deberá retornar el
número de elementos que ha leído sin contar el entero a. int leerMarca(int vect[]);
c) Dado un elemento y dado un vector de enteros, desarrolle una función que devuelva el
número de apariciones del elemento en el vector. int veces(int valor, int vect[], int unNum);
d) Invertir los elementos del vector sin utilizar otro vector. Por ejemplo, el vector formado por
los enteros: 1 2 3, debe quedar 3 2 1. void invertirOrden(int vect[], int unNum);*/

/*
3. Continúa agregando funciones al ejercicio anterior que permitan:
a) Calcular y emitir la suma de sus elementos.
b) Calcular y emitir el mínimo del vector.
c) Calcular y emitir el promedio de los valores del vector
d) Emitir los valores de aquellos que superaron ese promedio.
e) Emitir los valores del vector que son múltiplos del último número ingresado en el mismo.
f) Emitir el valor máximo e indicar la cantidad de veces que apareció y el número de orden en
que fue ingresado.
g) Emitir los valores que son pares.
h) Emitir los valores que son impares.
i) Emitir aquellos que estén ubicados en posición par.*//*
#define DIM 10

void cargar(int vector[], int num);
int leerMarca(int vector[]);
int veces(int valor, int vector[], int unNum);
void invertirOrden(int vector[]);
int sumarElementos(int vector[]);
int minimoElemento(int vector[]);
float promedio(int vector[]);
void EmitirSuperioresPromedio(int vector[]);

int main(){
	int a,vector[DIM], aparicion;
	
		cargar(vector, DIM);
		
			printf("Cantidad que no son marca: %d", leerMarca(vector));
		
		printf("\nIngresar un numero para indicar cuantas veces aparece: ");
		scanf("%d", &aparicion);
		
			printf("Cantidad que aparece: %d", veces(aparicion, vector, DIM));
		
			invertirOrden(vector);
			
			printf("\nVector invertido\n");
			
			for(a=0;a<DIM;a++){
				printf("%d ", vector[a]);
			}
		
			printf("\nSuma de los elementos: %d", sumarElementos(vector));
			
			printf("\nEl minimo de los elementos: %d", minimoElemento(vector));
			
			printf("\nPromedio: %f", promedio(vector));
			
			EmitirSuperioresPromedio(vector);
			
			
		
	return 0;
}
*/
	
	
	
	
	
	/*----------------------------------------FUNCIONES-------------------------------------*/
/*	
	void cargar(int vector[], int num){
		
		int i;
		
		for(i=0; i<DIM; i++){
			printf("Ingresar numero %d: ", i+1);
				scanf("%d", &vector[i]);
		}
		
	}
		
	
	int leerMarca(int vector[]){
		
		int marca=7,i,cuenta=0;
		
			for(i=0;i<DIM;i++){
				if(vector[i]!=marca){
					cuenta++;
				}
			}
		return cuenta;
	}

		
	int veces(int valor, int vector[], int unNum){
	
		int i, cant=0;
		
		for(i=0;i<DIM;i++){
			if(vector[i]==valor){
				cant++;
			}
		}
		
		return cant;
	}
		
		
	void invertirOrden(int vector[]){
		
		int aux,i,j=9;
		
			for(i=0;i<DIM/2;i++){
		
					aux=vector[i];
					vector[i] = vector[j];
					vector[j] = aux;
					j--;
				
			}
	}
		
		
	int sumarElementos(int vector[]){
		
		int i, suma=0;
		
		for(i=0;i<DIM;i++){
			suma += vector[i];
		}
		
		return suma;
	}

		
	int minimoElemento(int vector[]){
		
		int i, minimo=9999;
		
		for(i=0;i<DIM;i++){
			
			if(minimo>vector[i])
				minimo = vector[i];
		}
		
		return minimo;
	}
		
		
	float promedio(int vector[]){
		
		int suma=0;
		float promedio;
		
			suma = sumarElementos(vector);
		
			promedio = suma/DIM;
			
		return promedio;
	}


	void EmitirSuperioresPromedio(int vector[]){
			
		int a;
		
		for(a=0;a<DIM;a++){
			if(vector[a]>promedio(vector))
				printf("\nnumero sup.: %d", vector[a]);
		}
			
			
	}
*/
