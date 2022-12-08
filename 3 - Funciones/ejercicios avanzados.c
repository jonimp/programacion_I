#include <stdio.h>
/*
36) El INSPT requiere de un programa para procesar notas de alumnos de un solo curso. Para ello
se pide un programa que:
a) En main se pida ingresar el numero de curso, cantidad de clases totales y los legajos de
alumnos a procesar
b) Una función que reciba como mínimo un legajo por parámetro y las clases asistidas. Luego
debe pedir por teclado la cantidad de clases asistidas y las 3 notas de sus parciales
c) Otra función que reciba las notas y devuelva el promedio.
d) Al final del programa, se debe emitir: la cantidad total de alumnos, el legajo con el mejor
promedio (ambos datos) y el legajo con mejor asistencia (ambos datos).
*/
int asistencias_notas(int legajo, int clases_totales, float *promedio);
float promedio_notas(float primera, float segunda, float tercera);

int main(){
	int i,curso, total_clases,legajo_alumno, cant_legajos;
	int asistencia,legajo_mejor_prom, legajo_mejor_asist, mejor_asist=0;
	float prom, mejor_prom=0;
		
	printf("Ingresar numero de curso. ");
	scanf("%d", &curso);
	printf("Ingresar cantidad de clases totales. ");
	scanf("%d", &total_clases);
	printf("Ingresar cantidad de legajos de alumnos. ");
	scanf("%d", &cant_legajos);
	
	
	for(i=0; i<cant_legajos; i++){
		
		printf("Ingresar legajo n° %d. ", i+1);
		scanf("%d", &legajo_alumno);
		
		asistencia = asistencias_notas(legajo_alumno, total_clases, &prom);
		
		if(mejor_asist < asistencia){
			
			mejor_asist = asistencia;
			legajo_mejor_asist = legajo_alumno;
		}
		
		if(mejor_prom < prom){
			mejor_prom = prom;
			legajo_mejor_prom = legajo_alumno;
		}
	}
	
	printf("-------------------------------------\n");
	printf("Cantidad total de alumnos: %d\n", cant_legajos);
	printf("Legajo con mejor promedio: %d\n", legajo_mejor_prom);
	printf("Promedio: %.2f\n", mejor_prom);
	printf("Legajo con mejor asistencia: %d\n", legajo_mejor_asist);
	printf("Asistencia %d", mejor_asist);
	
	return 0;
}
	
	int asistencias_notas(int legajo, int clases_totales, float *promedio){
		int i, asistencias;
		float notas[3];
		
		printf("Cantidad de asistencias. ");
		scanf("%d", &asistencias);
		
		if(asistencias <= clases_totales){
			
			printf("Ingresar las 3 notas de parciales:\n");
			
			for(i=0;i<3;i++){
				scanf("%f", &notas[i]);	
			}
			
			*promedio = promedio_notas(notas[0],notas[1],notas[2]);
			
		} else {
			printf("Cantidad invalida de clases.\n");
			asistencias = asistencias_notas(legajo,clases_totales, promedio);
		}
		
		
		return asistencias;
	}
		
		
	float promedio_notas(float primera, float segunda, float tercera){
	
			return (primera+segunda+tercera)/3;
	}
