//Dado dois números inteiros positivos a e b, calcular e imprimir a sua soma.
#include <stdio.h>
main(){
	int a, b, soma;
	printf("Digite o primeiro numero: ");
	scanf("%d", &a);
	printf("Digite o segundo numero: ");
	scanf("%d", &b);
	
	soma = a+b;
	
	printf("A soma dos numeros e: %d", soma);
}
