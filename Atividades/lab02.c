#include <stdio.h>
int main()
{
    float p1,p2,p3,p4,m1,m2,mg;
    printf("1 valor\n");
    scanf(" %f",&p1);

    printf("2 valor\n");
    scanf(" %f",&p2);

    printf("3 valor\n");
    scanf(" %f",&p3);

    printf("4 valor\n");
    scanf(" %f",&p4);

    m1=(p1+p2)/2;

    m2=(p3+p4)/2;

    mg=(m1+m2)/2;

    printf("media 1= %.2f \n",m1);
    printf("media 2= %.2f \n",m2);
    printf("média geral= %.2f\n",mg);

    return 0;
}

