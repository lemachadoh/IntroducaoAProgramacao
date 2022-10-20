#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define numero 1000

int dado(){

    int d;

    d = rand() %6;
    return d;
}

int main(){

    srand(time(NULL));

    int a [6] = {1,2,3,4,5,6};
    int i;
    int s;

    for(i = 0; i < numero; i++){
        s = dado();
        a[s]++;
    }

    for(i = 0; i < 6; i++){
        printf("\n\tO numero %d foi sorteado %.2f %% dos 1000 sorteios realizados.\n\n", i + 1 , 100 * (double)a[i] / (double)numero);
    }
}
