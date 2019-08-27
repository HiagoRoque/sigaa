#include<stdio.h>

char maiusculo(char letra){
    if (letra >= 'a' && letra <= 'z'){
        return letra - 32;
    }
    return letra;
}

char isletra(char letra){
    if (letra >= 'a' && letra <= 'z' || letra >= 'A' && letra <= 'Z'){
        return 1;
    }
    return 0;
}


int main (void){
    printf("%c", maiusculo('z'));
}

void cdCliente (void){

    char nome[50], email[40];
    int cpf, dia, mes, ano, numNativo;
    char* signos, china;

    printf("Digite seu nome: ");
    scanf("%[a-z A-Z]s", &nome[0]);

    do{
        printf("\nDigite sua data de nascimento: ");
        scanf("%d/%d/%d", &dia, &mes, &ano);
    } while(!(validaData(dia, mes, ano)));

    printf("\nDigite seu email: ");
    scanf("%s", &email[0]);

    do{
    printf("Digite o seu CPF: ");
    printf("%d",&cpf);
    } while(!(validaCpf(cpf)));

    signos = signo(dia,mes,ano);
    china = horoscopo(ano);
    numNativo = numerologia(dia, mes, ano);

    printf("\nDados do usuário: ");
    printf("\nNome: %s",nome);
    printf("\nData de nascimento: %d/%d/&d", dia,mes,ano);
    printf("\nEmail: %s",email);
    printf("\nCPF: %d",cpf);
    printf("\nSigno: %c*",signos);
    printf("\nAnimal no horóscopo chinês: %c*",china);
    printf("\nVocê é nativo do número %d",numNativo);
}