#include<conio.h>
#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int quant=0,x=0;

    printf("Digite a quantidade de números a serem digitados: ");
    scanf("%d",&quant);

    int vet[quant];

    for(x=0;x<quant;x++){
        printf("Digite um valor: ");
        scanf("%d",&vet[x]);
    }

    printf("Sequência na ordem inversa: ");

    for(x=quant-1;x>=0;x--){
       printf("%d ",vet[x]);
    }

}
