#include <stdio.h>

int main(){
    int numero,max,pri;
    pri = 1;

     do{
            printf("Digite um numero: \n");
            scanf(" %d",&numero);
            if(pri){
                max=numero;
                pri--;
            }
            if(numero>max){
                max=numero;

                }
            }while(numero!=0);
        printf("Maior numero: %d\n",max);

return 0;
}
