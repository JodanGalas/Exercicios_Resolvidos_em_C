//Crie um programa por meio do qual o usuário irá digitar a operação desejada e dois valores, ao final deverá ser exibido o resultado da operação. 
//Opções disponíveis: 1 - Divisão; 2 - resto da divisão; 3 - adição; 4 - multiplicação.
//Obs: Utilizar:  do-while (para o menu) e o comando switch.

#include <conio.h>
#include <stdio.h>

main (){
	char a;
 int b, c, d;
 
 do{
   printf ("Escolha uma operaçao\n");
   printf ("(1)...divisao\n");
   printf ("(2)...resto de divisao\n");
   printf ("(3)...adiçao\n");
   printf ("(4)...multiplicaçao\n");
   scanf("%c",&a);
 } while ((a !='1')&&(a !='2')&&(a !='3')&&(a !='4'));
 
 switch (a){
   case '1': 
   		printf ("DIgite o primeiro numero");
   		scanf("%d", &b);
   		
   		printf ("DIgite o segundo numero");
   		scanf("%d", &c);
   		
   		d = (b/c);
   		printf("O resultado e: %d", d);
        break;
         
         
   case '2':
   		printf ("DIgite o primeiro numero");
   		scanf("%d", &b);
   		printf ("DIgite o segundo numero");
   		scanf("%d", &c);
   		d = (b%c);
   		printf("O resultado e: %d", d);
        break;
   case '3': 
   		printf ("DIgite o primeiro numero");
   		scanf("%d", &b);
   		printf ("DIgite o segundo numero");
   		scanf("%d", &c);
   		d = (b+c);
   		printf("O resultado e: %d", d);
        break;
    case '4':
		printf ("DIgite o primeiro numero");
   		scanf("%d", &b);
   		printf ("DIgite o segundo numero");
   		scanf("%d", &c);
   		d = (b*c);
   		printf("O resultado e: %d", d);
        break;
   }
   getch(); 
}

