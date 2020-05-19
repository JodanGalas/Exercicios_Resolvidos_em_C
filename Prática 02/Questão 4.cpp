#include<stdio.h>
#include<conio.h>
#include<locale.h>

int funcT (int l1, int l2, int l3){
	
	int eq = 1;
	int esc = 2;
	int iso = 3;
	int errado = 4;
	
	if (l1 + l2 >= l3 && l2 + l3 >= l1 && l1 + l3 >= l2){
		if (l1 == l2 && l2 == l3 && l3 == l1){
			return eq;
		}
		else if (l1 == l2 || l2 == l3 || l1 == l3){
			return esc;
		}
		else if (l1 != l2 && l2 != l3 && l1 != l3){
			return iso;
		}
	}
	else{
		return errado;
	}
	
}


main (){
	
	setlocale(LC_ALL, "Portuguese");
		
	int ld1;
	int ld2;
	int ld3;
	int result;
	
	printf("Descobrindo tipo do trangulo \n");
	
	printf("Digite o lado 1: ");
	scanf("%d", &ld1);
	
	printf("Digite o lado 2: ");
	scanf("%d", &ld2);
	
	printf("Digite o lado 3: ");
	scanf("%d", &ld3);
	
	result = funcT(ld1, ld2, ld3);
	
	if(result == 1){
		printf("Seu triangulo é EQUILÁTERO");
	}
	else if(result == 2){
		printf("Seu triangulo é ESCALENO");
	}
	else if (result == 3){
		printf("Seu triangulo é ISÓCELES");
	}
	else{
		printf("Os valores informados não correspondem a um triangulo");
	}


}
