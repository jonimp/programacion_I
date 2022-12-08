/*6. Desarrolle una función que reciba un vector de 10 números enteros y muestre los valores por
pantalla, eliminando las repeticiones.*/
#include <stdio.h>
#define DIM 10
#define FIBO 50
/*
int main(){
	
	char numeros[DIM] = {2,8,4,9,5,8,7,7,3,2};
	int i, j;
	
	
		for(i=0;i<DIM;i++){
			for(j=9;j>i;j--){
				if(numeros[i]==numeros[j]){
					numeros[j]=0;
				}
			}	
		}

		for(i=0;i<DIM;i++){
			if(numeros[i]!=0)
				printf("%d ", numeros[i]);
		}
	
	return 0;
}
*/
	
/*10. Construye un programa, utilizando funciones, que lea como máximo 10 números enteros, el
	ciclo termina al introducir un cero. A continuación, lea otro entero y compruebe si ese entero
	está o no entre los anteriores. En caso de que se encuentre, contar y emitir el número de veces
	que aparece.*//*
void leerNumeros(int lista[]);
void comprueba(int lista[], int num, int* cantidad);
int main(){
	int lista[DIM], elOtro, cantidad=0;
	
	leerNumeros(lista);
	
		printf("Ingresar otro numero para comprobar si esta en la lista y cuantas veces\n");
			scanf("%d", &elOtro);
	
	comprueba(lista, elOtro, &cantidad);
	
	printf("El numero %d existe y figura %d veces", elOtro, cantidad);
	
	return 0;
}
	
	void leerNumeros(int lista[]){
		
		int i, nume;
		
		printf("Ingresar hasta 10 digitos enteros o cero para dejar de cargar. ");
		for(i=0;i<DIM;i++){
			scanf("%d", &nume);
			if(nume!=0)
				lista[i] = nume;
			else
				break;
		}
	}
		
		void comprueba(int lista[], int num, int* cantidad){
			
			int i;
			
			for(i=0;i<DIM;i++){
				
				if(lista[i]==num)
					*cantidad+=1;
			}
			
			
		}
*/
/*11. Escribe un programa que llene un vector de 50 elementos con los números de Fibonacci. Los
primeros números son 1, 1, 2, 3, 5 (cada número es la suma de los dos anteriores). Emite el
contenido del vector por pantalla.*//*
int main(){
	
	int i,j=1, fibonacci[FIBO];
	
	for(i=0;i<FIBO;i++){
		fibonacci[i] = 0;
	}
	
	for(i=0;i<FIBO;i++){
		fibonacci[i] += j;
		j += fibonacci[i-1];
	}
	
	for(i=0;i<FIBO;i++){
		printf("%d - ", fibonacci[i]);
	}
	
	return 0;
}
*/
