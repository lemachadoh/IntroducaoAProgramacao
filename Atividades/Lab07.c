#include <stdio.h>

int main () {


    int a;
    float valor [20];


    for(a=0; a<20; a++){
        printf("informe o numero %d: ", (a+1));
        scanf("%f", &valor[a]);
    }



    printf("ordem inversa: ");



    for(a=19; a>=0; a--){
        printf("%.2f ", valor [a]);
    }

return 0;
}
