#include <stdio.h>
int main(void){

    char nome1[15], nome2[15];
    int id1, id2;

    printf("Digite seu nome: ");
    scanf("%s", nome1);
    printf("Digite sua idade: ");
    scanf("%d", &id1);
    printf("Digite seu nome: ");
    scanf("%s", nome2);
    printf("Digite sua idade: ");
    scanf("%d", &id2);

    if (id1 > id2){
        printf("%s é mais velho que %s\n", nome1, nome2);
    }
    else {
        printf("%s é mais velho que %s\n", nome2, nome1);
    }

    return 0;
}