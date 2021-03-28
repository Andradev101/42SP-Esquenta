#include <stdio.h>

//A multiplicação nada mais é do que uma soma sucessiva de um dos fatores.
//A quantidade de vezes que tal fator será somado é definido pelo outro fator da operação.
float multiply(float num1, float  num2){
    float res;
    if(num1 == 0)
        return 0;
    else
    res = multiply(num1 - 1, num2);
    return res+num2;
}

int main(){
    float n1;
    float n2;
    float result;

    printf("\nDigite n1: ");
    scanf("%f", &n1);

    printf("\nDigite n2: ");
    scanf("%f", &n2);

    result = multiply(n1,n2);

    printf("\n\n%.2f", result);

    return 0;
}
