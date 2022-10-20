#include <stdio.h>
int main(){

    int vet[20], ncopia[20], nvezes[20],  a, b, c,ncop,i;
    for(i=0;i<20;i++){
        nvezes[i]=0;
    }


    for (a=0; a<20; a++){
        printf(" Informe os valores %d: \n", (a+1));
        scanf(" %d", &vet[a]);
    }
    ncopia[0]=vet[0];
    ncop=1;

    for(c=0; c<20; c++){
        for(i=0 ; i<ncop;i++){
            if(vet[c]== ncopia[i]){
                break;
            }
            if(i==ncop-1){
                ncopia[ncop]=vet[c];
                ncop++;
            }
        }
    }


    for (b=0; b<ncop; b++ ){
        for(i=0; i<20; i++){
            if(ncopia[b]==vet[i]){
                nvezes[b]++;
            }
        }
    }
    for(i=0;i<ncop;i++){
        printf(" %d repetes %d vezes:\n" ncopia[i],nvezes[i]);
    }

return 0;

}
