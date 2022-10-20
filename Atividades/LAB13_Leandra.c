#include <stdio.h>
#include<string.h>

struct Caes{

    char nome[15], raca[20];
    int idade;

};


int main(){

    struct Caes  dog[10];
    int i, maisvelho = 0;
    char raca[20];


    for(i = 0; i < 10; i++){

        printf("Informe o nome do animal: ");
        scanf(" %s", &dog[i].nome);
        fflush(stdin);

        printf("Informe a idade do animal: ");
        scanf(" %d", &dog[i].idade);

        printf("Informe a raca do animal: ");
        scanf(" %s", &dog[i].raca);

        printf("\n");
    }

     printf("Digite a raca: ");
     scanf(" %s",raca);

     for(i = 0; i < 10; i++){
        if( !strcmp(raca,dog[i].raca) ){
                printf("nome: %s    ",dog[i].nome);
            if(dog[i].idade > dog[maisvelho].idade){
                maisvelho = i;
            }
        }
     }

    printf("\nmais velho: %d",dog[maisvelho].idade);



    return 0;
}

//Nome: 15 caracteres
// Idade: inteiro
//Raça: 20 caracteres
