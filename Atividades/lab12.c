#include <stdio.h>
#include <math.h>

int minhafuncao(int *p){
    int soma = 0, i;

    for(i = 0; i < 8; i++){
        soma = soma + ((pow(2,7-i)) * (p[i]));
    }

    return soma;
}


int main(){

    int meuvetor[8], aux, decimal, i;

    for(i = 0; i < 8; i++){
        aux = -10;

        while((aux > 1) || (aux < 0)){

            printf("%d Digite um numero: ",i);
            scanf(" %d", &aux);

        }
        meuvetor[i] = aux;
        printf("\n");
    }
    printf("\n");
    decimal = minhafuncao(&meuvetor);
    printf("O resultado foi: %d",decimal);

    return 0;

}


