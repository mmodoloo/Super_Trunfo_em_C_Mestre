#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    //Dados da carta 1
            char estado1;
            char codigo1[10];
            char cidade1[50];
            int populacao1;
            char unidadePopulacao1[20];
            unsigned long int area1;
            char unidadeArea1[20];
            float pib1;
            char unidadePib1[20];
            int pontosTuristicos1;

    //Dados da carta 2
            char estado2;
            char codigo2[10];
            char cidade2[50];
            int populacao2;
            char unidadePopulacao2[20];
            unsigned long int area2;
            char unidadeArea2[20];
            float pib2;
            char unidadePib2[20];
            int pontosTuristicos2;  

    char buffer[100]; // buffer temporário para ler tudo como string

    //Entrada Carta 1
    printf("Digite os dados da Carta 1:\n");

    printf("Estado (A-H): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, " %c", &estado1);

    printf("Codigo da carta (ex A01): ");
    fgets(codigo1, sizeof(codigo1), stdin);
    codigo1[strcspn(codigo1, "\n")] = 0;

    printf("Nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("Populacao (exemplo: 11,9 milhões): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d %s", &populacao1, unidadePopulacao1);

    printf("Area (exemplo: 1.521,202 km): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d %s", &area1, unidadeArea1);

    printf("PIB (exemplo: 3,5 trilhões): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f %s", &pib1, unidadePib1);

    printf("Numero de pontos turisticos:\n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &pontosTuristicos1);
    

    //Entrada Carta 2
    printf("Digite os dados da Carta 2:\n");

    printf("Estado (A-H): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, " %c", &estado2);

    printf("Codigo da carta (ex A01): ");
    fgets(codigo2, sizeof(codigo2), stdin);
    codigo2[strcspn(codigo2, "\n")] = 0;

    printf("Nome da cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Populacao (exemplo: 11,9 milhões): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d %s", &populacao2, unidadePopulacao2);

    printf("Area (exemplo: 1.521,202 km): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d %s", &area2, unidadeArea2);

    printf("PIB (exemplo: 3,5 trilhões): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f %s", &pib2, unidadePib2);

    printf("Numero de pontos turisticos: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &pontosTuristicos2);

    // Calcula a densidade populacional e o PIB per capita das duas cartas
    float densidadePopulacional1 = populacao1 / area1;
    float densidadePopulacional2 = populacao2 / area2;
    float perCapita1 = populacao1 / pib1;
    float perCapita2 = populacao2 / pib2;

    //Cálculo do Super Poder
    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + perCapita1 + (1.0 / densidadePopulacional1);
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + perCapita2 + (1.0 / densidadePopulacional2);

    // Determina o vencedor
    printf("\nComparacao das Cartas:\n");
    printf("Populacao: Carta %d venceu (%d)\n", (populacao1 > populacao2)? 1 : 2, (populacao1 > populacao2)? 1 : 0);
    printf("Area: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2) ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2) ? 1 : 0);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2, (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidadePopulacional1 < densidadePopulacional2) ? 1 : 2, (densidadePopulacional1 < densidadePopulacional2) ? 1 : 0 );
    printf("PIB per Capita: Carta %d venceu (%d)\n", (perCapita1 > perCapita2) ? 1 : 2, (perCapita1 > perCapita2) ? 1 : 0); 
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2) ? 1 : 2, (superPoder1 > superPoder2) ? 1 : 0);
    return 0;
}
