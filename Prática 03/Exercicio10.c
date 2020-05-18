#include<conio.h>
#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int vetM[10],vetN[10],x,p=0;
    printf("---VETOR M--- \n");
    for(x=0;x<10;x++){
        printf("Digite um valor: ");
        scanf("%d",&vetM[x]);
    }

    printf("---VETOR N--- \n");
    for(x=0;x<10;x++){
        printf("Digite um valor: ");
        scanf("%d",&vetN[x]);
    }

    for(x=0;x<10;x++){
        p=(vetM[x]*vetN[x])+p;
    }
    printf("O produto escalar de M por N é: %d",p);
}
