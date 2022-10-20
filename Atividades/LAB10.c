#include <stdio.h>

int ler_idades(){

    int idade = 0;

    while(idade < 4 || idade > 14){

        printf(" DIGITE A IDADE:");
        scanf(" %d", &idade);
    }
    return idade;
}


int main(){

    int idade[10], maior=0, menor=15, i;
    float media = 0, soma=0;



    for(i=0; i<10; i++){
        idade[i] = ler_idades();
    }



    for(i=0; i<10; i++){
        soma = soma + idade[i];

    }



    for(i=0; i<10; i++){
        if(idade[i] > maior)
            maior = idade[i];
    }



    for(i=0; i<10; i++){
        if(idade[i] < menor)
            menor = idade[i];
    }


    media = soma /10;
    printf("\n");
    printf("Media: %.2f\n", media);
    printf("Maior idade: %d\n", maior);
    printf("Menor idade: %d\n", menor);

}






