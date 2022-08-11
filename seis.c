/***********************************
*Autor: Carlos Andres Rojas Rocha
*Primer tarea de paralela
*fecha:17/8/2022
* Aplicacion que crea una matriz de unos
***********************************/

#include <stdio.h>
#include <stdlib.h>


void matriz(){
	int numeros[100][100],filas,columnas;
	// ESte programa crea una matriz de unos, por lo que necesita recibir de
	// entrada el numero de filas y columnas que desea 
	printf("*===================================================*\n");
	printf("*                   Bienvenido                      *\n");
	printf("*             APP que crea una matriz               *\n");
	printf("*===================================================*\n");
	
	
	/*requerimos de un numero de filas y columnas*/
	printf("Digite el numero de filas: ");
	scanf("%i" ,&filas);
	printf("Digite el numero de columnas: "); 
	scanf("%i" ,&columnas);
	
	
	if(filas<=8 && columnas<=8){
	/*primero se crea calumna por columna, y estas formaran las filas*/
	/*Y se llenara de unos*/
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			numeros[i][j]=1;
		}
	} 
	
	printf("\nLa matriz\n");
	/*DE esta forma se imprime la matriz*/
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			printf("%i", numeros[i][j]);
		}
		printf("\n");
	}
	} if(filas>=9  || columnas>=9)
	{
	printf("Tamaño de matriz invalida\n");
	}
	
}

int main(){
matriz();
return 0;
}
