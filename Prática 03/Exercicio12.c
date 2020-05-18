#include<conio.h>
#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int vet[10],x,aux;

    for(x=0;x<10;x++){
        printf("Digite um valor: ");
        scanf("%d",&vet[x]);
    }

    for(x=0;x<10;x++){
        if(vet[x] == 0){
            aux = vet[x];
            vet[x] = vet[x+1];
            vet[x+1] = aux;

        }
    }
    for(x=0;x<10;x++){
        printf("%d",vet[x]);
       }
}
