#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int const linha = 4, coluna = 4;
	int matriz[linha][coluna], matriz_transposta[linha][coluna], x, i, soma = 0;
	
	for(i = 0; i < linha; i++){
		for(x = 0; x < coluna; x++){
			matriz[i][x] =  rand() % 21;
		}
	}
	
	
	
	printf("Matriz: \n");
	
	for(i = 0; i < coluna; i++){
		for(x = 0; x < coluna; x++){
			printf("%d ", matriz[i][x]);	
		}
		printf("\n");
	}
	
	
	
	printf("\n\nEscolha uma das 4 linhas para visualizar: ");
	scanf("%d", &x);
	
	for(i = 0; i < coluna; i++){
		printf("%d ", matriz[x][i]);
	}
	
	
	
	printf("\n\nEscolha uma das 4 colunas para visualizar: ");
	scanf("%d" , &x);

	for(i = 0; i < linha; i++){
		printf("%d ", matriz[i][x]);
	}
	
	
	
	
	printf("\n\nEscolha uma das 4 linhas para somar os valores: ");
	scanf("%d" , &x);

	for(i = 0; i < coluna; i++){
		soma += matriz[x][i];
	}	
	printf("O resultado é %d", soma);
	

	
	printf("\n\nEscolha uma das 4 colunas para somar os valores: ");
	scanf("%d" , &x);

	for(i = 0; i < coluna; i++){
		soma += matriz[i][x];
	}
	printf("\nO resultado é %d", soma);	
	
	
	printf("\n\nMatriz transposta: \n");
	for(i = 0; i < linha; i++){
		for(x = 0; x < coluna; x++){
			printf("%d ", matriz[x][i]);
		}
		printf("\n");
	}
}
