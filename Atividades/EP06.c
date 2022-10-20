#include <stdio.h>

int main () {

    int diam, semana , i, n, s;

    n = 1;

    do{
        printf("Dia em que comeca: ");
        scanf(" %d",&semana);
        printf("Numero de dias: ");
        scanf(" %d",&diam);

        }while((n < 1 || semana > 7) || (diam < 28 || diam > 31));

        printf("_______________________________\n");
        printf("D    S    T    Q    Q    S    S\n");

               s = 8 - semana;

        while (n < semana){
            printf("     ");
            n++; }

        for(i=1; i<=diam; i++){

            if(i < 10){
                printf("%d    ", i);
            }else {
                 printf("%d   ", i);
            }if(i==s) {
                 printf("\n");
                 s+=7;

          }
        }

return 0;
}
