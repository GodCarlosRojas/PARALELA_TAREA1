#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void calculo(){
int a,b,res;
	printf("*===================================================*\n");
	printf("*                   Bienvenido                      *\n");
	printf("*       APP calculo producto de dos enteros         *\n");
	printf("*===================================================*\n");
	/*Se requiere del ingreso de dos numeros para calcular el prodcuto*/
	printf("\nIngrese el primer numero: ");
	scanf("%i" ,&a);
	printf("\nIngrese el segundo numero: ");
	scanf("%i" ,&b);
	/*Ya capturados se requiere calcular el producto*/
	res=a*b;
	
	printf("\n\nEL producto del numero %i con el numero %i es %i",a,b,res);
	printf("\n");

}

int main(){
	calculo();
return 0;
}
