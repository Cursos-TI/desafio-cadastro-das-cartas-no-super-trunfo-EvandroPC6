#include <stdio.h>

int main(){
    //CARTA 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[15];
    int populacao1; 
    int pontosTuristicos1;
    float area1;
    float pib1;
    float densidade1;
    float pibCapita1;

    //CARTA 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[15];
    int populacao2; 
    int pontosTuristicos2;
    float area2;
    float pib2;
    float densidade2;
    float pibCapita2;

    //CADASTRO CARTA 1
    printf("Carta1: \nEstado de A a H: ");
    scanf(" %c", &estado1);

    printf("Código da Carta de 01 a 04: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área em km²: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;
    pibCapita1 = pib1 / populacao1;

    //CADASTRO DA PROXIMA CARTA
    printf("adicione proxima carta: \n");

    //CADASTRO CARTA 2
    printf("Carta2: \nEstado de A a H: ");
    scanf(" %c", &estado2);

    printf("Código da Carta de 01 a 04: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área em km²: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = (populacao2 / area2);
    pibCapita2 = (pib2 / populacao2);

    //IMPRESSÃO CARTA 1
    printf("Carta1:\nEstado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibCapita1);

    //IMPRESSÃO CARTA 2
    printf("Carta2:\nEstado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.1f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibCapita2);


    return 0;
}