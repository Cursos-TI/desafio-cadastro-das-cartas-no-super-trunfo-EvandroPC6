#include <stdio.h>

int main(){
    char estado1, estado2; 
    char codigo1[4], codigo2[4];
    char nomeCidade1[15], nomeCidade2[15];
    int populacao1, populacao2; 
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2;
    float pib1, pib2;

    //carta1
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

    //cadastro da proxima carta
    printf("adicione a segunda carta: \n");

    //carta2
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

    //impressão carta1
    printf("Carta1:\nEstado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.1f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    //impressão carta2
    printf("Carta2:\nEstado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.1f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
}
