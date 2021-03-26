#include <stdio.h>

int FuncCase1(int num){
    num = num*num;
    return num;
}

int FuncCase2(int num1, int num2){
    int res;
    res = num1*num2;
    return res;
}

int FuncCase3(int num1, int num2){
    int res;
    res = (num1*num2)/2;
    return res;
}

int main(){

    int choose;
    int result;

    int side;

    int base;
    int height;



    printf("\t**FORMULAS MATEMATICAS V0.1**\n");

    printf("\n1. Area do quadrado\n2. Area do retangulo\n3. Area do triangulo retangulo\n");
    printf("\nSelecione a formula a ser calculada: ");
    scanf("%d", &choose);

    switch(choose) {
        case 1:
            printf("\n\t**Area do quadrado**");
            printf("\nDigite o valor do lado do quadrado: ");
            scanf("%d", &side);
            result = FuncCase1(side);
            printf("\nA area do quadrado eh: %d", result);
            break;

        case 2:
            printf("\n\t**Area do retangulo**");
            printf("\nDigite o valor da base do retangulo: ");
            scanf("%d", &base);
            printf("\nDigite o valor da altura do retangulo: ");
            scanf("%d", &height);
            result = FuncCase2(base, height);
            printf("\nA area do retangulo eh: %d", result);
            break;

        case 3:
            printf("\n\t**Area do triangulo retangulo**");
            printf("\nDigite o valor da base: ");
            scanf("%d", &base);
            printf("\nDigite o valor da altura: ");
            scanf("%d", &height);
            result = FuncCase3(base, height);
            printf("\nA area do triangulo retangulo eh: %d", result);
            break;
    }

    return 0;
}
