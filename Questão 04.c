//Faça um programa que solicite o ano em que uma pessoa nasceu e retorne sua idade.
#include <stdio.h>
main(){
	int ano;
	printf("Informe seu ano de nascimento: ");
	scanf("%d", &ano);
	
	ano = 2020 - ano;
	
	printf("Voce tem %d anos.", ano);
}
