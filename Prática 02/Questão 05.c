#include<stdio.h>
#include<conio.h>
#include<locale.h>

int fatorial(int n){
	if(n == 0){
		return 1;
	}else{
		return n * fatorial(n-1);
	}
}

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	printf("O fatorial de %d é %d", n, fatorial(n));
}
