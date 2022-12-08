
/*
2. Se tiene el archivo pro1.txt . Escriba las instrucciones para abrirlo en modo lectura y cerrarlo.
*//*
#include <stdio.h>
#include <stdlib.h>
#define TE 500
int main(){
	
	FILE *doc;
	char texto;
	
	doc = fopen("pro1.txt", "rt");
	
		while ( (texto = getc(doc))!= EOF){
			printf("%c", texto);
			
		}
		
	fclose(doc);
	
	
	return 0;
}
*/
/*3. Desarrolle una función contarVocales que reciba un archivo de texto ya abierto y
devuelva la cantidad de vocales que hay en el archivo.*//*
#include <stdio.h>
int contarVocales(FILE *texto);
int main(){
	FILE *texto;
	int vocales=0;
	
	texto = fopen("ejercicio3.txt", "rt");
	
	vocales = contarVocales(texto);	
	
	printf("El documento tiene %d vocales", vocales);
	
	fclose(texto);
	
	return 0;
}

	int contarVocales(FILE *texto){
		int vocal=0;
		char letra;
		
		while ((letra = getc(texto)) != EOF){
			
			switch(letra){
			case 'a': vocal++;  
			break;
			case 'e': vocal++;
			break;
			case 'i': vocal++;
			break;
			case 'o': vocal++;
			break;
			case 'u': vocal++;
			break;
			default:
				break;
			}
		}
	
		return vocal;
	}
*/
/*4. Desarrolle un programa que abra el archivo cuento.txt y lo muestre por pantalla.*//*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	FILE *cuento;
	char letra;
	
	cuento = fopen("cuento.txt", "rt");
	
	while ((letra = getc(cuento)) != EOF){
		printf("%c", letra);
	}
	
	fclose(cuento);
	
	return 0;
}
*/

/*5. Desarrolle una función fLog () que reciba una cadena y grabe en un archivo de texto
debug.log el día, la hora y la cadena. La función valida si el archivo existe y lo crea si es
necesario. Para trabajar el día y la hora, revisar este link.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>	
	
void fLog(char cadena[]);
	
	int main() {
		char cadena[20];
		printf("Escibir texto.\n");
		scanf("%s", cadena);
		
		fLog(cadena);
		
		
	return 0;
	}
	
	void fLog(char cadena[]){
		
		FILE *registros;
		
		if(registros = fopen("debug.log", "a+")){
			
		}
		time_t t = time(NULL);
		struct tm *tm = localtime(&t);
		printf("%s", asctime(tm));
	}

	
	
	
	
	
	
	
	
	
