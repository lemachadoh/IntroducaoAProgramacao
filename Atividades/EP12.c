#include <stdio.h>
#include <math.h>

float menorvalor(float *meuvetor){

    int indicemenor = 0, i;

    for(i = 0; i < 15; i++){
        if(meuvetor[indicemenor] > meuvetor[i]){
            indicemenor = i;
        }
    }
    return meuvetor[indicemenor];
}

float maiorvalor(float *meuvetor){

    int indicemaior = 0, i;

    for(i = 0; i < 15; i++){
        if(meuvetor[indicemaior] < meuvetor[i]){
            indicemaior = i;
        }
    }
    return meuvetor[indicemaior];
}

int main(){

    float meuvetor[15], menor , maior , media , soma = 0;
    int i, elementos = 0;

    for(i = 0; i < 15; i++){

        printf("Digite a nota [%d]:",i);
        scanf(" %f", &meuvetor[i]);

    }

    menor = menorvalor(meuvetor);

    maior = maiorvalor(meuvetor);

    for(i = 0; i < 15; i++){
        if(meuvetor[i]!= menor && meuvetor[i]!= maior){
            elementos++;
            soma = soma + meuvetor[i];
        }

    }

    media = soma / elementos;
    printf("\tMedia: %.2f ",media);

    return 0;
}
