//Calcular a tabuada de um número fornecido pelo usuário multiplicado de 0 a 10.
#include <stdio.h>
main(){
	int a, b, c;
	printf("Informe um numero: ");
	scanf("%d", &a);
	for(b=0; b<=12; b++){
		c = a*b;
		printf("%d x %d = %d\n", a, b, c);
	}
	
}
