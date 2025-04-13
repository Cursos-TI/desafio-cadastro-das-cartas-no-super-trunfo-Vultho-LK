#include <stdio.h>

int main() {
   //primeira carta
    int populacao1, pontosTuris1;
    float pib1, area1;
    char nome1[50], codigo1[50];

    //segunda carta 
    int populacao2, pontosTuris2;
    float pib2, area2;
    char nome2[50], codigo2[50];

    printf("Bem vindo ao jogo Super Trunfo - Países \n \nNeste jogo vamos criar duas cartas de cidades, vamos começar com a primeira carta!! \n");

    //registrando a primeira carta 
    printf("\nCódigo da cidade: ");
    scanf("%s",codigo1 );

    printf("\nNome da cidade: ");
    scanf("%s",nome1 );

    printf("\nPopulção da cidade: ");
    scanf("%d",&populacao1 );

    printf("\nÁrea da cidade: ");
    scanf("%f",&area1 );

    printf("\nPIB da cidade: ");
    scanf("%f",&pib1 );

    printf("\nnúmero de pontos turisticos da cidade: ");
    scanf("%d",&pontosTuris1 );

    //agora vamos registra a segundo carta
    printf("\nPronto, terminamos a primeira carta, agora vamos para segunda carta. \n");

    printf("\nCódigo da cidade: ");
    scanf("%s",codigo2 );

    printf("\nNome da cidade: ");
    scanf("%s",nome2 );

    printf("\nPopulção da cidade: ");
    scanf("%d",&populacao2 );

    printf("\nÁrea da cidade: ");
    scanf("%f",&area2 );

    printf("\nPIB da cidade: ");
    scanf("%f",&pib2 );

    printf("\nnúmero de pontos turisticos da cidade: ");
    scanf("%d",&pontosTuris2 );

    //agora vamos mostrar os dados cadrastados 
    printf("\nAgora com as duas carta registradas, vou mostra-las. \n");

    printf("\nCarta número 01: \n");
    printf("Código:%s \nNome:%s \nPopulação:%d \nÁrea:%.2f \nPIB:%.2f \nPontos turisticos:%d \n",codigo1 ,nome1 ,populacao1 ,area1 ,pib1 ,pontosTuris1);

    printf("\nCarta número 02: \n");
    printf("Código:%s \nNome:%s \nPopulação:%d \nÁrea:%.2f \nPIB:%.2f \nPontos turisticos:%d \n",codigo2 ,nome2 ,populacao2 ,area2 ,pib2 ,pontosTuris2);

    return 0;
}
