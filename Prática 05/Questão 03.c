# include <stdio.h>
# include <string.h>

int palindromo(char string[51]) {

    int count = 0;
    for (int decres = strlen(string), cres = 0; decres != 0; decres --, cres ++) {
        if (string[cres] != string[decres -1]) {
            count ++;
        }
    }
    return (count == 0) ? 1 : 0;
}
int main(void) {

    char string[51];

    printf("Digite algo: ");
    gets(string);
    printf("'%s'%s E um palindromo.\n", string, (palindromo(string) == 1) ? "" : " nao");
}
