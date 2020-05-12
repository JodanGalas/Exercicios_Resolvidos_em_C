//Dado um número inteiro positivo n verificar se é par ou ímpar. 
//Apresente uma mensagem na tela informando o número e o resultado.
//OBS:% utilizado para calcular o resto.
#include <stdio.h>
main(){
	
	int a;
	printf("Informe um numero: ");
	scanf("%d", &a);
	if (a%2==0){
		printf("O numero digitado e par.");
	}
	else{
		printf("O numero e impar.");
	}			
}
