#include<stdio.h>
#include<conio.h>
#include<locale.h>

int primo(int N){
	int resultado, i;
	
	for (i = 2; i <= N / 2; i++){
		if (N % i == 0){
			resultado++;
			break;
		}
	}
	if (resultado == 0){
		return printf("%d � primo", N);
	}else{
		return printf("%d n�o � primo", N);
	}
}


main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	char resultado;
	
	printf("N�mero: ");
	scanf("%d", &x);
	
	resultado = primo(x);
	
	printf("%c", resultado);
	return 0;
}
