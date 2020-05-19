#include <stdio.h>

main (){
	int x, n, c, soma;
	printf ("Digite um numero: ");
	scanf ("%d", &x);
	printf ("Digite um inteiro nao negativo: ");
	scanf ("%d", &n);
	soma = x;
	for(c=1; c-n; c++){
		soma*= x;
		
	}
	printf("O valor de %d elevado a %d e: %d", x, n, soma);
	
}
