#include <stdio.h>
int main(){


float m;
int idades, maior, menor, i;

for( i=0; i<10; i++){
        printf("Informe a idade: %d\n" ,(i+1));

        scanf(" %d", &idades);

        m=idades+m;

        if(i==0){
            maior=idades;
            menor=idades;
        }

        if(idades<menor)
            {menor=idades;
        }if(idades>maior){
            maior=idades;}

        }
    printf("media de idades: %.2f\n", m/i);
    printf("menor idade: %d\n", menor);
    printf("maior idade: %d\n", maior);
return 0;
}

