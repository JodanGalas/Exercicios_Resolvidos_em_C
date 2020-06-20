# Lista de Questões 
1. - [ ] 1.	Explique o código abaixo:
```
main( ) { 
		int  num1, num2, * p, * q;
		num1 = 13;
		num2 = 10;
		p  = &num1;
		q = p;          
		*q = 56;    
		printf ("v1:%d\n",num1);
      		printf ("v2:%d\n",num2);
      		printf ("p:%p\n",p);
    		 printf (“q:%p\n",q);
     	 	printf ("p:%d\n",*p);
      	 	printf ("q:%d\n",*q);	
}
```
2. - [ ] Faça um programa que solicite um número (inteiro/positivo) e imprima esse número e o seu endereço de memória (por meio de um ponteiro).

3. - [ ] Seja o seguinte trecho de programa:
```
int i=3, j=5;
int *p, *q;
p = &i;
q = &j;
```
   3.1 Qual é o valor da variável  resultado do tipo int?
* a) resultado=p == &i;
* b) resultado= *p - *q
* c) resultado=(12 + *p)/(*q)+7;

4. - [ ] Qual serão as saídas do seguinte programa?
 ```
#include <stdio.h>
#include <conio.h>
 
int main() {
  int    valor;
  int   *p1;
  float  temp;
  float *p2;
  char   aux;
  char  *nome = "Algoritmos";
  char  *p3;
  int    idade;
  int    vetor[3];
  int   *p4;
  int   *p5;
 
  /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("(a) %d \n", valor);
 
  /* (b) */
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("(b) %.1f \n", temp);
 
  /* (c) */

  p3 = &nome[0];
  aux = *p3;
  printf("(c) %c \n", aux);
 
  /* (d) */
  p3 = &nome[4];
  aux = *p3;
  printf("(d) %c \n", aux);
 
  /* (e) */
  p3 = nome;
  printf("(e) %c \n", *p3);
 
  /* (f) */
  p3 = p3 + 4;
  printf("(f) %c \n", *p3);
 
  /* (g) */
  p3--;
  printf("(g) %c \n", *p3);

/* <h> */
  
vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  
   p4 = vetor;
  idade = *p4;
  printf("(h) %d \n", idade);
 
  /* (i) */
  p5 = p4 + 1;
  idade = *p5;
  printf("(i) %d \n", idade);
 
  /* (j) */
  p4 = p5 + 1;
  idade = *p4;
  printf("(j) %d \n", idade);
 
  /* (l) */
  p4 = p4 - 2;
  idade = *p4;
  printf("(l) %d \n", idade);
 
  /* (m) */
  p5 = &vetor[2] - 1;
  printf("(m) %d \n", *p5);
 
  /* (n) */
  p5++;
  printf("(n) %d \n", *p5);
 
  return(0);
}
```
5. - [ ] Qual é o resultado do seguinte programa?
```
#include <conio.h>
#include <stdio.h>
void main(){
      float vet[5] = {1.1,2.2,3.3,4.4,5.5};
      float *f;
      int i;
      f = vet;
      printf("contador/valor/valor/endereco/endereco");
      for(i = 0 ; i <= 4 ; i++){
            printf("\ni = %d",i);
            printf("   vet[%d] = %.1f",i, vet[i]);
            printf("   *(f + %d) = %.1f",i, *(f+i));
            }}
```
6. - [ ] Explique o código abaixo:
```
#include <stdio.h>
int troca (int *a,int *b); 

main ( ){
 int num1,num2;
 num1=100;
 num2=200;
 troca (&num1,&num2);
 printf ("\nEles agora valem %d %d\n",num1,num2);
 getch();
}

Int troca (int *a,int *b){
 int temp;
 temp=*a;
 *a=*b;
 *b=temp;
}

```
7. - [ ] Reescreva o código acima sem utilizar ponteiro. Quais são os resultados da sua execução? Qual a diferença observada com e sem o uso de ponteiros.

8. - [ ] Crie a função chamada Concatena (char *str_destino, char *str_origem) usando ponteiros.

* **Regras:** - Concatena duas strings. A string de origem permanecerá inalterada e será anexada ao fim da string de destino.
* **Obs**: não é permitido utilizar strcat. (Faça o principal também-> O usuário deverá digitar duas strings que serão passadas por parâmetros para função concatena).

9. - [ ] Mostre na tabela abaixo todos os passos (teste de mesa) e identifique qual será a saída
do programa em C, para os valores lidos (x = 5 e y = 2), suponha que o endereço de memória atribuído para x=0028FF40 e y=0028FF44

```
#include<stdio.h>
#include<conio.h>
void func(int *px, int *py) /*A*/
{
  py = px;                          /*B*/
 *py = (*py) * (*px)*(*py); /*C*/
 *px = *py+*px                 /*D*/
}
void main(void)
{
  int x, y;
  scanf("%d",&x); /*5*/
  scanf("%d",&y); /*2*/
  func(&x,&y);
  printf("x = %d, y = %d\n", x, y);  /*E*/
}
```
| teste de mesa |
Variavel | px | py | x| y
---|---|---|---|---
A | | | | | 
B | | | | | 
C | | | | | 
D | | | | | 
E | | | | | 

10. - [ ] Quais serão as saídas do seguinte programa?
```
main() {
  int    valor,*p1,*p4,*p5,idade,vetor[3];
  float  temp, *p2;
  char   aux,*nome = "Algoritmos", *p3;

  /* (a) */
  valor = 20;
  p1 = &valor;
  *p1 = 50;
  printf("(a) %d \n", valor);
 
  /* (b) */
  temp = 15.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("(b) %.1f \n", temp);
 
  /* (c) */
  p3 = &nome[3];
  aux = *p3;
  printf("(c) %c \n", aux);

/* (d) */
  p3 = &nome[1];
  aux = *p3;
  printf("(d) %c \n", aux);
 
  /* (e) */
  p3 = nome;
  printf("(e) %c \n", *p3);
 
  /* (f) */
  p3 = p3 + 2;
  printf("(f) %c \n", *p3);

/* (g) */
  p3--;
  printf("(g) %c \n", *p3);
 
  /* <h> */
  vetor[0] = 11;
  vetor[1] = 16;
  vetor[2] = 37;
  
  p4 = vetor;
  idade = *p4;
  printf("(h) %d \n", idade);

/* (i) */
  p5 = p4 + 1;
  idade = *p5;
  printf("(i) %d \n", idade);
 
  /* (j) */
  p4 = p5 + 1;
  idade = *p4;
  printf("(j) %d \n", idade);
 
 }
 ```
Saídas:


