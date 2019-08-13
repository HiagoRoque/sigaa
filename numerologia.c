//Exemplo: Suponhamos que você tenha nascido no dia 15 de março (mês 3) de 1985:

//Cálculo de dia e mês: 15+3 = 18 = 1+8 = 9

//Cálculo do ano: 1985 = 1+9+8+5 = 23 = 2+3= 5

//Cálculo final: 9 (dia e mês) + 5 (ano) = 14 = 1+4=5
 
//Portanto, para a numerologia, você tem a personalidade número 5.

//p1 - pegue o dia e mes do aniversario e some, depois some os digitos do resutado.
//p2 - pegue o ano do aniversario e some seus digitos, depois some os digitos do resultado.
//p3 - some os dois resultados anteriores e depois some os digitos do novo resultado.


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main (void){
    int dia, mes, ano, diaf=0, mesf=0, anof=0;
    printf("Digite a data de seu aniversário (dia/mês/ano): ");
    scanf("%d/%d/%d",&dia, &mes, &ano);

    printf("%d\n", dia);
    printf("%d\n", mes);
    printf("%d\n", ano);

    if (ano < 0)
        ano *= -1;
    while (ano){
        anof += ano%10;
        ano/=10;
    }

    if (dia < 0)
        dia *= -1;
    while (dia){
        diaf += dia%10;
        dia/=10;
    }

    if (mes < 0)
        mes *= -1;
    while (mes){
        mesf += mes%10;
        mes/=10;
    }

    printf("%d\n", diaf);
    printf("%d\n", mesf);
    printf("%d\n", anof);

    return 0;
}