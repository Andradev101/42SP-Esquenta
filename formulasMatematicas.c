#include <stdio.h>
#include <conio.h>
#include <math.h>

float FuncCase1(float num){
    num = num*num;
    return num;
}

float FuncCase2(float num1, float num2){
    float res;
    res = num1*num2;
    return res;
}

float FuncCase3(float num1, float num2){
    float res;
    res = (num1*num2)/2;
    return res;
}

float FuncCase4(float num1, float num2, float num3){
    float res;
    float percentage;

    percentage = num2/100;

    res = num1*percentage*num3;
    return res;
}
float FuncCase5(float num1, float num2){
    float res;
    res = pow(num1, num2);
    return res;
}



int main(){
//menu
    int choose;
//square
    float side;
//retangle/triangle retangle
    float base;
    float height;
//simple fees
    float fee;
    float borrowedCapital;
    float taxFees;
    float time;
    float finalAns;

    float result;


    printf("\t**FORMULAS MATEMATICAS V0.1**\n");

    printf("\n1. Area do quadrado\n2. Area do retangulo\n3. Area do triangulo retangulo\n4. Juros simples\n5. Potenciacao");
    printf("\nSelecione a formula a ser calculada: ");
    scanf("%d", &choose);
    system("cls");

    switch(choose) {
        case 1:
            printf("\nDigite o valor do lado do quadrado: ");
            scanf("%f", &side);
            result = FuncCase1(side);
            printf("\nA area do quadrado eh: %.2f", result);
            break;

        case 2:
            printf("\nDigite o valor da base do retangulo: ");
            scanf("%f", &base);

            printf("\nDigite o valor da altura do retangulo: ");
            scanf("%f", &height);

            result = FuncCase2(base, height);

            printf("%.2f", result);

            printf("\nA area do retangulo eh: %.2f", result);
            break;

        case 3:
            printf("\nDigite o valor da base: ");
            scanf("%f", &base);
            printf("\nDigite o valor da altura: ");
            scanf("%f", &height);
            result = FuncCase3(base, height);
            printf("\nA area do triangulo retangulo eh: %.2f", result);
            break;

        case 4:
            printf("\nDigite o valor emprestado: ");
            scanf("%f", &borrowedCapital);

            printf("\nDigite o tempo a ser pago em anos: ");
            scanf("%f", &time);

            printf("\nDigite a taxa: ");
            scanf("%f", &fee);

            result = FuncCase4(borrowedCapital, fee, time);
            finalAns = result+borrowedCapital;

            printf("\nO juros de %.0f%% em %.0f por %.0f anos eh: %.2f", fee, borrowedCapital, time, result);
            printf("\n\n\t\t\tTotalizando %0.2f\n", finalAns);
            break;

        case 5:
            printf("Digite n1: ");
            scanf("%f", &base);

            printf("Digite a potencia: ");
            scanf("%f", &height);

            result = FuncCase5(base, height);

            printf("%.2f", result);
            break;

        default:
            printf("\nNao disponivel");
    }

    return 0;
}
