//Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.
#include <stdio.h>
main (){
	int n, res;
	printf ("Digite um numero: ");
	scanf ("%d", &n);
	printf("Os %d numeros impares sao: ", n);
	n *= 2;
	for (res=0; n>= res; res++){
		if (res % 2 == 1){
			printf("\n %d", res);
			
			
			
		}		
	}	
}
