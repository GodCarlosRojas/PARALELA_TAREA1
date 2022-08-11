#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void distancia(){
float distancia, x1, x2, y1, y2;
	printf("*===================================================*\n");
	printf("*                   Bienvenido                      *\n");
	printf("*       APP calculo la distancia entre dos punto    *\n");
	printf("*===================================================*\n");
	/*se almacenan las coordenadas de ambos puntos*/
	printf("\nIngrese coordenada en x del primer punto: ");
	scanf("%f" ,&x1);
	printf("\nIngrese coordenada en y del primer punto: ");
	scanf("%f" ,&y1);
	printf("\nIngrese coordenada en x del segundo punto: ");
	scanf("%f" ,&x2);
	printf("\nIngrese coordenada en y del segundo punto: ");
	scanf("%f" ,&y2);
	/*Se calcula la distancia de ambos puntos*/
	distancia=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("\nLa distancia entre ambos puntos es de %f",distancia);
	printf("\n");
}

int main(){
	distancia();
return 0;
}
