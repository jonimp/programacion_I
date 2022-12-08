#include <stdio.h>
#include <stdlib.h>
#define TAB 3
/*44. Programar el juego TA-TE-TI. Para ello se requiere modelar un tablero de 3 x 3 en el que el
jugador 1 ingresará una coordenada en la que guardará una "x". Luego el jugador 2 ingresara otra
coordenada en la que se guardara una "o". Si la posición ya esta ocupada, el programa deberá
pedir el reingreso de otra coordenada. Una vez completados todos los casilleros (el programa
de darse cuenta cuando esta condición se dé), el programa debe decir qué jugador gano la
partida o si hubo empate (ningún jugador ganó).*/
void mostrarTablero(char tablero [][TAB]);
void ingresarCoordenada(char tablero[][TAB], char coordenada,char turno);
int validacionLugar(char tablero[][TAB], char coordenada);
int finDelJuego(char tablero[][TAB]);
int comprobarSiHayGanador(char tablero[][TAB]);
char conclusion(char tablero[][TAB]);

int main(){
	char tablero [TAB][TAB], turno, ganador, coordenada;
	int i,j, valido=1;
		
	
	for(i=0;i<TAB;i++){
		for(j=0;j<TAB;j++)
			tablero [i][j] = '-'; 
	}	

	
	while(finDelJuego(tablero)){
		system("clear");
		printf("\tTA TE TI\n");
		printf("\nLos lugares se pueden elegir con teclado numerico correspondiendo a sus posiciones\nO con la letra S como su centro y las teclas que la rodean. \n");
		mostrarTablero(tablero);
		
		turno='x';
		printf("\nTurno jugador n° 1\n");
		
		scanf("%c", &coordenada);
		valido = validacionLugar(tablero, coordenada);
		
		while(valido==0){
			printf("Lugar ocupado, volver a ingresar coordenada\n");
			scanf("%d", &coordenada);
			valido = validacionLugar(tablero, coordenada);
		}
		
		ingresarCoordenada(tablero, coordenada, turno);	
		
		system("clear");
		mostrarTablero(tablero);	
		
		if(finDelJuego(tablero)){
			turno='o';
			printf("\nTurno jugador n° 2\n");
			scanf("%c", &coordenada);
			valido = validacionLugar(tablero, coordenada);
			
			while(valido==0){
				printf("Lugar ocupado, volver a ingresar coordenada\n");
				scanf("%c", &coordenada);
				valido = validacionLugar(tablero, coordenada);
			}
			
			ingresarCoordenada(tablero, coordenada, turno);
		}	
		
		
	}
	
	ganador = conclusion(tablero);
	
	if(ganador=='x')
		printf("Gano el jugador 1");
	else if (ganador=='o') 
		printf("Gano el jugador 2");
	else 
		printf("Empate");
	return 0;
}
	
	
	
	//-------------FUNCIONES------------------
	
	void mostrarTablero(char tablero [][TAB]){
		int i,j;
		
		for(i=0;i<TAB;i++){
			for(j=0;j<TAB;j++){
				printf("%c ", tablero [i][j]);
			}
			printf("\n");
			
		}	
	}
		
		
		void ingresarCoordenada(char tablero[][TAB], int coordenada,char turno){
			
			switch(coordenada){
				
			case '7' case 'q': tablero[0][0]=turno;
			break;
			case '8' case 'w': tablero[0][1]=turno;
			break;
			case '9' case 'e': tablero[0][2]=turno;
			break;
			case '4' case 'a': tablero[1][0]=turno;
			break;
			case '5' case 's': tablero[1][1]=turno;
			break;
			case '6' case 'd': tablero[1][2]=turno;
			break;
			case '1' case 'z': tablero[2][0]=turno;
			break;
			case '2' case 'x': tablero[2][1]=turno;
			break;
			case '3' case 'c': tablero[2][2]=turno;
			break;
			
			}
		}
	
				
				int validacionLugar(char tablero[][TAB], char coordenada){
					
					
					if(tablero[decena][unidad]=='-')
						return 1;
					else 
						return 0;
				}
					
					//ESTA FUNCION COMPRUEBA QUE NO QUEDE NINGUN "-" MIENTRAS HAYA ALGUNO SEGUIRA EL CICLO WHILE
					int finDelJuego(char tablero[][TAB]){
						
						int i,j, cuentaFin=0;
						
						for(i=0;i<TAB;i++)
							for(j=0;j<TAB;j++)
							if(tablero[i][j]=='-')
							cuentaFin++;
						
						return cuentaFin;
						
						if(comprobarSiHayGanador(tablero)){
							return 0;
						}
					}
						
					
					
					
						char conclusion(char tablero[][TAB]){
							
							int i,j,cantX=0,cantO=0;
							//COMPROBACION POR FILAS
							for(i=0;i<TAB;i++){
								
								for(j=0;j<TAB;j++){
									
									if(tablero[i][j]=='x')
										cantX++;
									else
										cantO++;
								
											if(cantX==3)
												return 'x';
											if(cantO==3)
												return 'o';
								}
								cantX=0;
								cantO=0;
							}
							
							//COMPROBACION POR COLUMNAS
						
							for(i=0;i<TAB;i++){
								
								for(j=0;j<TAB;j++){
									
									if(tablero[j][i]=='x')
										cantX++;
									else
										cantO++;
									
									if(cantX==3)
										return 'x';
									if(cantO==3)
										return 'o';
								}
								cantX=0;
								cantO=0;
							}
							
							
							//COMPROBACION POR DIAGONAL PRINCIPAL
							
							for(i=0;i<TAB;i++){
		
									if(tablero[i][i]=='x')
										cantX++;
									else
										cantO++;
								
								cantX=0;
								cantO=0;
							}
							if(cantX==3)
								return 'x';
							if(cantO==3)
								return 'o';
							
							
							//COMPROBACION POR DIAGONAL SECUNDARIA
							

							for(i=2;i>=0;i--){
								
								j=0;
								j++;
									if(tablero[j][i]=='x')
										cantX++;
									else
										cantO++;
									
									if(cantX==3)
										return 'x';
									if(cantO==3)
										return 'o';
								
								cantX=0;
								cantO=0;
							}
							if(cantX==3)
								return 'x';
							if(cantO==3)
								return 'o';

							
							
							return 0;
						}
							
							
							int comprobarSiHayGanador(char tablero[][TAB]){
								
								int i,j,cantX=0,cantO=0;
								//COMPROBACION POR FILAS
								for(i=0;i<TAB;i++){
									
									for(j=0;j<TAB;j++){
										
										if(tablero[i][j]=='x')
											cantX++;
										if(tablero[i][j]=='o')
											cantO++;
										
										if(cantX==3)
											return 1;
										if(cantO==3)
											return 1;
									}
									cantX=0;
									cantO=0;
								}
								
								//COMPROBACION POR COLUMNAS
								
								for(i=0;i<TAB;i++){
									
									for(j=0;j<TAB;j++){
										
										if(tablero[j][i]=='x')
											cantX++;
										if(tablero[j][i]=='o')
											cantO++;
										
										if(cantX==3)
											return 1;
										if(cantO==3)
											return 1;
									}
									cantX=0;
									cantO=0;
								}
								
								
								//COMPROBACION POR DIAGONAL PRINCIPAL
								
								for(i=0;i<TAB;i++){
									
									if(tablero[i][i]=='x')
										cantX++;
									if(tablero[i][i]=='o')
										cantO++;
									
									cantX=0;
									cantO=0;
								}
								if(cantX==3)
									return 1;
								if(cantO==3)
									return 1;
								
								
								//COMPROBACION POR DIAGONAL SECUNDARIA
								
								
								for(i=2;i>=0;i--){
									
									j=0;
									j++;
									if(tablero[j][i]=='x')
										cantX++;
									if(tablero[j][i]=='o')
										cantO++;
									
									if(cantX==3)
										return 1;
									if(cantO==3)
										return 1;
									
									cantX=0;
									cantO=0;
								}
								if(cantX==3)
									return 1;
								if(cantO==3)
									return 1;
								
								
								
								return 0;
								
								
								
							}
							
							
				
