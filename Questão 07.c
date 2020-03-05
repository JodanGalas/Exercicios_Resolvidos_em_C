//Calcular o fatorial de um número fornecido pelo usuário.
#include <stdio.h>
main(){
	
	int n, i, fat;
	printf("Informe um numero: ");
	scanf("%d", &n);
	fat = 1;
	for (i=1; i<= n; i++){
		fat*=i;
	}
	printf("Fatorial de %d e %d",n, fat );
	
}
