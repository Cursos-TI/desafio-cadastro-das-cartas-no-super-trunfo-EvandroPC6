#include <stdio.h>
#include <stdlib.h>

int main() {
    //CARTA 1 e 2
    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char nomeCidade1[15], nomeCidade2[15];
    unsigned long int populacao1, populacao2; 
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float pibCapita1, pibCapita2;
    float superPoder1, superPoder2;
    int opcao1, opcao2;
    unsigned long int carta1, carta2;

    //CADASTRO CARTA 1
    printf("Carta1: \nEstado de A a H: ");
    scanf(" %c", &estado1);

    printf("Código da Carta de 01 a 04: ");
    scanf("%s", codigo1);
   
    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade1);

    printf("População: ");
    scanf("%ld", &populacao1);

    printf("Área em km²: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;
    pibCapita1 = pib1 / populacao1;

    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibCapita1 + (1 / densidade1);

    //IMPRESSÃO CARTA 1
    printf("Carta1:\nEstado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibCapita1);
    printf("Super Poder: %f\n", superPoder1);

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
    scanf("%ld", &populacao2);

    printf("Área em km²: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = (populacao2 / area2);
    pibCapita2 = (pib2 / populacao2);

    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibCapita2 + (1 / densidade2);

    //IMPRESSÃO CARTA 2
    printf("Carta2:\nEstado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.1f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibCapita2);
    printf("Super Poder: %f\n", superPoder2);

    //Escolha de Atributo
    printf("Escolha o primeiro atributo para comparar\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    scanf("%d", &opcao1);

    printf("Escolha o segundo atributo para comparar\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    scanf("%d", &opcao2);

    switch (opcao1)
    {
    case 1:
        printf("Comparação de cartas (Atributo: População): \n");
        printf("Carta 1 - %s: %ld\n", nomeCidade1, populacao1);
        printf("Carta 2 - %s: %ld\n", nomeCidade2, populacao2);
        carta1 >= populacao1;
        carta2 >= populacao2;
        break;
    case 2:
        printf("Comparação de cartas (Atributo: Área): \n");
        printf("Carta 1 - %s: %.1f km²\n", nomeCidade1, area1);
        printf("Carta 2 - %s: %.1f km²\n", nomeCidade2, area2);
        carta1 >= area1;
        carta2 >= area2;
        break;
    case 3:
        printf("Comparação de cartas (Atributo: PIB): \n");
        printf("Carta 1 - %s: %.2f\n", nomeCidade1, pib1);
        printf("Carta 2 - %s: %.2f\n", nomeCidade2, pib2);
        carta1 >= pib1;
        carta2 >= pib2;
        break;
    case 4:
        printf("Comparação de cartas (Atributo: Número de pontos turísticos): \n");
        printf("Carta 1 - %s: %d\n", nomeCidade1, pontosTuristicos1);
        printf("Carta 2 - %s: %d\n", nomeCidade2, pontosTuristicos2);
        carta1 >= pontosTuristicos1;
        carta2 >= pontosTuristicos2;
        break;
    case 5:
        printf("Comparação de cartas (Atributo: Densidade Populacional): \n");
        printf("Carta 1 - %s: %.2f hab/km²\n", nomeCidade1, densidade1);
        printf("Carta 2 - %s: %.2f hab/km²\n", nomeCidade2, densidade2);
        carta1 <= densidade1;
        carta2 <= densidade2;
        break;
    default:
        printf(" Primeiro Atributo invalido");
        break;
    }

    if (opcao1 == opcao2){
        printf("Os atributos não podem ser iguais\n");
    } else {
        switch (opcao2)
        {
        case 1:
            printf("Comparação de cartas (Atributo: População): \n");
            printf("Carta 1 - %s: %ld\n", nomeCidade1, populacao1);
            printf("Carta 2 - %s: %ld\n", nomeCidade2, populacao2);
            carta1 >= populacao1;
            carta2 >= populacao2;
            break;
        case 2:
            printf("Comparação de cartas (Atributo: Área): \n");
            printf("Carta 1 - %s: %.1f km²\n", nomeCidade1, area1);
            printf("Carta 2 - %s: %.1f km²\n", nomeCidade2, area2);
            carta1 >= area1;
            carta2 >= area2;
            break;
        case 3:
            printf("Comparação de cartas (Atributo: PIB): \n");
            printf("Carta 1 - %s: %.2f\n", nomeCidade1, pib1);
            printf("Carta 2 - %s: %.2f\n", nomeCidade2, pib2);
            carta1 >= pib1;
            carta2 >= pib2;
            break;
        case 4:
            printf("Comparação de cartas (Atributo: Número de pontos turísticos): \n");
            printf("Carta 1 - %s: %d\n", nomeCidade1, pontosTuristicos1);
            printf("Carta 2 - %s: %d\n", nomeCidade2, pontosTuristicos2);
            carta1 >= pontosTuristicos1;
            carta2 >= pontosTuristicos2;
            break;
        case 5:
            printf("Comparação de cartas (Atributo: Densidade Populacional): \n");
            printf("Carta 1 - %s: %.2f hab/km²\n", nomeCidade1, densidade1);
            printf("Carta 2 - %s: %.2f hab/km²\n", nomeCidade2, densidade2);
            carta1 <= densidade1;
            carta2 <= densidade2;
            break;
        default:
            printf(" Segundo Atributo invalido");
            break;
        }
    }

    //Soma dos atributos
    printf("Soma de Atributos da Carta 1: %ld\n", carta1);          
    printf("Soma de Atributos da Carta 2: %ld\n", carta2);

    //Resultados das Comparações
    if (carta1 > carta2){
        printf("Carta 1 Venceu!\n");
    } else if (carta1 == carta2){
        printf("Empatou\n");
        } else {
            printf("Carta 2 Venceu!");
        }
}