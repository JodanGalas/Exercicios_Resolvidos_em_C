#include<stdio.h>
#include<conio.h>
#include<locale.h>

int funcD (int n) {
	
	int qtd = 0; //acumulador dos divisores
	int i; //contador
	
	for(i = 1; i <= n; i++){ // percorrer os valores até o n digitado
		if (n % i == 0){ //se o resto é zero significa que é um divisor
			printf(" %d \n", i); //printa o valor que é um divisor
			qtd++; //incrementa no acumulador
		}
	}
	return qtd;
}

main(){
	
	int x;
	int verifica;
	
	printf("Digite um valor e descubra os seus divisores: ");
	scanf("%d", &x);
	
	verifica = funcD(x);
	
	printf("qtd de Divisores: %d", verifica);
	
	return 0;
}
