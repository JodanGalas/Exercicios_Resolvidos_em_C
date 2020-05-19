#include<stdio.h>
#include<conio.h>
#include<locale.h>

int potencia(int a, int b, int soma){
	if (b != 0){
		soma = soma * a;
		b--;
		return potencia(a, b, soma);
	}else{
		return soma;
	}		
}

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, acumulador, soma = 1;
	
	printf("Digite a base: ");
	scanf("%d", &a);
	
	printf("Digite a potencia: ");
	scanf("%d", &b);
	
	acumulador = potencia(a, b, soma);
	
	printf("%d elevado a %d é %d", a, b, acumulador);
}
