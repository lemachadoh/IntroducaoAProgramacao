#include <stdio.h>
#include <math.h>

int lados_triangulo(int a, int b, int c){

	if(a < 0 || b < 0 || c < 0){
        printf("\nnão eh um triangulo");
        return 0;
    }
	if((a < b + c) && (b < a + c) && (c < a + b)){
		if((a == c) && (b == c)){
			printf("triangulo eh equilatero\n");
		}else if((a == c)  || (a == c) || (b == c)){
			printf("triangulo eh isosceles\n");
		}else{
			printf("triangulo eh escaleno\n");
		}
	}
return 1;
	}

void descobre_perimetro(float a, float b, float c){
    float perimetro;

    perimetro = a + b + c;

    printf("\no perimetro do triangulo: %.2f\n", perimetro);
}

float descobre_area(float a, float b, float c){
    float area, p;
    float num1, num2, num3;
    int cont = 0;

    if(a > b){
        if(a > c){
            num3 = a;
            num1 = b;
            num2 = c;
        }else{
            num2 = a;
            num1 = b;
            num3 = c;
        }
        }else{
            if(b > c){
            num1 = a;
            num3 = b;
            num2 = c;
        }else{
            num2 = a;
            num1 = b;
            num3 = c;
        }
    }

    if((num1*num1) + (num2*num2) == (num3*num3)){
        cont = 1;
    }
    if(cont){
        area = (num1*num2)/2;
    }
    else{
        p = (num1+ num2+num3)/2;
        area = sqrt(p*(p - num1)*(p - num2)*(p - num3));
    }

    printf("a area do triangulo: %.2f", area);
}


int main(){
    float a, b, c;
    int tipo;

    printf("digite o primeiro valor: ");
    scanf(" %f", &a);

    printf("digite o segundo valor: ");
    scanf(" %f", &b);

    printf("digite o terceiro valor: ");
    scanf(" %f", &c);

    tipo = lados_triangulo(a, b, c);
    descobre_area(a, b, c);
    descobre_perimetro(a, b, c);


return 0;
}
