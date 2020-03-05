//Dados três números, imprimi-los em ordem crescente.
#include <stdio.h>
main (){
	
	int a, b, c;
	
	printf("Informe o primeiro numero: ");
	scanf("%d", &a);
	printf("Informe o segundo numero: ");
	scanf("%d", &b);
	printf("Informe o terceiro numero: ");
	scanf("%d", &c);
	if(a == b && a == b && a == c){
		printf("Todos os numeros sao iguais.");
	}
	if(a<b && a<c && b<c){
		printf("Ordem crescente: %d, %d, %d", a, b, c);
	}
	if(a<b && a<c && c<b){
		printf("Ordem crescente: %d, %d, %d", a, c, b);
	}
	
	if(b<a && b<c && a<c){
		printf("Ordem crescente: %d, %d, %d", b, a, c);
	}
	if(b<a && b<c && c<a){
		printf("Ordem crescente: %d, %d, %d", b, c, a);
	}
	
	if(c>a && c>b && a>b){
		printf("Ordem crescente: %d, %d, %d", c, a, b);
	}
	if(c<a && c<b && b<a){
		printf("Ordem crescente: %d, %d, %d", c, b, a);
	}
}
