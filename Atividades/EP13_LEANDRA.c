#include <stdio.h>
#include <math.h>


typedef struct{

    int x, y;

}Pontos;

#define N 10

int fazparte(Pontos xy,int m, int b){

    int y_Esp;

    y_Esp = ((m * xy.x )+ b);

    if(y_Esp == xy.y){
        return 1;
    }
    return 0;
}

int main(){

    Pontos ponto[N];
    int i, j, m, b;


    printf("Coordenadas \tx\ty\n");
    for(i = 0; i < N; i++){
            printf("Digite as coordenadas do ponto %d: ",i);
            scanf(" %d %d",&ponto[i].x,&ponto[i].y);

    }

    m = (ponto[0].y - ponto[9].y)/(ponto[0].x - ponto[9].x);

    b = (m * (-ponto[9].x) + ponto[9].y);

    printf("\tPontos na reta:\n");

    for(i = 1; i < 9; i++){
        if(  fazparte(ponto[i] ,m ,b)){
            printf(" [%d %d]", ponto[i].x, ponto[i].y);
        }
    }

    return 0;
}
