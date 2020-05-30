# include <stdio.h>
# include <string.h>

int palindromo(char string[51]) {

    int count = 0;
    for (int decrescente = strlen(string), crescente = 0; decrescente != 0; decrescente --, crescente ++) {
        if (string[crescente] != string[decrescente -1]) {
            count ++;
        }
    }
    return (count == 0) ? 1 : 0;
}
int main(void) {

    char string[51];

    printf("Digite algo: ");
    gets(string);

    printf("'%s'%s � um pal�ndromo.\n", string, (palindromo(string) == 1) ? "" : " n�o");

    linha();

    return 0;
}
