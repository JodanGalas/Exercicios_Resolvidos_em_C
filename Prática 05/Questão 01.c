# include <stdio.h>
# include <string.h>

int main(void) {

    char frase[100];
    int frase_len;

    do {

        printf("Digite uma frase: ");
        gets(frase);
        frase_len = strlen(frase);
        if (frase_len > 100) {
            printf("Frase com mais de 100 digitos.\n");
            
            }
    }
	while (frase_len > 100);
    for (int index = 0; frase[index] != '\0'; index ++) {
        printf("%c\n", frase[index]);
    }
}
