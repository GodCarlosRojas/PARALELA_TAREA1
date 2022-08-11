/***********************************
*Autor: Carlos Andres Rojas Rocha
*Primer tarea de paralela
*fecha:17/8/2022
* Aplicacion que crea un triangulo rectangulo con asteriscos
***********************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void triangulo(){
int lineas, i, j;

/* ESte programa recibe el numero de filas que quiere que tenga el triangulo
Que debe ser menor a 14 e imprime la secuencia de asteriscos para 
crearlo*/

	printf("*===================================================*\n");
	printf("*                   Bienvenido                      *\n");
	printf("*       APP que crea un triangulo rectangulo        *\n");
	printf("*===================================================*\n");
	/*se almacenan el numero de lineas que tendra el triangulo*/
	printf("\nIngrese el numero de lineas del triangulo: ");
	scanf("%i" ,&lineas);
	
	
	if(lineas <=14){
	for(i=1; i<=lineas; i++)
	{
	/*j es el que completa cuantos * tiene cada linea, que siempre sera 1 mas a la anterior*/
	for (j = 0; j < i; j++)
        {
            printf("*");
	}
	printf("\n");
	}
	else{
	printf("\nNo se permiten mas de 14 lineas\n");
	}
}
}

int main(){
	triangulo();
return 0;
}
