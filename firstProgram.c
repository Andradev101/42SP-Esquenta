#include <stdio.h>

int main ()
{
/*
    EXERCICIOS APOSTILA

    int base;
    int altura;
    int resultado;

    printf("Formula da area de um retangulo\n");

    printf("Digite o valor da base: ");
    scanf("%d", &base);

    printf("Digite o valor da altura: ");
    scanf("%d", &altura);

    resultado = base * altura;
    printf("Area do retangulo: %d\n", resultado);
    printf("\nArea do triangulo retangulo: %d", resultado/2);
*/


/*

    1.4

    int distancia;
    int fuel;
    int media;

    printf("Determine a distancia: ");
    scanf("%d", &distancia);

    printf("Determine o total de litros de gasolina: ");
    scanf("%d", &fuel);

    media = distancia / fuel;

    printf("\nA media de consumo foi: %d", media);

    return 0;

*/
    int tempF;
    int tempC;

    printf("Informe a temperatura em Farenheit: ");
    scanf("%d", &tempF);

    tempC = (tempF-32) * 5/9;

    printf("\n%d em farenheit e igual %d graus Celsius\n", tempF, tempC);

}
