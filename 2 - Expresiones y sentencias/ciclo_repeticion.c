#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Escriba un programa que le permita al usuario intentar hasta cuatro veces la respuesta a
una cierta pregunta. Si el usuario no acierta a los cuatro intentos, se le deber� indicar la
respuesta correcta.
int main(){
	
	int respuesta=4, intentos=3;
	
	
	do{
		printf("�Cuanto es 2 + 2? : ");
		scanf("%d", &respuesta);
		
			if(respuesta==4){
				printf("Respuesta correcta.");
				intentos=-2;
			} else {
				
				if(intentos>0){
				printf("Respuesta incorrecta, te quedan %d intentos\n", intentos);
				intentos--;
				}else {
					printf("Respuesta incorrecta, perdiste");
					intentos=-2;
				}
			}
		
	} while(intentos>=0);
	
	return 0;
}
*/
/*Escribir un programa que solicite al usuario un n�mero (n) y muestre en pantalla el rec�proco
	del n�mero (1/n). Utilizar un ciclo do while para lograr que el usuario repita el ingreso si
	introduce cero.
int main(){
	
	int num;
	
	printf("Ingresar un numero entero: ");
		scanf(" %d", &num);
		
		do{
			
			if(num==0){
				printf("Volver a intentar: ");

			} else {
				printf("Reciproco: 1/%d", num);	
				break;
			}
			
			scanf(" %d", &num);
				if(num!=0)
					printf("Reciproco: 1/%d", num);
			
		} while(num==0);
	
	return 0;
}*/
/*Pedro invierte u$s 100 a una tasa del 8% anual. Jorge invierte u$s 150 al 5% anual. �Despu�s
de cu�ntos a�os la cuenta de Pedro rebasar� a la de Jorge?
int main(){
	
	float pedro=100, jorge=150;
	int anios=0;
	
	do{
		
		pedro+=pedro*.08;
		jorge+=jorge*.05;
		
		anios++;
		
	} while(pedro<jorge);
	
		printf("Lo rebasara en %d a�os", anios);
	
	return 0;
}
*/
/*La poblaci�n actual de una colonia de insectos "A" es de 55 millones y crece a una tasa del
7 % anual. La poblaci�n de otra colonia "B" es de 250 millones y crece a raz�n de un 2%
anual. Si estas dos colonias mantuvieran su ritmo de crecimiento actual; �en cu�ntos a�os
la poblaci�n "A" ser� la mitad de la poblaci�n "B"
int main(){
	
	int anios=0;
	double A=55000000, B=250000000;
	
	do{
			
		A+=A*.07;
		B+=B*.02;
		anios++;
		
	} while(A<=(B/2));
	
		printf("En %d a�o/s", anios);
	
	return 0;
}
*/
/*Desarrolle un algoritmo que le permita realizar la escritura de los primeros 100 n�meros
naturales.
int main(){
	
	int num=1;
	
	while(num<=100){
		
		printf("%d, ", num);
		num++;		
	}
	
	return 0;
}
*/
/*Desarrolle un algoritmo que le permita realizar la suma a los primeros N n�meros impares.
int main(){
	
	int impar, contador=0, suma=0,num=1;
	
	printf("Ingresar un numero de numeros impares para sumarlos entre si: ");
		scanf("%d", &impar);
		
		while(contador<impar){
			
			suma+=num;
			
			num+=2;
			contador++;
		}
	printf("TOTAL: %d", suma);
	
	return 0;
}
*/
/*Generar un programa que al ingresar una cantidad n de n�meros naturales, muestre la suma,
el promedio, el valor m�ximo y el m�nimo.
int main(){
	
	int numeros, suma=0, contador=0, maximo=0, minimo=5000;
	float promedio;
	printf("Ingresar numeros para sacar, suma, promedio, maximo y minimo\n");
		
		
		while(numeros>0){
			
			scanf("%d",  &numeros);
		if(numeros!=0){	
			if(numeros>maximo){
				maximo=numeros;
			}
			if(numeros<minimo){
				minimo=numeros;
			}
		}	
			suma+=numeros;
			contador++;
			
		}
		contador--;
		promedio=(float)suma/contador;	
		
		printf("Suma: %d\n", suma);
		printf("Promedio %.2f\n", promedio);
		printf("Maximo: %d\n", maximo);
		printf("Minimo: %d\n", minimo);
		
	return 0;
}
*/
/*Desarrolle un algoritmo que al ingresar un numero N mayor a cero, calcule el cuadrado de
cada n�mero entero desde cero hasta ese N y lo muestre por pantalla
int main(){
	
	int primero=0,num=-1;
	
	printf("Ingresar un valor entero mayor a cero\n");
		
	
	while(num<0){
		
		scanf("%d", &num);
		
		if(num<0){
			printf("El numero debe ser mayor a cero. Reintentar\n");
		}
		else{
			while(primero<=num){
				printf("Cuadrado de %d : %d\n", primero, primero*primero);
				primero++;
			}
		}	
	}
	return 0;
}
*/
/*Desarrolle un algoritmo que le permita leer un valor entero positivo N y calcule su factorial.
An�lisis: El tipo de operaci�n que se repite en este ejercicio es la multiplicaci�n por tanto
hay que iniciar una variable con el valor de 1 ya que este valor no afecta el resultado final.
Dicha variable es S y como generador de la serie de t�rminos a multiplicar se tiene la misma
variable que llevara la cuenta del n�mero de tareas que llevara la cuenta del n�mero de
tareas.
int main(){
	
	int numero=0, factorial=1,inicio=1;
	
	printf("Ingresar un valor entero mayor a cero\n");
	
	while(numero<=0){
		
		scanf("%d", &numero);
		
		if(numero<=0){
			printf("El numero debe ser mayor a cero. Reintentar\n");
		}
		else {
			
			while(inicio<=numero){
				factorial*=inicio;
					inicio++;
			}	
		}
		
	}
	printf("Resultado: %d", factorial);
	
	return 0;
}
*/
/*Desarrolle un algoritmo que le permita leer un valor entero positivo N y decir si es primo o
no. An�lisis: Un n�mero es primo cuando es divisible tan solo por la unidad y por si mismo.
Para determinar si un n�mero es primo o no se realiza la verificaci�n de la divisi�n de dicho
n�mero con el rango de datos comprendidos entre el dos y la mitad del n�mero. Si existe
alg�n valor de dicho rango que divide exactamente a nuestro n�mero entonces este no ser�
primo. Si al finalizar dicha revisi�n no hay ning�n valor que lo divida exactamente entonces
nuestro n�mero ser� primo. La revisi�n se hace hasta la mitad del n�mero ya que de la
mitad hacia arriba ning�n valor lo divide exactamente.
int main(){
	
	int i, numero, primo=0;
	
	printf("Ingresar numero entero positivo\n");
		scanf("%d", &numero);
	
	for(i=1;i<=numero;i++){
		
		if(numero%i==0)
			primo++;
			
	}
	if(primo==2)
		printf("El numero ingresado es primo");
	else
		printf("No es primo");

	return 0;
}
*/

