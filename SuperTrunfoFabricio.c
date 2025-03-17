#include <stdio.h>

int main(){
    char estado1, estado2;
    char codcarta1[50], codcarta2[50];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;

        printf("Digite seu primeiro estado \n");
        scanf("%s", &estado1);

        printf("Digite o codigo da cidade \n");
        scanf("%s", &codcarta1);

        printf("Digite o nome da cidade \n");
        scanf("%s", &cidade1);

        printf("Digite a quantidade de habitantes \n");
        scanf("%f", &populacao1);

        printf("Digite a área km² da cidade \n");
        scanf("%f", &area1);

        printf("Digite o PIB da cidade \n");
        scanf("%f", &pib1);

        printf("Digite a quantidade de pontos turísticos da cidade \n");
        scanf("%d", &pontos1);

        float densidadepop1;
        float pibpercapita1;

        densidadepop1 = (float)(populacao1 / area1);
        printf("A densidade populacional é: %2.f\n", densidadepop1);

        pibpercapita1 = (float)(pib1 / populacao1);
        printf("O PIB per capita é: %2.f\n", pibpercapita1);
      

        printf("Digite seu segundo estado \n");
        scanf("%s", &estado2);

        printf("Digite o codigo da cidade \n");
        scanf("%s", &codcarta2);

        printf("Digite o nome da cidade \n");
        scanf("%s", &cidade2);

        printf("Digite a quantidade de habitantes \n");
        scanf("%f", &populacao2);

        printf("Digite a área km² da cidade \n");
        scanf("%f", &area2);

        printf("Digite o PIB da cidade \n");
        scanf("%f", &pib2);

        printf("Digite a quantidade de pontos turísticos da cidade \n");
        scanf("%d", &pontos2);

        float densidadepop2;
        float pibpercapita2;

        densidadepop2 = (float)(populacao2 / area2);
        printf("A densidade populacional é: %2.f\n", densidadepop2);

        pibpercapita2 = (float)(pib2 / populacao2);
        printf("O PIB per capita é: %2.f\n", pibpercapita2);


        return 0;

















}