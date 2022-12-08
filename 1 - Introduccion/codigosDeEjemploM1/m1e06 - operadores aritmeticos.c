#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b=10;
    float precio;

    a=5;        // asignacion de dato
    a=a-1;      // resta de valores y guardado del resultado en una variable
    b=a+b+4;    // suma de variables

    printf("En este punto, la variable a vale %d y la b vale %b\n",a,b);
    printf("Operaciones directamente en el printf: %d\n",a*b);

    // division entera
    precio=10/3;
    printf("Division entera, precio=%2.2f\n",precio);
    // division decimal
    precio=10/3.0;
    printf("Division decimal, precio=%2.2f\n",precio);
    // operador resto
    a=10%3;
    printf("Resto de division entera, a=%d\n\n",a);
    a=b;
    a++;
    printf("Despues del a++, b vale %d y a vale %d\n",b,a);
    /*
    OPERADORES ARITMETICOS CON ASIGNACION
    */
    a=b;
    a+=2;
    printf("Ahora b vale %d y a vale %d\n",b,a);
    a/=2;
    printf("Ahora a vale %d\n",a);

    return 0;
}
