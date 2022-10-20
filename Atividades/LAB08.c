#include <stdio.h>
#include <string.h>

int main (){

    int i, conta=0;
	char palavra[25], n;

	printf("digite uma palavra de ate 24 letras: ");
	gets(palavra);

	printf("informe uma letra: ");
	scanf("%c", &n);

	for(i=0; palavra[i]!='\0'; i++) {
		if(palavra[i] == n)
			conta++;
	}

	if(conta==0) {
		printf("letra nao encontrada");
	} else {
		printf ("a letra %c aparece %d vezes na palavra", n, conta);
	}

    return 0;
}
