#include<stdio.h>
#include<conio.h>
#include<locale.h>

int print(int x){
	return printf("O resultado da multiplicação é: %d", x);
}

int multiplicar(int x, int y){
	return x * y;
}

int receba(int x){
	int y;
	printf("Digite o primeiro número inteiro positivo N: ");
	scanf("%d", &x);
	printf("Digite o segundo número inteiro positivo N: ");
	scanf("%d", &y);
	return print(multiplicar(x, y));
}

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	
	printf("Multiplicador Atomico: \n");
	printf("Tecle 1 e enter para continuar: ");
	scanf("%d", &x);
	
	receba(x);
}
