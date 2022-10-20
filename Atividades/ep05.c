#include <stdio.h>
int main(){

    int idade;
    float salario;
    char sexo;
    int idadesf;
    int idadesm;
    float salariof;
    float salariom;
    int nf;
    int nm;
    char cont;
    float msalariof;
    float midadef;
    float msalariom;
    float midadem;


    idadesf=0;
    idadesm=0;
    nf=0;
    nm=0;
    printf("Coloque todas as informacoes em letras maiusculas.");
    do{
            printf("\nDigite o sexo: ");
            scanf(" %c",&sexo);

            printf("Digite a idade: ");
            scanf(" %d",&idade);

            printf("Digite o salario: ");
            scanf(" %f",&salario);

            if( sexo== 'F' ){
                    idadesf = idadesf + idade;
                    salariof = salariof + salario;
                    nf = nf + 1;
            }else{
                    idadesm = idadesm + idade;
                    salariom = salariom + salario;
                    nm = nm + 1;
                }

            printf("Adicionar mais pessoas, responda com S ou N: ");
            scanf(" %c",&cont);

    }while( cont=='S' );

        if( nf ){

            msalariof = salariof/nf;
            midadef = idadesf/nf;
            printf("\nMedia salarios F: %.2f\n",msalariof);
            printf("Media idades F: %.2f\n",midadef);

        }
        if(nm){

            msalariom = salariom/nm;
            midadem = idadesm/nm;
            printf("\nMedia salarios M: %.2f\n",msalariom);
            printf("Media idades M: %.2f\n",midadem);

    }

    return 0;
}
