#include<conio.h>
#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int vetA[5],vetB[8],x,i,comum[5],tam=0;

    printf("---VETOR A--- \n");
    for(x=0;x<5;x++){
        printf("Digite um valor: ");
        scanf("%d",&vetA[x]);
    }
    printf("---VETOR B--- \n");
    for(x=0;x<8;x++){
        printf("Digite um valor: ");
        scanf("%d",&vetB[x]);
    }

    for(i=0;i<8;i++){
        for(x=0;x<5;x++){
            if(vetB[i] == vetA[x]){
                comum[x]=vetA[x];
                printf("%d,",comum[x]);
            }
        }
    }




}

