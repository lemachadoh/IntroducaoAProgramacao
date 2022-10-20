#include <stdio.h>
int main(){

float x,y;
printf("Informe o valor de x:\n");
scanf("%f",&x);
printf("Informe o valor de y: \n");
scanf("%f",&y);

if(x==0 && y==0){
    printf("Origem \n");
    }else{
        if (x==0 && y!=0){
                printf("Eixo Y\n");
                }else{
                    if(x!=0 && y==0){
                        printf("Eixo X\n");
                       }else{
                           if(x>0 && y>0){
                                printf ("Primeiro quadrante\n");
                            }else{
                                if(x<0 && y>0){
                                    printf("Segundo quadrante\n");
                                }else{
                                    if(x<0 && y<0){
                                        printf("Terceiro quadrante\n");
                                            }else{
                                                if(x>0 && y<0){
                                                    printf("Quarto quadrante\n");
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }




printf("%.2f,%.2f",x,y);
return 0;
}
