#include <stdio.h>
#define N 3

int main () {

    int i, j;
    float matA[N][N], matB[N][N], matAB[N][N];

    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            printf("informe o valor na posicao [%d][%d]: ", i, j);
            scanf("%f", &matA[i][j]);
        }
    }
    printf("\n");
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            printf("informe o valor na posicao [%d][%d]: ", i, j);
            scanf("%f", &matB[i][j]);
        }
    }
    printf("\nMatriz A:\n");
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            printf("\t%.2f", matA[i][j]);
        }
        printf("\n");
    }


    printf("\nMatriz B:\n");
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            printf("\t%.2f", matB[i][j]);
        }
        printf("\n");
    }
   for(i=0; i<N; i++){
        for(j=0; j<N; j++){
                matAB[i][j]= matA[i][j] + matB[i][j];
        }
   }
    printf("\nA+B:\n");
        for(i=0; i<N; i++){
            for(j=0; j<N; j++){
                printf("\t%.2f", matAB[i][j]);
            }
      printf("\n");
    }

return 0;
}
