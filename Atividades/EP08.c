#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
    char palavra [101], contrario [101];
    int cont = 0, i = 0, j = 0;

    printf("digite a palavra de ate 100 caracteres: ");
    gets(palavra);

    while (palavra[i] != '\0'){
        cont++;
        i++;
    }
    printf("ordem inversa: ");

    for(i = cont; i >= 0; i--){
        if (palavra[i] != '\0'){
            printf("%c", palavra[i]);
            contrario[j] = palavra[i];
            j++;
        }
    }
    contrario [j] = '\0';
    if(strcmp(palavra, contrario) == 0){
        printf("\ne palindromo");
    }else{
        printf("\nnao e palindromo");
    }

return 0;
}
