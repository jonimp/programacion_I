/*
5. Escribe un programa que, a partir de un vector vac�o de enteros, permita insertar nuevos
n�meros en posiciones v�lidas del mismo. El programa emitir� repetidamente al usuario un
men� con cuatro opciones:
a) Insertar delante: Esta opci�n agrega un n�mero en la primera posici�n del vector. Deber�
desplazar, si fuese necesario, el resto de los elementos una posici�n a la derecha. Si el vector
estuviese lleno, se perder�a su �ltimo elemento.
b) Insertar detr�s: agrega un nuevo elemento al final del vector, es decir, en la �ltima celda. Si
el vector estuviese lleno, el elemento se inserta en la �ltima celda del vector y se perder�a el
elemento que estaba all� anteriormente.
c) Insertar en una posici�n dada: Dado un �ndice del vector, se debe insertar un nuevo
elemento en dicha posici�n, siempre que el nuevo elemento sea contiguo a los ya existentes.
Por ejemplo, si en el vector hay tres elementos (que ocupan las posiciones 0, 1 y 2) no se permite 
agregar un elemento en la posici�n 7 porque no forma una secuencia continua, pero
s� se permite en la posici�n 3. Por otra parte, si la posici�n dada est� ocupada, los elementos
se deben desplazar una posici�n a la derecha y, si el vector estaba lleno, se pierde el �ltimo
elemento.
d) Finalizar el programa.
*/

#include <stdio.h>
#define DIM 5

void menu();
void desplazarDelante(int posiciones[], int numReemplazo);
void desplazarDetras(int posiciones[], int numReemplazo);
void insertarEnPosicion(int posicion[], int numReemplazo);

int main(){
	char opcion;
	int i,reemplazo;
	int posiciones[DIM] = {0,0,0,0,0};
	
	
	while(opcion !='d'){
			
		menu();
			scanf(" %c", &opcion);
		
			if(opcion != 'd'){
				printf("Numero a insertar: ");
				scanf(" %d",&reemplazo);
	
					switch(opcion){
						
					case 'a': desplazarDelante(posiciones, reemplazo);
						break;
					case 'b': desplazarDetras(posiciones, reemplazo);
						break;
					case 'c': insertarEnPosicion(posiciones, reemplazo);
						break;
					default : 
						break;
					}
			}
	}
	
			for(i=0;i<DIM;i++){
				printf("%d , ", posiciones[i]);
			}
			
	return 0;
}
	
	
																					void menu(){
																						
																						printf("A-Insertar delante\n");
																						printf("B-Insertar detras\n");
																						printf("C-Insertar en una posicion dada\n");
																						printf("D-Salir\n");
																					}
		
															
		
	void desplazarDelante(int posiciones[], int numReemplazo){
		int i,j=DIM-1;
		for(i=DIM-2;i>=0;i--){
				posiciones[j]=posiciones[i];
				j--;
		}
		posiciones[0] = numReemplazo;

	}	
		
		
		
																					void desplazarDetras(int posiciones[], int numReemplazo){
																						int i,j=1;
																						for(i=0;i<DIM;i++){
																							posiciones[i]=posiciones[j];
																							j++;
																						}
																						posiciones[DIM-1] = numReemplazo;
																						
																					}

														
																	
		void insertarEnPosicion(int posiciones[], int numReemplazo){
			int i, pos;
			
			printf("Indicar posicion de 0 a %d: ", DIM-1);
				scanf("%d", &pos);
				
				for(i=DIM-1;i>=pos;i--){
						posiciones[i]=posiciones[i-1];
						
				}
					posiciones[pos] = numReemplazo;
																		
		}
