#include <stdio.h>
int main(){

    float p1,p2,m;
    printf("Informe o valor da primeira prova \n");
    scanf(" %f",&p1);

    printf("Informe o valor da segunda prova\n");
    scanf(" %f",&p2);

    m=(p1+p2)/2;

    if (m>=6.0){
        printf("O aluno foi aprovado\n");
    } else{
     printf("O aluno foi reprovado\n");
     }

     printf("%.2f %.2f %.2f", p1, p2, m);

    return 0;
    }
