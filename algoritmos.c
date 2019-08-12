#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){
    int i,k;
    srand(time(NULL));
    i = 0;

    while(i<=10){
        k = rand() % 10;
        printf("Valor de k é: %d\n",k);
        i++;
    }
    return 0;
}