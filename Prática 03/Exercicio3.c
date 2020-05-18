#include<conio.h>
#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int x, i=0, n, vet[10], cont=0,maior=0;
    float media=0,soma=0;

    printf("Digite 10 valores: \n");

    for(x=0;x<10;x++){
        scanf("%d",&n);
        if(n%2 == 0){
            vet[i]=n;
            i=i+1;
            cont=cont+1;
            soma=soma+n;
            if(n>maior){
                maior=n;
            }
         }else{
            vet[i]=NULL;
        }
    }
    media=soma/cont;

    printf("Quantidade de valores armazenados: %d \n",cont);
    printf("Maior valor digitado: %d \n",maior);
    printf("A média é: %.1f",media);


}
