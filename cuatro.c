#include <stdio.h>
#include <stdlib.h>

/*Esta funcion es la que imprime la secuencia*/
void fnx(int x)
{
if (x) printf("%d ", x);
}

void primeros(){
 
	printf("*===================================================*\n");
	printf("*                   Bienvenido                      *\n");
	printf("*         Los 10 primeros numeros naturales         *\n");
	printf("*===================================================*\n");
	printf("*Los 10 primeros numeros naturales  son:            *\n");
/*EN la estructura repetitiva for se cre la secuencia d elos primeros 10 naturales*/
	for(int i=1;i<=10;i++)
	fnx(i);	
	printf("\n");
}

int main(){
	primeros();
return 0;
}
