#include<stdio.h>
#include<conio.h>
#include<locale.h>

int par_impar(int x){
	if (x % 2 == 0){
		return printf("1");
	}else{
		return printf("0");
	}
}

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	
	printf("Digite um numero, se ele for par retornará 1 e se for impar retornará 0: ");
	scanf("%d", &x);
	
	par_impar(x);
}
