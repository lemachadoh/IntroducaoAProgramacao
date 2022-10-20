#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#define v 1000

int n, i;
float porc = 0;

int dado(){
    n = rand() % 6+1;
    fflush(stdin);
    return n;
}

int main (){
    float num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0;
    int prim;

    srand(time(NULL));
    dado();

    prim = n;

    for(i=0; i<v; i++){
        dado();

        if(n==1){
            num1 = num1 + 1;
        }else
            if(n==2){
                num2 = num2 + 1;
        }else
            if(n==3){
                num3 = num3 + 1;
        }else
            if(n==4){
                num4 = num4 + 1;
        }else
            if(n==5){
                num5 = num5 + 1;
        }else
            if(n==6){
                num6 = num6 + 1;
        }
    }
    printf("Primeiro lancamento do dado: %d\nPorcentagem aparicao: %.2f%\n", prim, porc = 0.1666666*100);
    printf("\nAnalise de %d lancamentos do dado: \n", v);
    printf("\nO numero 1 aparece %.2f vezes\nPorcentagem de aparicao: %.2f %", num1, porc = (num1*100)/v);
    printf("\nO numero 2 aparce %.2f vezes\nPorcentagem de aparicao: %.2f %", num2, porc = (num2*100)/v);
    printf("\nO numero 3 aparece %.2f vezes\nPorcentagem de aparicao: %.2f %", num3, porc = (num3*100)/v);
    printf("\nO numero 4 aparece %.2f vezes\nPorcentagem de aparicao: %.2f %", num4, porc = (num4*100)/v);
    printf("\nO numero 5 aparece %.2f vezes\nPorcentagem de aparicao: %.2f %", num5, porc = (num5*100)/v);
    printf("\nO numero 6 aparece %.2f vezes\nPorcentagem de aparicao: %.2f %", num6, porc = (num6*100)/v);
    printf("\n");

return 0;
}

