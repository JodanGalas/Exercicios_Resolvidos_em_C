#include<conio.h>
#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int x,vet[10];
    printf("Digite 10 n�meros: \n");

    for(x=0;x<10;x++)
        scanf("%d",&vet[x]);

    for(x=0;x<10;x++)
        printf("Os n�meros digitados s�o: %d \n",vet[x]);
    getch();

}
