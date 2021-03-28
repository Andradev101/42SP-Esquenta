#include <stdio.h>

int main(){
    int num;
    int fat = 1;
    int index;

    scanf("%d", &num);

    for (num; num > 0; num--){
        fat = num * fat;
    }
    printf("\nresultado = %d", fat);
    return 0;
}
