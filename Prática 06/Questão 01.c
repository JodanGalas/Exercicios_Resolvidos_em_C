#include<stdio.h>
#include<locale.h>
#include<conio.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int const linha = 5, coluna = 5;
	int matriz[linha][coluna], x, i;
	
	for(i = 0; i < linha; i++){
		for(x = 0; x < coluna; x++){
			if (x == i){
				matriz[i][x] = 1;
			}else{
				matriz[i][x] = 0;
			}
		}
	}
	
	for(i = 0; i < linha; i++){
		for(x = 0; x < coluna; x++){
			printf("%d ", matriz[i][x]);
		}
		printf("\n");
	}
}
