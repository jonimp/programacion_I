#include <stdio.h>
#include <stdlib.h>
/*
El siguiente programa indica si un n�mero le�do desde el teclado es par:
main ()
{
int numero;
scanf ("%d", &numero);
if (numero%2 == 0)
printf ("Es un n�mero par");
else
printf ("Es un n�mero impar");
}
a. Convierte el programa en una funci�n void esPar(int unNumero) .
b. Luego convierte el programa en una funci�n int esPar(int unNumero) que
devuelve "verdadero" si es par. �Tendr�a m�s sentido?
c. Piensen cual ser�a su principal diferencia para el usuario programador.

int esPar(int unNumero);
int main(){
	
	int numero;
	scanf ("%d", &numero);
	esPar(numero);
	
	if (numero)
		printf("Numero par");
	else 
		printf("Numero impar");
	return 0;
}
	int esPar(int unNumero){
		
		if (unNumero%2 == 0)
			return 1;
		else
			return 0;
	}
*/
/*Desarrolle la funci�n "mayorDeDos" que reciba dos enteros por par�metro y muestre por
pantalla al mayor de ellos. Luego modif�quela a "getMayorDeDos" para que devuelva el mayor
como resultado.
void mayorDeDos(int primero, int segundo);
int getMayorDeDos(int primero, int segundo);
int main(){
	
	int prim, seg, mayor;
	
	printf("Ingresar dos enteros\n");
		scanf("%d", &prim);
		scanf("%d", &seg);
	
			mayorDeDos(prim, seg);
	
				mayor=getMayorDeDos(prim, seg);
	
	printf("\n\t%d es el mayor", mayor);
	
	return 0;
}
	void mayorDeDos(int primero, int segundo){
		
		
		if(primero>segundo)
			printf("El mayor es: %d", primero);
		else
			printf("El mayor es: %d", segundo);
		
		
	}

		
	int getMayorDeDos(int primero, int segundo){
		
		if(primero>segundo)
			return primero;
		else
			return segundo;
	
	}
*/
/*Desarrolle la funci�n "potencia" que reciba por par�metros un entero X y una potencia Y; y
devuelva por resultado X Y .
int potencia(int bas, int expon);
int main(){
	
	int base, exponente, pot;
	
	printf("Ingresar base: ");
		scanf("%d",&base);
	printf("Ingresar el exponente: ");
		scanf("%d", &exponente);
	
			pot=potencia(base, exponente);
	
			printf("%d", pot);
			
	return 0;
}

	int potencia(int bas, int expon){
		int i, res=1;
		
			for(i=0; i<expon; i++){
				res*=bas;
			}
		return res;			
		}
*/
/*Desarrolle la funci�n "tablaDeMultiplicar" que reciba un entero por par�metro y muestre
por pantalla su tabla de multiplicar de 0 a 10.
void tablaDeMultiplicar(int num);
int main(){
	int numero;
	printf("Ingresar un entero\n");
		scanf("%d", &numero);
	
		tablaDeMultiplicar(numero);
	return 0;
}
	void tablaDeMultiplicar(int num){
		
		int i;
		
		for(i=1;i<=10;i++){
			printf("%d x %d = %d \n",num,i,num*i);
		}	
	}
*/
/*Desarrolle la funci�n "sumaIntervalo" que reciba dos enteros por par�metro y devuelva por
resultado la suma de todos los n�meros enteros entre dichos valores (inclusive).
void sumaIntervalo(int bajo, int alto);
int main(){
	
	int lower, upper;
	printf("Ingresar dos enteros para sumar el intervalo entre ellos\n");
	
		printf("El mas bajo:");
		scanf("%d", &lower);
		printf("El mas alto:");
		scanf("%d", &upper);
	
		sumaIntervalo(lower, upper);
	
	return 0;
}
	
	void sumaIntervalo(int bajo, int alto){
		
		int i, sumatoria=0;
		
		for(i=bajo; i<=alto;i++){
			sumatoria+=i;
	}
		printf("%d", sumatoria);
		
	}
*/
/*Desarrolle la funci�n "menu" que muestre por pantalla 4 opciones, pida ingresar una de esas
opciones y devuelva por resultado la opci�n elegida. La funci�n debe validar que la opci�n
ingresada sea valida si hay 4 opciones, no debo poder elegir la opci�n 6).
void menu();
int main(){
	
	printf("Teclear la opcion deseada: \n");
		
		menu();
	
	return 0;
}
	void menu(){
		int opcion=5;
			
			printf("1-\n");
			printf("2-\n");
			printf("3-\n");
			printf("4-\n");
		
			while(!(opcion>=1 && opcion<=4)){
				
				scanf("%d", &opcion);
				if(!(opcion>=1 && opcion<=4))
					printf("Opcion incorrecta, volver a intentar... ");
				else
					printf("��Exelente!!");
			}		
			
	}
*/
/*Desarrolle la funci�n "esPrimo" que devuelva verdadero si el numero pasado por par�metro es
un numero primo.
void esPrimo(int numero);
int main(){
	
	int num;
	
	printf("Ingresar un numero para validar si es primo");
		scanf("%d", &num);
	
			esPrimo(num);
	
	
	return 0;
}
	void esPrimo(int numero){
		
		int i,cont=0;
		
			for(i=1; i<=numero; i++){
				if(numero%i==0)
					cont++;
			}
			
				if(cont==2)
					printf("Numero primo");
				else 
					printf("No es primo");
	
	}
*/
/*Desarrolle la funci�n "m�ltiplo" que recibe dos valores enteros y emite "verdadero" si el
primero es m�ltiplo del segundo.
void multiplo(int primero, int segundo);
int main(){
	
	int primero, segundo;
	
	printf("Ingresar dos enteros\n");
		scanf("%d", &primero);
		scanf("%d", &segundo);
	
			multiplo(primero, segundo);
	
	return 0;
}
	void multiplo(int primero, int segundo){
		
		if(segundo%primero==0)
			printf("El numero es multiflan");
		else
			printf("No es multiflan");
		
		
	}
*/
/*Desarrolle la funci�n "areaRectangulo" que reciba 3 par�metros (base, altura y �rea)
devolviendo el �rea en los par�metros.
void areaRectangulo(int base, int altura,int* area);
int main(){
	int base, altura, area;
	
		printf("Anotar base del rectangulo\n");
			scanf("%d", &base);
		printf("Anotar altura del rectangulo\n");
			scanf("%d", &altura);
			
				areaRectangulo(base, altura, &area);
				
				printf("\nsuperficie: %d", area);
	return 0;
}
		
	void areaRectangulo(int base, int altura, int* area){
		
		*area = base * altura;

	}
*/
/*Realiza una funci�n de nombre Siguiente tal que, recibiendo un n�mero primo mayor que uno,
devuelva el n�mero primo inmediatamente siguiente y superior a dicho n�mero primo. Por
ejemplo, si se invoca siguiente(7) , la funci�n devolver� el n�mero 11.
void siguiente(int sigPrimo);
int main(){
	int i,primo,cont=0;
	
	printf("Ingresar numero primo,se muestra el siguiente");
		scanf("%d", &primo);
		
		while(cont!=2){
			for(i=1;i<=primo;i++){
				if(primo%i==0)
					cont++;
				
				if(cont!=2)	
				   printf("No es primo, volver a ingresar numero: \n");
				else
					siguiente(primo);
			}
		}
		
		
	
	
	return 0;
}
	void siguiente(int sigPrimo){
		
		int j,cont=0;
		
		
		while(cont==4){
			for(j=1;j<=sigPrimo;j++)
				if(sigPrimo%j==0)
					cont++;
			sigPrimo++;
		}
		printf("El siguiente numero primo es: %d", sigPrimo);
	}
*/		
/*Desarrolle la funci�n void maxmin (int x1, int x2, int* max, int* min); que
recibiendo por par�metros x1 y x2, devuelva el menor de ambos en min y el mayor en max.
void maxmin (int x1, int x2, int* max, int* min); 
int main(){
	int num1, num2, maximo, minimo;
	
		printf("Ingresar dos numeros enteros\n");
			scanf("%d", &num1);
			scanf("%d", &num2);
			
			maxmin(num1,  num2, &maximo, &minimo);
			
				printf("El maximo es %d\n", maximo);
				printf("El minimo es: %d\n", minimo);
	return 0;
}
	void maxmin (int num1, int num2, int* max, int* min){
		
		if(num1>num2){
			*max=num1;
			*min=num2;
		} else{
			*max=num2;
			*min=num1;
		}
		
	}
*/
/*Desarrolle la funci�n void datoValidado (int *dato, int min, int max) que
reciba un m�nimo y un m�ximo por par�metro; que pida por teclado el ingreso de un valor, valide
que el valor este entre min y max y lo devuelva en *dato.
void datoValidado (int *dato, int min, int max);
int main(){
	int minimo=4, maximo=50, dato;
	
		printf("Ingresar valor numerico para validarlo\n");
			scanf("%d", &dato);
				
			datoValidado(&dato,minimo,maximo);
	
	return 0;
}
	void datoValidado (int *dato, int min, int max){
		
		if(*dato>=min && *dato<=max)
			printf("Dato valido");
		else
			printf("Dato invalido");		
	}
*/
/*Desarrolle la funci�n "esBisiesto" que reciba un a�o por par�metro y devuelva "verdadero"
si el a�o es bisiesto (Un a�o es bisiesto si es divisible por 400, o bien si es divisible por 4 pero no
por 100).
int esBisiesto(int anio);
int main(){
	
	int anio;
	printf("Ingresar a�o, para ver si es bisiesto: "); 
		scanf("%d", &anio);
			
			if (esBisiesto(anio))
				printf("Verdadero");
			else
				printf("Falso");
			
	return 0;
}
	int esBisiesto(int anio){
		
		if(anio%4==0)
			return 1;
		else 
			return 0;
		
	}
*/
/*Desarrolle la funci�n "fechaValida" que reciba por par�metro un d�a, un mes y un a�o y
devuelva por resultado "verdadero" si la fecha es v�lida (tener en cuenta a�os bisiestos).
void fechaValida(int dia, int mes, int anio);
int main(){
	int dia, mes, anio;
	printf("Ingresar fecha en el formato dd/mm/aaaa: \n");
		printf("Dia: ");
			scanf("%d", &dia);
		printf("Mes: ");
			scanf("%d", &mes);
		printf("A�o: ");
			scanf("%d", &anio);
	
			fechaValida(dia, mes,anio);
	
	return 0;
}
	void fechaValida(int dia, int mes, int anio){
	int aciertos=0;	
		if(dia>=1 && dia<=31)
			aciertos++;
		if(mes>=1 && mes<=12)
			aciertos++;
		if(anio>0)
			aciertos++;
		
		if(aciertos==3)
			printf("Verdadero");
		else
			printf("Falso");	
		
	}*/
/*Desarrollar una funci�n de encabezado int ordenarMayor(int* v1, int* v2,
int*v3) en la que la funci�n ponga en V1 el menor valor de las tres variables, en v2 el del medio
y en v3 el mayor. Noten el encabezado y el nombre de la funci�n (que haga lo que el nombre de
la funci�n dice que hace).
int ordenarMayor(int* v1, int* v2, int* v3);
int main(){
	
	int v1,v2,v3;
	
	printf("Ingresar tres valores numericos \n");
		scanf("%d", &v1);
		scanf("%d", &v2);
		scanf("%d", &v3);
	
		ordenarMayor(&v1,&v2,&v3);
		
		printf("\nOrden: %d , %d , %d", v1, v2, v3);

		return 0;
}
	int ordenarMayor(int* v1, int*v2, int* v3){
		
		int aux;
			
			if(*v3<*v2 && *v2<*v1){
				aux=*v3;
				*v3=*v1;
				*v1=aux;
			}
			if(*v3<*v1 && *v2<*v3){
				aux=*v1;
				*v1=*v2;
				*v2=*v3;
				*v3=aux;
			}
			if(*v1<*v2 && *v2>*v3){
				aux=*v2;
				*v2=*v3;
				*v3=aux;
			}
			if(*v1>*v2 && *v2<*v3){
				aux=*v1;
				*v1=*v2;
				*v2=aux;
			}
			if(*v1<*v2 && *v2>*v3){
				aux=*v2;
				*v1=*v1;
				*v3=*v2;
				*v2=aux;
			}
			
	return 0;	
	}
*/
/*Luego, an�logo al punto anterior, desarrollen un funci�n int ordenarMenor(int* v1,
int* v2, int*v3) .
int ordenarMenor(int* v1, int* v2, int* v3);
int main(){
	
	int v1,v2,v3;
	
	printf("Ingresar tres valores numericos \n");
	scanf("%d", &v1);
	scanf("%d", &v2);
	scanf("%d", &v3);
	
	ordenarMenor(&v1,&v2,&v3);
	
	printf("\nOrden: %d , %d , %d", v1, v2, v3);
	
	return 0;
}
	int ordenarMenor(int* v1, int*v2, int* v3){
		
		int aux;
		
		if(*v3>*v2 && *v2>*v1){
			aux=*v3;
			*v3=*v1;
			*v1=aux;
		}
		if(*v3>*v1 && *v2>*v3){
			aux=*v1;
			*v1=*v2;
			*v2=*v3;
			*v3=aux;
		}
		if(*v1>*v2 && *v2<*v3){
			aux=*v2;
			*v2=*v3;
			*v3=aux;
		}
		if(*v1<*v2 && *v2>*v3){
			aux=*v1;
			*v1=*v2;
			*v2=aux;
		}
		if(*v1>*v2 && *v2<*v3){
			aux=*v2;
			*v1=*v1;
			*v3=*v2;
			*v2=aux;
		}
		
		return 0;	
	}
*/
/*Con las funciones de los dos puntos anteriores, queda la pregunta: �ser�a posible hacer una �nica
funci�n que pudiera ordenar las tres variables de menor a mayor o de mayor a menor seg�n se
requiera? Plant�enlo, desarr�llenlo y hagan un programa que las utilice. Si pudieron hacerlo,
dieron un gran paso hacia la anidaci�n de funciones.
int ordenFunciones(int* v1, int*v2, int* v3);
int main(){
	int v1,v2,v3;
	
	printf("Ingresar tres valores numericos \n");
	scanf("%d", &v1);
	scanf("%d", &v2);
	scanf("%d", &v3);
	
	ordenFunciones(&v1, &v2, &v3);
	
	printf("\nOrden: %d , %d , %d", v1, v2, v3);
	
	return 0;
}
	int ordenFunciones(int* v1, int*v2, int* v3){
		
		int aux, opcion;
		
	printf("�Como se desea ordenar los numeros?\n");
	printf("1- De menor a mayor.\n");
	printf("2- De mayor a menor.\n");	
		scanf("%d", &opcion);
		
		switch(opcion){
			
		case 1: 
			if(*v3<*v2 && *v2<*v1){
				aux=*v3;
				*v3=*v1;
				*v1=aux;
			}
			if(*v3<*v1 && *v2<*v3){
				aux=*v1;
				*v1=*v2;
				*v2=*v3;
				*v3=aux;
			}
			if(*v1<*v2 && *v2>*v3){
				aux=*v2;
				*v2=*v3;
				*v3=aux;
			}
			if(*v1>*v2 && *v2<*v3){
				aux=*v1;
				*v1=*v2;
				*v2=aux;
			}
			if(*v1<*v2 && *v2>*v3){
				aux=*v2;
				*v1=*v1;
				*v3=*v2;
				*v2=aux;
			}
		break;
			
		case 2:
			if(*v3>*v2 && *v2>*v1){
				aux=*v3;
				*v3=*v1;
				*v1=aux;
			}
			if(*v3>*v1 && *v2>*v3){
				aux=*v1;
				*v1=*v2;
				*v2=*v3;
				*v3=aux;
			}
			if(*v1>*v2 && *v2<*v3){
				aux=*v2;
				*v2=*v3;
				*v3=aux;
			}
			if(*v1<*v2 && *v2>*v3){
				aux=*v1;
				*v1=*v2;
				*v2=aux;
			}
			if(*v1>*v2 && *v2<*v3){
				aux=*v2;
				*v1=*v1;
				*v3=*v2;
				*v2=aux;
			}
		break;	
			
		}
		return 0;
	}
*/
/*Desarrolle la funci�n void acumulador(int* acumCat1, int* acumCat2, char
categor�a) y que acumule en acumCat1 si la categor�a ingresada es 'A' o en acumCat2 si es
'B'. Utilice la funci�n en un programa con un ciclo para que acumule.
void acumulador(int* acumCat1, int*acumCat2, char categoria);
int main(){
	
	int i,acumA=0, acumB=0;
	char cat;
	
	for(i=0;i<10;i++){
	printf("Ingresar categoria: A o B\n");
		
		scanf(" %c",&cat); //MUY IMPORTANTE DEJAR EL ESPACIO ENTRE " Y % PARA QUE NO SE SALTEE LA LECTURA
		
			acumulador(&acumA, &acumB, cat);
	}
	
		printf("Cantidad de categoria A: %d\n", acumA);
		printf("Cantidad de categoria B: %d\n", acumB);
	return 0;
}
	void acumulador(int* acumCat1, int*acumCat2, char categoria){
		
		if (categoria=='A' || categoria== 'a')
			*acumCat1+=1; //EL MODO DE ACUMULAR FUNCIONA ASI Y NO CON OPERADOR ++ 
		else 
			*acumCat2+=1;
		
	}
*/
/*Escribe una funci�n que reciba como par�metro de entrada un n�mero entero y devuelva como
resultado el n�mero de cifras del n�mero.
int cifras(int entero);
int main(){
	
	int numero;
	
	printf("Ingresar un numero entero ");
		scanf("%d", &numero);
		
		printf("Cantidad de cifras: %d", cifras(numero));
	
	return 0;
}
	int cifras(int entero){
		int cant=0;
		while(entero>0){
			entero/=10;
			cant++;
		}
		return cant;
	}
*/
/*Escribe una funci�n que reciba como par�metros de entrada un valor entero y compruebe si se
encuentra comprendido entre dos valores constantes MIN y MAX definidos dentro de la propia
funci�n.
void verificacion(int num);
int main (){
	
	int numero;
	
	printf("Ingresar un entero\n");
		scanf("%d", &numero);
		
		verificacion(numero);
	
	
	return 0;
}
	void verificacion(int num){
		
		int const MIN=2, MAX=150;
		
		if(num>= MIN && num<=MAX)
			printf("Esta dentro del rango");
		else
			printf("No esta comprendido en el rango ");
		
	}
*/
/*Escribe una funci�n que reciba como par�metros de entrada tres n�meros enteros que
representan las longitudes de tres segmentos rectil�neos, y devuelva como resultado un valor
de tipo l�gico que indique si dichos segmentos pueden formar o no un tri�ngulo (la condici�n
necesaria pero no suficiente es que ninguno de los segmentos tenga una longitud superior a la
suma de los otros dos).
int trianguloValido(int a, int b, int c);
int main(){
	
	int ladoA, ladoB, ladoC;
	
	printf("Ingresar tres valores que sean para un triangulo, se validara ");
		scanf("%d", &ladoA);
		scanf("%d", &ladoB);
		scanf("%d", &ladoC);
	
		if(trianguloValido(ladoA,ladoB,ladoC))
			printf("Medidas correctas para formar un triangulo");
		else
			printf("No tiene sentido");
	return 0;
}
	int trianguloValido(int a, int b, int c){
		
	if(a>b+c || b>a+c || c>a+b)
		return 0;
	else 
		return 1;
	}
*/
/*RECOMENDADO: Escribe un programa teniendo en cuenta las siguientes funciones:
----leeOpcion lee la opci�n deseada y comprueba su validez
----men� muestra el men� en la pantalla
----cuadrado, circulo, rect�ngulo, trapecio, tri�ngulo calculan la superficie
correspondiente.

************************************
****** C�LCULO DE SUPERFICIES ******
1. Cuadrado (lado*lado)
2. C�rculo (pi*radio*radio)
3. Rect�ngulo (base*altura)
4. Trapecio (base1+base2)*altura/2)
5. Tri�ngulo (base*altura)/2)
0. Salir del programa
************************************
void leeOpcion();
void menu();
void cuadrado();
void circulo();
void rectangulo();
void trapecio();
void triangulo();
void salir();

int main(){
	
	menu();
	
	leeOpcion();
	
	
	return 0;
}
	void menu(){
		printf("************************************\n");
		printf("****** C�LCULO DE SUPERFICIES ******\n");
		printf("1. Cuadrado (lado*lado)\n");
		printf("2. C�rculo (pi*radio*radio)\n");
		printf("3. Rect�ngulo (base*altura)\n");
		printf("4. Trapecio (base1+base2)*altura/2)\n");
		printf("5. Tri�ngulo (base*altura)/2)\n");
		printf("0. Salir del programa\n");
		printf("************************************\n");
	
	}

	void leeOpcion(){
		int opcion;
		
		scanf("%d", &opcion);
		
		switch(opcion){
			
		case 1: cuadrado();
			break;
		case 2: circulo();
			break;
		case 3: rectangulo();
			break;
		case 4: trapecio();
			break;
		case 5: triangulo();
			break;
		default: 
			break;
		}	
	}

		void cuadrado(){
			int lado;
			printf("Ingresar lado ");
				scanf("%d", &lado);
				printf("Resultado: %d", lado*lado);
		}
		void circulo(){
			float radio;
			printf("Ingresar radio ");
				scanf("%f", &radio);
				printf("Resultado: %f", 3.14*radio*radio);
		}
		void rectangulo(){
			int base, altura;
			printf("Ingresar base ");
				scanf("%d", &base);
			printf("Ingresar altura ");
				scanf("%d", &altura);
				printf("Resultado: %d ", base*altura);
		}
		void trapecio(){
			int base1, base2, altura;
			printf("Ingresar base 1 ");
				scanf("%d", &base1);
			printf("Ingresar base 2 ");
				scanf("%d", &base2);
			printf("Ingresar altura ");
				scanf("%d", &altura);
			printf("Resultado: %d ", (base1+base2)*altura/2);
		}
		void triangulo(){
			int base, altura;
			
			printf("Ingresar base ");
				scanf("%d", &base);
			printf("Ingresar altura ");
				scanf("%d", &altura);
				printf("Resultado: %d", base*altura/2);
		}
*/
/*Realiza un programa que lea un n�mero de hasta 8 cifras y emita por pantalla la cifra resultante
de aplicar el siguiente proceso:
a) Sumar el valor absoluto de todas las cifras del n�mero.
b) Si el valor resultante tiene m�s de una cifra, volver a sumar todas sus cifras sucesivamente
hasta obtener un valor de una �nica cifra.
int absoluto(int num);
int main(){
	
	int numero, sumatoria=10;
	
	
	printf("Ingresar numero que tenga hasta ocho cifras ");
	scanf("%d", &numero);
	fflush(stdin);
	
			while(sumatoria>9){
				sumatoria=absoluto(numero);
			}

				printf("Suma resultante: %d", sumatoria);
		
	return 0;
}
	int absoluto(int num){
		int unidad, suma=0;
		
		while (num>0){
			
			unidad=num%10;
			num=num/10;
			suma+=unidad;
		}
	}*/
/*Construir una funci�n que permita procesar un n�mero desconocido de datos de productos
vendidos, e ingresar por cada uno:
a) identificaci�n del producto (n�mero entero > 0 y menor a 1000), y por cada producto
ingresado:
b) precio de costo, ej: 5.30
c) precio de venta, ej: 9.50
d) cantidad vendida, ej: 25
El ciclo finaliza con identificaci�n del producto 0 (cero). Calcular y emitir:
i) por cada producto, cu�nto dinero le deja de ganancia la venta del mismo. Ej: 9.5 \u2013 5.3 *
25 = 105;
ii) La funci�n main debe emitir el total de productos procesados (no la cantidad vendida)
y las ganancias que se obtuvieron por esas ventas. Ej: se procesaron 43 productos, las
ganancias obtenidas fueron $2398.
void procesoProductos(int* productosProcesados, float* gananciasVentas);
float calculoProducto(int cantidad, float costo, float venta);

int main(){
	
	int productosProcesados=0;
	float gananciasVentas=0;
	
	procesoProductos(&productosProcesados, &gananciasVentas);
	
			printf("\n");
			printf("Cantidad de productos que se procesaron: %d\n", productosProcesados);
			printf("Ganancia total de las ventas: $ %.2f", gananciasVentas);
			
	return 0;
}
	void procesoProductos(int* productosProcesados, float* gananciasVentas){
		
		int idProducto=1, cantidadVendida=0;
		float precioCosto, precioVenta;
		
		printf("Ingresar productos a continuacion o cero(0) para dejar de cargar.\n");
		
			while(idProducto!=0){
				
				printf("ID del producto: ");
					scanf("%d", &idProducto);
				
				if(idProducto!=0){	
					
					printf("Precio de costo: $");
						scanf("%f", &precioCosto);
					printf("Precio de venta: $");
						scanf("%f", &precioVenta);
					printf("Cantidad vendida: ");
						scanf("%d", &cantidadVendida);
					
						*gananciasVentas += calculoProducto(cantidadVendida, precioCosto, precioVenta);
						*productosProcesados+=1;
				}
				
			}
		
	}

		float calculoProducto(int cantidad, float costo, float venta){
			
			float ganancia=0;
			
				ganancia = (venta - costo) * cantidad;
		
			return ganancia;
		}
	
*/
