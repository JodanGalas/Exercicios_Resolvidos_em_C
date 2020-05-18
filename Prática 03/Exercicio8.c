#include<conio.h>
#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int vet[10],cont=0,x,busca,posicao;

    for(x=0;x<10;x++){
        printf("Digite um valor: ");
        scanf("%d",&vet[x]);
    }
    printf("Digite um valor a ser encontrado: ");
    scanf("%d",&busca);

    for(x=0;x<10;x++){
        if(vet[x]==busca){
            posicao=x;
        }
    }
    printf("\n O número foi encontrado na posição [%d]",posicao);
}

