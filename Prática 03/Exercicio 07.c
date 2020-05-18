#include<conio.h>
#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int vet[8],x,aux;

    for(x=0;x<8;x++){
        printf("Digite um número: ");
        scanf("%d",&vet[x]);
    }
    for(x=0;x<4;x++){
        aux = vet[x];
        vet[x] = vet[x+4];
        vet[x+4] = aux;
    }

    for(x=0;x<8;x++){
        printf("%d \n",vet[x]);
    }
}




