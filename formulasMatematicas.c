#include <stdio.h>

int main(){

    int choose;

    printf("\t**FORMULAS MATEMATICAS V0.1**\n");

    printf("\n1. Area do quadrado\n2. Area do retangulo\n3. Area do triangulo retangulo\n");
    printf("\nSelecione a formula a ser calculada: ");
    scanf("%d", &choose);

    printf("%d", choose);

    switch(choose) {
        case 1:
            printf("u choose %d", choose);
            break;
        case 2:
            printf("u choose %d", choose);
            break;
        case 3:
            printf("u choose %d", choose);
            break;
    }

    return 0;
}
