#include <stdio.h>
#include <stdlib.h>

int main()
{
	// ingreso de datos
    int miVariable = 0;
    printf("Ingrese un valor entero: ");
    scanf("%d", &miVariable);
	
	// procesamiento de datos
    miVariable++;
    printf("Incremento en uno: %d\n",miVariable);
    miVariable--;
    miVariable*= miVariable;
    
	// emision de resultados
	printf("el cuadrado es %d\n", miVariable);
    return 0;
}
