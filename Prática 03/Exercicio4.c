#include <stdio.h>
#include <math.h>
#include <string.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
	char numero[10];
	printf("Digite um n�mero bin�rio: ");
	scanf("%s", &numero);

	int i, tam, novoValor = 0;
	tam = strlen(numero); //verifica quantos d�gitos tem no n�mero

	//pega os d�gitos da direita para a esquerda
	for (i = tam-1; i >= 0; i--) {
		//printf("%c|", numero[i]);
		if (numero[i] == '1') {
			novoValor += pow(2,tam-1-i);
		}
	}
	printf("O n�mero em decimal �: %d",novoValor);

	return 0;
}
