#include<stdio.h>
int main()
{
    float C, F, K;


printf("Digite a temperatura em celsius:");
scanf(" %f" ,&C);

F=(C*9/5)+32;
K=C+273.15;

printf("\| Celsius   \| Fahrenheit   \| Kelvin    \|\n");
printf(" %f    %f      %f",C,F,K);

    return 0;
}
