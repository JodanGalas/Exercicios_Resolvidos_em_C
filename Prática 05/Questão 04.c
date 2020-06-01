#include<stdio.h>
#include<conio.h>
#include<locale.h>
// Utilização de ponteiros: *variável
// * para pegar o valor da variáveç
// & para pegar o endereço

int qtd_caracteres(char str[]){
    int cont=0,x;
    for(x=0;str[x] != '\0';x++){
        cont=cont+1;
    }
    printf("\nSeu nome contém %d caracteres",cont);
    return cont;
    return 0;
}

int num_vog_con(char *str){
    int contV=0; // contador para vogais
    int contC=0; // contador para consoantes
    int contB=0; // contador para espaços em branco

    for(;*str;str++){
        if(*str == ' '){
            contB++;
        }else if(*str == 'a'||*str =='e'||*str =='i'||*str =='o'||*str =='u'){
            contV++;
        }else{
            contC++;
        }
    }
    printf("\nVogais: %d",contV);
    printf("\nConsoantes: %d",contC);
    printf("\nEm branco: %d",contB);
    return 0;
}

int elimina_vog_bran(char str[]){
    int i,x,aux;
    for(i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u') {
            str[i] = ' ';
        }
    }


// remover espaços em branco
    for(x=0;str[x] != '\0';x++){
        if(str[x] == ' '){
            for(i=x;str[i] != '\0';i++){
                str[i]=str[i+1];
            }
        }
    }
    for(x=0;str[x] != '\0';x++){
        if(str[x] == ' '){
            for(i=x;str[i] != '\0';i++){
                str[i]=str[i+1];
            }
        }
    }
    printf("\nNova string: %s\n", str);
    return 0;
}

int sub_caracter(char str[]){
    int i,x,aux;
    char vari[1];
    printf("Digite um caractere: ");
    gets(vari);


    for(x=0;str[x] != '\0';x++) {
        if (str[x] == vari[0]) {
            str[x] = '*';
        }
    }
    printf("Nova string: %s\n", str);
    return 0;
}




int main(void){
    setlocale(LC_ALL,"Portuguese");
    char nome[100];
    printf("Digite o seu nome: ");
    gets(nome);

    qtd_caracteres(nome);
    num_vog_con(nome);
    elimina_vog_bran(nome);
    sub_caracter(nome);


}
