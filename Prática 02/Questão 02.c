#include<stdio.h>
#include<conio.h>
#include<locale.h>

int primo(int N){
	int resultado = 0, i;
	
	for (i = 2; i <= N / 2; i++){
		if (N % i == 0){
			resultado++;
			break;
		}
	}
	if (resultado == 0){
		return resultado;
	}else{
		return 1;
	}
}



main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x, y, b = 2, resultado, z;
	
	printf("Número: ");
	scanf("%d", &x);
	
	for (y = 1 ; y <= x ; b++){
			z = primo(b);
			if (z == 0){
				printf(" %d +", b);
				resultado = resultado + b;
				y++;
			}
	}
	
	printf("= %d", resultado);
	return 0;
}
