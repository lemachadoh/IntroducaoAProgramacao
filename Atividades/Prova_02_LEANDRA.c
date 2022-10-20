#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 150

typedef struct filme{

    char nome[30];
    int ano_lan;
    float preco;

}filme ;

int leFilmedoArquivo(filme *fs, char * nome_arq){

    char buffer[80],aux;
    int len,pr,prox;
    char str[30]="";
    char ano[30]="";
    char pre[30]="";
    int num = 0;
    FILE * fp;

    fp = fopen(nome_arq, "r");

    if(fp == NULL){
        printf ("Arquivo inexistente!");
        return -1;
    }

    while( !feof(fp) ){

        strcpy(str,"");
        strcpy(ano,"");
        strcpy(pre,"");

        fgets(buffer,80,fp);
        len = strlen(buffer);



        for(int i=0;i<len;i++){
            if( buffer[i] == ','){
                pr = i+1;
                break;
            }
            else{
                strncat(str,&buffer[i],1);
            }
        }

        for(int i=pr;i<len;i++){

            if(buffer[i] == ','){
                prox = i+1;
                break;
            }
            else{
                strncat(ano,&buffer[i],1);

            }
        }

        for(int i=prox;i<len;i++){
            strncat(pre,&buffer[i],1);
        }

//        printf("nome:%s\n",str);
        strcpy(fs[num].nome,str);
//        printf("ano:%s \n",ano);
        fs[num].ano_lan = atoi(ano);
//        printf("preco:%s \n",pre);
        fs[num].preco = strtod(pre,NULL);

        num++;

    }

        return num;
}

filme leFilme(){

    filme aux;

    printf("Digite o nome do filme: ");
    scanf(" %s", &aux.nome);
    fflush(stdin);

    printf("Digite o ano de lancamento:");
    scanf(" %d", &aux.ano_lan);

    printf("Digite o valor:");
    scanf(" %f", &aux.preco);

    return aux;
}

void imprimeFilme(filme fn){

    printf("Nome do filme: %s\n", fn.nome);

    printf("Ano de lancamento do filme: %d\n", fn.ano_lan);

    printf("Preco do filme: %.2f\n", fn.preco);
}

float totalPrecos(filme *fv,int n_filmes){

    float soma = 0;
    int i = 0;

    for(i=0;i<n_filmes;i++){
        soma = soma + fv[i].preco;
    }

    return soma;
}

void atualizaPrecos(filme *fa, int ano, float desconto, int n_filmes){

    int i;

    for(i=0;i<n_filmes;i++){

        if( fa[i].ano_lan < ano){
            fa[i].preco = (fa[i].preco * (1 - (desconto/100)) ) ;
        }
    }

}

int main(){

    filme vetor_filme[N];
    char arquivo[30];
    int num_filmes, controle = 1, var,ano_des,i;
    float soma,des;

    printf("Digite o nome do arquivo: ");
    gets(arquivo);
    printf("\n");

    num_filmes = leFilmedoArquivo(vetor_filme, arquivo);
    printf("Foram lidos %d filmes\n",num_filmes);

    printf("\n");

    while(controle != 0){


        printf("\t\tDIGITE A OPCAO DESEJADA:\n");
        printf(" 1- insere novo filme\n 2 - total de precos\n 3 - atualiza precos\n 4 - imprime todos os filmes\n 0 - sair\n");
        scanf(" %d", &controle);

        if( (controle > -1 )&& (controle < 5)){

            if(controle == 1){
                var = 1;

                while( var != 0){

                    vetor_filme[num_filmes] = leFilme();
                    num_filmes++;

                    printf("Deseja adicionar mais filmes? \n NAO = 0 \n SIM = 1\n");
                    scanf("%d", &var);
                }

            }
            if(controle == 2){

                soma = totalPrecos(vetor_filme,num_filmes);
                printf("A soma dos filmes e: %.2f\n",soma);
            }
            if(controle == 3){
                printf("Digite o desconto a ser aplicado em porcentagem (sem o %): ");
                scanf(" %f", &des);
                printf("Digite o ano a ser considerado: ");
                scanf(" %d", &ano_des);
                atualizaPrecos(vetor_filme,ano_des,des,num_filmes);
            }

            if(controle == 4){

                for(i=0;i<num_filmes;i++){
                    imprimeFilme(vetor_filme[i]);
                }
            }

        }

    }

            }els

    return 0;
}
