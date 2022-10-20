#include <stdio.h>
int main(){

int ini, dmes, i, nulo, sab;

nulo=1;

    do{


        printf("Digite o dia da semana em que comeca: \t");
        scanf(" %d", &ini);
        printf("Digite quantos dias tem o mes:");
        scanf(" %d", &dmes);

    }while((ini < 1 || ini > 7) || (dmes < 28 || dmes > 31) );

    printf("DOM  SEG  TER  QUAR  QUI  SEX  SAB\n");

            sab= 8-ini;

            while( nulo<ini){
        printf("     ");
        nulo++;}

        for(i=1; i<=dmes; i++){

            if(i<10){
                printf("%d    ", i);
            }else{
                printf("%d   ", i);
            }
            if(i==sab){

                printf("\n");
                sab+=7;
            }
        }



return 0;
}
