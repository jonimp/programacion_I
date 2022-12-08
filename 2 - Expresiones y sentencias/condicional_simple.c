#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Desarrolla un algoritmo que le permita leer un valor cualquiera N y escribir si dicho número es par o impar.
*//*
int main(){
	
	int N;
	
	printf("Ingresar un numero entero. ");
		scanf("%d", &N);
		
		if(N%2==0)
			printf("Numero par");
		else
			printf("Numero impar");
		
	return 0;
}
*/
/*
Desarrolla un algoritmo que le permita leer un valor cualquiera N y escribir en la pantalla si dicho número es Positivo, Negativo o 0 (cero).

int main(){
	
	int N;
	
	printf("Ingresar un numero entero. ");
		scanf("%d", &N);
		
		if(N==0)
			printf("Numero es cero.");
		else if(N>0)
			printf("Numero mayor a cero");
		else
			printf("Numero menor a cero");
	
	return 0;
}
*/
/*

Desarrolla un algoritmo que le permita leer dos valores (A y B) y que escriba cuál de los dos valores leídos es el mayor.

int main(){
	
	int a, b;
	
	printf("Ingresar dos valores numericos.\n");
		scanf("%d", &a);
		scanf("%d", &b);
		
		if(a==b)
			printf("Ambos valores son iguales");
		else if (a>b)
			printf("El primero ingresado es mayor");
		else
			printf("El segundo ingresado es mayor");
				   
	return 0;
}
*/
/*
Ingresa dos números enteros, la computadora indica si el mayor es divisible por el menor.
	
int main(){
	
	int a, b;
	
	
	printf("Ingresar dos valores numericos\n");
	scanf("%d", &a);
	scanf("%d", &b);
	
	if (a>b){
		if(a%b==0)
		printf("El primero es mayor y es divisibe por el menor");
	}else if (a<b){
			if(b%a==0)
			printf("El segundo es mayor y es divisible por el menor");
	}
	return 0;
}
*/
/*
	Desarrolla un algoritmo que le permita leer dos valores A y B e indicar si la suma de los dos números es par.

int main(){
	
	int a,b;
	
	printf("Ingresar dos valores enteros\n");
		scanf("%d",&a);
			scanf("%d",&b);
	
	if((a+b)%2==0)
		printf("La suma de ambos valores resulta un numero par");
	else
		printf("La suma es impar");
	
	return 0;
}
*/
/*
	Ingresados dos números reales, la computadora muestra su cociente. Si el segundo número
	es cero, la computadora muestra un mensaje indicando la imposibilidad de la operación.

int main(){
	float a, b;
	
	printf("Ingresar dos numeros reales\n");
		scanf("%f", &a);
		scanf("%f", &b);
		
			if(b==0){
				printf("Operacion incorrecta. no se puede dividir por cero");
			} else
			   printf("%f", a/b);
	
	
	
	
	return 0;
}
*/
/*
	Desarrolla un algoritmo que le permita leer tres valores enteros e indique cuál es el mayor.

int main(){
	
	int a,b,c;
	
	printf("Ingresar tres enteros\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
		if(a>b && a>c)
			printf("El mayor es: %d", a);
		else if(b>a && b>c)
			printf("El mayor es %d", b);
		if (c>a && c>b)
			printf("El mayor es %d", c);
	
	
	return 0;
}
*/
/*
	Desarrolla un algoritmo que le permita leer tres valores A, B y C e indique cuál es valor del
	centro (análogo al ejercicio 7).

int main(){
	
	int a,b,c;
	
	printf("Introducir tres numeros\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	if(a>b && a<c)
		printf("El primero es el del medio");
	else if(a<b && a>c)
		printf("El primero es el del medio");
	if(b>a && b<c)
		printf("El segundo es el del medio");
	else if(b>c && b<a)
		printf("El segundo es el del medio");
	if(c>a && c<b)
		printf("El tercero es el del medio");
	else if(c<a && c>b)
		printf("El tercero es el del medio");
	
	
	return 0;
}
*/
/*
	Desarrolla un algoritmo que le permita leer tres valores A, B y C e indicar si uno de los tres
	divide a los otros dos exactamente.

int main(){
	
	int a,b,c;
	
	printf("Ingresar tres valores, a ver si alguno divide exactamente\n");
		scanf("%d", &a);
		scanf("%d", &b);
		scanf("%d", &c);
		
		if(b%a==0 || c%a==0)
			printf("A");
		else if(c%b==0 || a%b==0)
			printf("B");
		if(a%c==0 || b%c==0)
			printf("C");
		
	return 0;
}
*/

/*
	Escribe un programa que reciba dos números enteros como entrada y escriba el mensaje
		"signos opuestos", sólo si uno de los números ingresados es negativo:
		a) usando un sólo operador lógico
		b) sin utilizar operadores lógicos en la condición.

int main(){
	
	int numero, numero2;
	
	printf("Ingresar dos enteros\n"); 
		scanf("%d", &numero);
			scanf("%d", &numero2);
			
		 a)	if (numero<0 && numero2>0)
				printf("son opuestos");
			else if (numero>0 && numero<0)
				printf("son opuestos");
			else 
				printf("No son opuestos"); 
			
		 b)		if(numero>0){
					if(numero2<0)printf("opuestos");
					else printf("No son opuestos");
				}else if(numero<0){
					if(numero2>0) printf("opuestos");
					else 
						printf("No son opuestos");
				} 
		
			
			
	return 0;
}
*/
/*
	Ingresados tres caracteres, la computadora los muestra ordenados alfabéticamente.

int main(){
	
	char primero, segundo, tercero;
	
	printf("Ingresar tres caracteres\n");
		scanf(" %c", &primero);
		scanf(" %c", &segundo);
		scanf(" %c", &tercero);
		
		if(primero<segundo && segundo<tercero)
			printf("%c %c %c", primero, segundo, tercero);
		else if(primero<tercero && tercero<segundo)
			printf("%c %c %c", primero,tercero, segundo);
		if(segundo<primero && primero<tercero)
			printf("%c %c %c", segundo , primero, tercero);
		else if(segundo<tercero && tercero<primero)
			printf("%c %c %c", segundo, tercero, primero);
		if(tercero<primero && primero<segundo)
			printf("%c %c %c", tercero, primero, segundo);
		else if(tercero<segundo && segundo<primero)
			printf("%c %c %c", tercero, segundo, primero);
			
	
	return 0;
}
*/
/*
	Ingresados 3 números enteros, la computadora indica si están desordenados u ordenados
	en forma creciente o decreciente.

int main(){
	
	int a,b,c;
	
	printf("Ingresar tres numero enteros\n");
		scanf("%d", &a);
		scanf("%d", &b);
		scanf("%d", &c);
		
		if(a<b && b<c)
			printf("Numeros ingresados de forma creciente");
		else if(a>b && b>c)
			printf("Numeros ingresados de forma decreciente");
		else 
			printf("Ingresados de forma desordenada");
		
	return 0;
}
*/

/*	Se ingresa un número de hasta 5 cifras y se indica si es o no capicúa.
int main(){

	int num,a,b,c;
	
		printf("Ingrese un numero para saber si es capicua o no: ");
		scanf("%d",&num);
		

			a=num;
			c=0;
			b=0;

	
	while(a!=0){
	
		b=a%10;
		a=a/10;
		c=c*10+b;
	}
	
		if(c==num)printf("ES CAPICUA");
		else printf("NO ES CAPICUA");

	
	return 0;
}
*/

	//Se lee un número entero correspondiente a un año, y se muestra un mensaje indicando si es año bisiesto.
/*
int main(){
	
	int anio;
	
	printf("Ingresar un año \n");
	scanf("%d", &anio);
	
		if(anio%4==0)
			printf("Es un año bisiesto");
	
	return 0;
}
*/


/*
	Construye un programa que ingrese los valores de los lados de un triángulo: a) Valide si las
	medidas pueden formar un triángulo y b) detecte y muestre un mensaje correspondiente a
	su tipo (EQUILÁTERO, ISÓSCELES, O ESCALENO);

int main(){
	
	int a,b,c;
	
	printf("Ingresar tres lados de un triangulo, se validara con su nombre\n");
		scanf("%d", &a);
		scanf("%d", &b);
		scanf("%d", &c);
		
		if(a==b && b==c)
			printf("Triangulo equilatero.");
		if(a==b && a!=c){
			printf("Triangulo isoseles.");
		} else if(a!=b && a==c){
				printf("Triangulo isoseles.");
		} else if(b==c && c!=a){
				printf("Triangulo isoseles.");
		}
		if(a!=b && b!=c){
			printf("Triangulo escaleno");
		}
	return 0;
}
*/
/*
	Desarrolla un algoritmo que le permita leer un valor cualquiera N y escribir si dicho número
	es múltiplo de Z.

int main(){
	
	int n,z=2;
	
	printf("Ingresar numero entero\n");
		scanf("%d", &n);
		
	
		if(n%z==0){
			printf("El numero es multiplo de Z");
		}
	
	
	return 0;
}
*/
/*
	Desarrolla un algoritmo que le permita leer tres valores N, M y P y decir si N es múltiplo de M y P.

int main(){
	
	int n,m,p;
	
		printf("Ingresar tres valores numericos\n");
			scanf("%d", &n);
			scanf("%d", &m);
			scanf("%d", &p);
			
			if(m%n==0 && p%n==0)
				printf("N es multiplo de P y M");
	
	
	return 0;
}
*/
/*
	Desarrolla un algoritmo que le permita leer tres valores A, B y C e indicar si la suma de dos de ellos cualquiera es igual al tercero.

int main(){
	
	int a,b,c;
	
	printf("Ingresar tre valores numericos\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	if(a+b==c)
		printf("A + B es igual a C");
	if(c+b==a)
		printf("C + B es igual a A");
	if(a+c==b)
		printf("A + C es igual a B");
	
	return 0;
}
*/
/*
	En un almacén se rebaja 20% del precio al cliente si el valor a pagarse es mayor a $200. Dado
	un valor, muestre lo que debe pagar el cliente.

int main(){
	
	float precio;
	
		printf("Ingresar el precio, hay descuento si es mayor de $200.-\n");
			scanf("%f", &precio);
			
				if(precio>=200)
					printf("El costo final es de : $%.2f.-", precio*.8);
				else 
					printf("El costo final es de : $%.2f.-", precio);
	return 0;
}
*/
/*
	Una frutería ofrece las manzanas con descuento según la siguiente tabla:
			Num de Kg.Comprados 		  % descuento
					0-2 		   				 0
					2.01-5 						10
					5.01-10 					15
					10.01 en adelante 			20

	Determina cuánto pagara una persona que compre X manzanas a Y precio en esa frutería.

int main(){
	
	float kilos, precio;
	
	printf("Ingresar costo por kilo de manzanas: ");
		scanf("%f", &precio);
	printf("Ingresar en peso de manzanas: ");
		scanf("%f", &kilos);

			if(kilos>=0 && kilos<=2)
				printf("El costo final es de : %.2f", precio*kilos);
			if(kilos>2 && kilos<=5)
				printf("El costo final es de : %.2f", (precio*kilos)*.9);
			if(kilos>5 && kilos<=10)
				printf("El costo final es de : %.2f", (precio*kilos)*.85);
			if(kilos>10)
				printf("El costo final es de : %.2f", (precio*kilos)*.8);
	
	return 0;
}
*/
/*
	Dadas las 4 notas obtenidas por un alumno, calcula e informa por pantalla su promedio e
	informa con una leyenda si está aprobado o no. La condición de aprobación es obtener un
	promedio mayor o igual que 4.

int main(){
	
	int n1,n2,n3,n4;
	
		printf("Ingresar cuatro notas de un alumno\n");
			scanf("%d", &n1);
			scanf("%d", &n2);
			scanf("%d", &n3);	
			scanf("%d", &n4);
			
		if((n1+n2+n3+n4)/4>=4)
			printf("Aprobado");
		else 
			printf("Desaprobado");
			
	return 0;
}
*/
/*
	De una prueba de nivel realizada a un alumno se conoce la cantidad total de preguntas
	realizadas y la cantidad de respuestas correctas. Construye un programa que informe el
	nivel registrado de acuerdo con la siguiente escala:
			Nota 	Porcentaje
		Excelente 		100
		Muy bueno 	91 a 99
			Bueno 	61 a 90
		  Regular 	40 a 60
			 Malo 	0 a 40

int main(){
	
	int c;
	
	printf("Ingresar nota de 0 a 100\n");
		scanf("%d", &c);
		
		if(c>=0 && c<40)
			printf("Malo");
		else if (c>=40 && c<60)
			printf("Regular");
		else if (c>=60 && c<90)
			printf("Bueno");
		else if (c>=90 && c<=99)
			printf("Muy bueno");
		else if (c==100)
			printf("Exelente");
		else
			printf("tecla invalida");
	return 0;
}
*/
/*
	Construye un programa que solicite la primera letra de los días de la semana y emita por
	pantalla el nombre completo de ese día. En el caso de los martes y miércoles, pedir la
	segunda letra para emitir.

int main(){

	char dia;
	
	printf("Ingresar letra del dia\n");
		scanf("%c", &dia);
	
		if(dia=='l')
			printf("Lunes");
		else if(dia=='m'){
			printf("A ó I");
				scanf(" %c", &dia);
				if(dia=='a')
					printf("Martes");
				else 
					printf("miercoles");
		}		
		else if(dia=='j')
			printf("Jueves");
		else if(dia=='v')
			printf("Viernes");
		else if(dia=='s')
			printf("Sabado");
		else if(dia=='d')
			printf("Domingo");

	return 0;
}
*/

