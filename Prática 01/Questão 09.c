//Crie um programa por meio do qual o usu�rio ir� digitar a opera��o desejada e dois valores, ao final dever� ser exibido o resultado da opera��o. 
//Op��es dispon�veis: 1 - Divis�o; 2 - resto da divis�o; 3 - adi��o; 4 - multiplica��o.
//Obs: Utilizar:  do-while (para o menu) e o comando switch.

#include <conio.h>
#include <stdio.h>

main (){
	char a;
 int b, c, d;
 
 do{
   printf ("Escolha uma opera�ao\n");
   printf ("(1)...divisao\n");
   printf ("(2)...resto de divisao\n");
   printf ("(3)...adi�ao\n");
   printf ("(4)...multiplica�ao\n");
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

