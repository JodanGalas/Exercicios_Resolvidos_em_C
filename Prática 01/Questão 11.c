#include <stdio.h>
main(){
	
	int n, i, soma;
	printf("Informe um numero: ");
	scanf("%d", &n);
	soma = 0;
	for (i=1; i<= n; i++){
		soma+=i;
	}
	printf("A soma dos %d primeiros numeros naturais e: %d",n, soma );
	
}
