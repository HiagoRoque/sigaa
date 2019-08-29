#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char theFool(void);
int tarot(int);

int main(void){
    int n;
    tarot(n);
    return 0;
}

int tarot(int n){
    int resp;
    printf("1 = sim; 0 = não\n");
    printf("Iniciar sorteio? ");
    scanf("%d", &resp);
    
    if (resp == 1){
        n = 0;
        //n = rand();
        //n = n%22;
    }
    else if (resp == 0){
        printf("tente quando quiser...\n");
        return 0;
    }
    else{
        printf("Resposta invalida.\n");
        return 0;
    }


    if (n == 0){

        int Otolo;

        printf("\n---  O Louco  ---\n\n");
        printf("Esta carta significa excentricidade e\n");
        printf("simboliza a descoberta de um mundo novo.\n\n");
        printf("A carta o Louco traz a novidade...,\n");
        printf("a insegurança dos novos começos, a incerteza.\n");
        printf("porque ainda não sabemos o que vai acontecer mas,\n"); 
        printf("traz em si a promessa de que tudo pode acontecer.\n\n");

        printf("Existe um ser mais excentrico que a própria loucura...\n");
        printf("qual o seu nome? ");
        scanf("%d", &Otolo);
        printf("\n\n");
        

        if (Otolo == 1661){
            theFool();
            return 0;
        }
        else {
            printf("Você errou...\n");
            return 0;
        }

    return n;
    }
}

char theFool(void){
    printf("   ,,....-―::.､\n");
    printf("　　|::::::::::::::::::::::::，__　== __　　　,..::::¨:::ヽ.　　　　イギー\n");
    printf("　　|::::::|￣{ヽ;::::::_::{　　　 }::｀ヽ/:::::::::::::::::::＼\n");
    printf("　　i::::::| ｛!ヽ y´　ヽ　　_.ﾉ::::::::l!:::,ｨ ¨ー‐‐､::ヽ\n");
    printf(" 　　‘，:ヽ二.ﾊ〈●〉__　 ､ ｀ヽ::::::::{_） 彡　 /::::/\n");
    printf(" 　　　`　::_:_:::/￣ ‘　､〈●〉ﾉ:::::ヽ ＿_ ノ:::::/\n");
    printf(" 　　　 　 　 |{ 　／ ＼　 ヾ:::::::::l､:::::::::::::::::::ノ\n");
    printf(" 　　　　　　 li 　　　　 ｀ 　.}::::::ﾉ　￣￣￣\n");
    printf(" 　　　　　 　 `　__　　　　ノ:／}__\n");
    printf(" 　　　　　　　　ヾ　二二- ´／..::ヽ\n");
    printf(" 　 　 　 　 　 /::::>-==== .7::::::::::::::}､　　　　　　ﾉ!\n");
    printf(" 　　　　　　　{:::::{　　　　 /::::::::::::::::|::::ー―‐:.､〃\n");
    printf(" 　　　　　　　|:::::|　　 　 /::::::::::::::::/:::::::::::::::::::::.＼\n");
    printf(" 　　　　　　　|:::::ヽ　　 〈::::::::::::::::/:::::::::/::::::::::::::::::}\n");
    printf(" 　　 　 　 　 ,:::::::::::＼　 ∨::::::::/:::::::::/::::::::::::::::::/{\n");
    printf(" 　　　　　　/｀ヽ::::／　￣|ヽ::::/｀ヽ::::{:::::::::::::::::/:: ｰ'l\n");
    printf(" 　　　　 ／　.__／　　　　|　Y｀ｰ‐‐＜､:::::::::::<___:::{∧\n");
    printf(" 　　 _／　ｧ´　　 　 　 　 i　.|　　　　　 ＞-::::::::人　　',\n");
    printf(" 　　{　i ./　　　　　　　 ノ　 ,'　　 　 ／¨¨／￣　　ヽ　ヽ\n");
    printf(" 　　 ー´　　　　　　　 {_i_i_!」　　 r‐' 　／　　　　　　ゝ_i_i」\n");
    printf(" 　　　　　　　　　　　　　　　　　　`ｰ'´ \n");
    return 0;
}