#include <stdio.h>
/*
Escribe un programa que almacene, en un vector con dimensi�n 10, los n�meros 10 primeros
n�meros de la Quiniela. El ingreso de los datos ser� indicando posici�n-numero, de modo que
puedo ingresar la posici�n 5 antes que la posici�n 2.

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
Escribe un programa con un men� que defina las siguientes funciones y emita los resultados, la
dimensi�n del vector ser� de 10 (elementos):
a) Cargar m elementos de un vector por teclado. Deber� considerar que no podr� superar el
m�ximo de elementos de vector: void cargar(int vect[], int unNum);
b) Leer elementos de un vector hasta encontrar el n�mero entero a . Deber� retornar el
n�mero de elementos que ha le�do sin contar el entero a. int leerMarca(int vect[]);
c) Dado un elemento y dado un vector de enteros, desarrolle una funci�n que devuelva el
n�mero de apariciones del elemento en el vector. int veces(int valor, int vect[], int unNum);
d) Invertir los elementos del vector sin utilizar otro vector. Por ejemplo, el vector formado por
los enteros: 1 2 3, debe quedar 3 2 1. void invertirOrden(int vect[], int unNum);*/

/*
3. Contin�a agregando funciones al ejercicio anterior que permitan:
a) Calcular y emitir la suma de sus elementos.
b) Calcular y emitir el m�nimo del vector.
c) Calcular y emitir el promedio de los valores del vector
d) Emitir los valores de aquellos que superaron ese promedio.
e) Emitir los valores del vector que son m�ltiplos del �ltimo n�mero ingresado en el mismo.
f) Emitir el valor m�ximo e indicar la cantidad de veces que apareci� y el n�mero de orden en
que fue ingresado.
g) Emitir los valores que son pares.
h) Emitir los valores que son impares.
i) Emitir aquellos que est�n ubicados en posici�n par.*//*
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
