/*
5. Escribe un programa que, a partir de un vector vacío de enteros, permita insertar nuevos
números en posiciones válidas del mismo. El programa emitirá repetidamente al usuario un
menú con cuatro opciones:
a) Insertar delante: Esta opción agrega un número en la primera posición del vector. Deberá
desplazar, si fuese necesario, el resto de los elementos una posición a la derecha. Si el vector
estuviese lleno, se perdería su último elemento.
b) Insertar detrás: agrega un nuevo elemento al final del vector, es decir, en la última celda. Si
el vector estuviese lleno, el elemento se inserta en la última celda del vector y se perdería el
elemento que estaba allí anteriormente.
c) Insertar en una posición dada: Dado un índice del vector, se debe insertar un nuevo
elemento en dicha posición, siempre que el nuevo elemento sea contiguo a los ya existentes.
Por ejemplo, si en el vector hay tres elementos (que ocupan las posiciones 0, 1 y 2) no se permite 
agregar un elemento en la posición 7 porque no forma una secuencia continua, pero
sí se permite en la posición 3. Por otra parte, si la posición dada está ocupada, los elementos
se deben desplazar una posición a la derecha y, si el vector estaba lleno, se pierde el último
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
