#include <stdio.h>

int main(){

    int produto,quant;
    float p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,total;
    p1=5.00;
    p2=3.00;
    p3=10.00;
    p4=2.10;
    p5=50.00;
    p6=10.0;
    p7=8.90;
    p8=5.60;
    p9=9.99;
    p10=15.87;

    printf("Digite o codigo do produto: ");
    scanf(" %d",&produto);
    printf("Digite a quantidade: ");
    scanf(" %d",&quant);

    switch (produto){
         case 1:
            printf(" Banana R$%.2f\n",p1);
            total=quant*p1;
            printf(" total:%.2f",total);
            break;
        case 2:
            printf(" Pao R$%.2f\n" ,p2);
            total=quant*p2;
            printf(" total: %.2f",total);
            break;
        case 3:
            printf(" Shampoo R$%.2f\n" ,p3);
            total=quant*p3;
            printf(" total:%.2f",total);
            break;
        case 4:
            printf(" Sabonete R$%.2f\n", p4);
            total=quant*p4;
            printf(" total:%.2f",total);
            break;
        case 5:
            printf(" Vinho R$%.2f\n" , p5);
            total=quant*p5;
            printf(" total:%.2f",total);
            break;
        case 6:
            printf(" Cuca R$%.2f\n" , p6);
            total=quant*p6;
            printf(" total:%.2f",total);
            break;
        case 7:
            printf(" Refrigerante R$%.2f\n" , p7);
            total=quant*p7;
            printf(" total:%.2f",total);
            break;
        case 8:
            printf(" Agua R$%.2f\n" , p8);
            total=quant*p8;
            printf(" total:%.2f",total);
            break;
        case 9:
            printf(" Condicionador R$%.2f\n" , p9);
            total=quant*p9;
            printf(" total:%.2f",total);
            break;
        case 10:
            printf(" Vodka R$%.2f\n" , p10);
            total=quant*p10;
            printf(" total:%.2f",total);
            break;

        default:
            printf("Produto nao existe\n");
    }

    return 0;
}
