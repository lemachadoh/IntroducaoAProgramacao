#include <stdio.h>
#define N 3

int main (){

    int mat[N][N];
    int i, j, resultado = 0;

    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            printf("informe o valor na posicao [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\n");
    printf("   0\t1\t2\n");
    for(i=0; i<N; i++){
        printf("%d: ", i);
        for(j=0; j<N; j++){
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    for (i=0; i<N; i++){
        for (j=0; j<N; j++){
            resultado = resultado + mat [i][j];
            }
        }


    printf("\na soma dos valores e: %d\n", resultado);

return 0;
}
