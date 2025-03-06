#include <stdio.h>

int main(){

    char estado, codigo[50], cidade[50];
    int população, pontosturisticos;
    float pib, área;

        printf("Carta 1 \n");


        printf("Digite a letra do Estado \n");
        scanf("%c", &estado);

        printf("Digite o códito da carta \n");
        scanf("%s", &codigo);

        printf("Digite o nome da Cidade \n");
        scanf("%s", &cidade);

        printf("Digite a quantidade de habitantes da Cidade \n");
        scanf("%d", &população);

        printf("Digite a área em Km² da Cidade");
        scanf("%f", &área);

        printf(" \n");
        scanf("%d", &pontosturisticos);

        printf("Digite o PIB da Cidade \n");
        scanf("%f", &pib);

        
        printf("Carta 2 \n");


        printf("Digite a letra do Estado \n");
        scanf("%c", &estado);

        printf("Digite o códito da carta \n");
        scanf("%s", &codigo);

        printf("Digite o nome da Cidade \n");
        scanf("%s", &cidade);

        printf("Digite a quantidade de habitantes da Cidade \n");
        scanf("%d", &população);

        printf("Digite a área em Km² da Cidade");
        scanf("%f", &área);

        printf("Quantos pontos turísticos existem na Cidade? \n");
        scanf("%d", &pontosturisticos);

        printf("Digite o PIB da Cidade \n");
        scanf("%f", &pib);

    return 0;

}