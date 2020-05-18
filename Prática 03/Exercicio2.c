#include<conio.h>
#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int x, vet[10];
    printf("Digite 10 valores: \n");
    for(x=0;x<10;x++){
        scanf("%d",&vet[x]);
    }

    for(x=0;x<10;x++){
        if(vet[x]>20){
            printf("%d ",vet[x]);
        }
    }

}
