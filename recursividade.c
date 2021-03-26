#include<stdio.h>

int getDigits(int n1)
{
    static int cont  = 1;
    if(n1 <= 9)
        return 1;
    else{
        getDigits(n1/10);
        cont++;
    }
    return cont;
}

 int main()
{
    int num, result;

    printf("Digite o numero: ");
    scanf("%d", &num);

    result = getDigits(num);

    printf("%d", result);

 return 0;
}
