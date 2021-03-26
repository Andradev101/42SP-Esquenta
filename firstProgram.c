#include <stdio.h>
int somas(int num)
{
    int result;
    if (num == 0)
        return 0;
    else result = num + somas (num - 1);
    printf("+%d", num);
        return result;
}
int main ()
{
//
//    //EXERCICIOS APOSTILA
//
//    int base;
//    int altura;
//    int resultado;
//
//    printf("Formula da area de um retangulo\n");
//
//    printf("Digite o valor da base: ");
//    scanf("%d", &base);
//
//    printf("Digite o valor da altura: ");
//    scanf("%d", &altura);
//
//    resultado = base * altura;
//    printf("Area do retangulo: %d\n", resultado);
//    printf("\nArea do triangulo retangulo: %d\n", resultado/2);
//
//
//    //1.4
//
//    int distancia;
//    int fuel;
//    int media;
//
//    printf("Determine a distancia: ");
//    scanf("%d", &distancia);
//
//    printf("Determine o total de litros de gasolina: ");
//    scanf("%d", &fuel);
//
//    media = distancia / fuel;
//
//    printf("\nA media de consumo foi: %d em media", media);
//
//    return 0;
//
//    //1.6
//
//    int tempF;
//    int tempC;
//
//    printf("Informe a temperatura em Farenheit: ");
//    scanf("%d", &tempF);
//
//    tempC = (tempF-32) * 5/9;
//
//    printf("\n%d em farenheit e igual %d graus Celsius\n", tempF, tempC);

    //recursividade

    //Faça uma rotina recursiva para calcular a somatória de todos os número de 1 a N (N será lido do teclado).

    int n;
    int resultadoSomas;

    printf("Digite N: ");
    scanf("%d", &n);


    resultadoSomas = somas(n);

    printf("\nO resultado das somas e: %d", resultadoSomas);
}
