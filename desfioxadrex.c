#include <stdio.h>

int main(){
    int rainha, bispo, torre;

    //Rainha 8 casas para esquerda
    printf("***Rainha***\n");
    for(rainha = 0; rainha < 8; rainha++){
        printf("Esquerda\n");
    }
    //Bispo  5 casas para cima, direira
    printf("***Bispo***\n");
    bispo = 0;
    while( bispo < 5){
        printf("Cima, Direita\n");
        bispo++;
    }
    //Torre 5 casas para frente
    printf("***Torre***\n");
    torre = 0;
    do{
        printf("Frente\n");
        torre++;
    }while(torre < 5);
    // Cavalo 2 casas para cima e uma para direira
    printf("***Cavalo***\n");
    for(int cavalo = 0; cavalo < 2; cavalo ++){
        printf("Cima\n");
    }
        for(int cavalo = 0; cavalo < 1; cavalo++){
            printf("Direita\n");
        }
    

    return 0;
}