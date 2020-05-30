#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    char palavra[50];
    int x, i;
    
    printf("Digite uma Palavra para retorna-lá inversamente: ");
    gets(palavra);
    
    x = strlen(palavra);
    
    for(i = x; i >= 0; i--){
    	printf("%c", palavra[i]);
	}
}