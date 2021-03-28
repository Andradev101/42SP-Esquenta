#include <stdio.h>

int main(){
    //DATA TYPES C
    printf("\n\t*****DATA TYPES C****\n");
    int integer = 10;
    float floatNum = 2.50;
    char characther = 'p';

    printf("\n%d, \n%1.3f, \n%c.\n", integer, floatNum, characther);

    //2 - float division
    printf("\t*****FLOAT DIVISION****\n");
    float num1;
    float num2;
    float result;

    printf("\n\nDigite N1: ");
    scanf("%d", &num1);

    printf("\nDigite N2: ");
    scanf("%d", &num2);

    result = num1/num2;

    printf("o resultado da divisao e: %3.2f", result);

    //3 - for loop
    printf("\n\n\t*****FOR LOOP****\n");

    for(int index = 0; index <= 10; index = index+1){
        printf("Teste: %d\n", index);
    }
    return 0;
}
