#include <stdio.h>
/*
26) Desarrolle una función que reciba un numero entero y recursivamente y devuelva la suma de
sus cifras.

int sumaEnteros (int numero);
int main(){
	
	int num, suma=0;
	printf("Ingresar numero entero: ");
	scanf("%d", &num);
	
	suma = sumaEnteros(num);
	
	
	printf("La suma es : %d", suma);
	return 0;
}
	
	int sumaEnteros(int numero){
		
		if (numero<0)
			return 0;
		else
			return numero += sumaEnteros (numero-1);
		
	}

*/		
/*		
	27) Desarrolle la función multiplicar que reciba dos números enteros y los multiplique
		recursivamente (recuerde que la multiplicación es una serie de sumas sucesivas).

int multiplicar(int num1, int num2);
int main(){
	
	int n1, n2, resultado;
	
	printf("Digitar dos numeros para multplicar: ");
	scanf("%d", &n1);
	scanf("%d", &n2);
	
		resultado = multiplicar(n1, n2);
		
		printf("El resultado es: %d", resultado);
	return 0;
}
	int multiplicar(int num1,int num2){
		
		if (num2 == 0)
			return 0;
		else{ 
			
			return num1 += multiplicar(num1, num2-1); 
		}
	}
*/


/*
28) Escriba una función recursiva que implemente:
	a) Mostrar los números del 1 al N en orden creciente.
	b) Mostrar los números del 1 al N en orden decreciente.
*/
int decreciente(int num);
int creciente(int num);
int main(){
	int numero;
	
	printf("Digitar un numero entero ");
	scanf("%d", &numero);
	
	printf("Decreciente: ");
//	decreciente(numero);
	creciente(numero);
	return 0;
}

int decreciente(int num){
	
	if(num==0)
		return 0;
	else {
		printf("%d ", num);
		return decreciente(num-1);
		
	}
}

	
	int creciente(int num){
				
		if(num==0)
			return 0;
		else {
			printf("%d ", num);
			return creciente(num-(num-1));
			
		}
	}
