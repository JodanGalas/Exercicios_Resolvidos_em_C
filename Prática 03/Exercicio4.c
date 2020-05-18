#include <stdio.h>
#include <math.h>
#include <string.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
	char numero[10];
	printf("Digite um número binário: ");
	scanf("%s", &numero);

	int i, tam, novoValor = 0;
	tam = strlen(numero); //verifica quantos dígitos tem no número

	//pega os dígitos da direita para a esquerda
	for (i = tam-1; i >= 0; i--) {
		//printf("%c|", numero[i]);
		if (numero[i] == '1') {
			novoValor += pow(2,tam-1-i);
		}
	}
	printf("O número em decimal é: %d",novoValor);

	return 0;
}
