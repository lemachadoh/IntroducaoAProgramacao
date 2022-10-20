#include <stdio.h>



int main(){

    char caracter, dados[12];
    int vezes = 0;
    FILE *arquivo;

    printf("Informe o nome do arquivo: \n");
    scanf(" %s",dados);

    arquivo = fopen(dados, "r");

    if( arquivo == NULL){
        printf("ERRO AO ARBRIR O ARQUIVO.txt\n");
        return 0;
    }

    printf("Digite um caracter: ");
    scanf(" %c", &caracter);

    while( !feof(arquivo) ){
        if( getc(arquivo) == caracter ){
            vezes++;
        }
    }

    printf("O %c esteve %d vezes em %s\n",caracter,vezes,dados);


    return 0;

}
