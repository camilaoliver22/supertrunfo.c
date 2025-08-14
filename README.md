# supertrunfo.c
Um jogo de cartas 
#include <stdio.h>

typedef struct carta {

    char estado [2];
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} carta;

int main() {
    carta carta1, carta2;

    printf("\n===Cadastro da arta 1===\n");
    printf("Digite o estado (A-H):\n");
    scanf("%s", &carta1.estado);
    printf("Digite o codigo da carta (ex:A01):\n");
    scanf("%s", &carta1.codigo);
    printf("Digite o nome da cidade:\n");
    scanf("%s", &carta1.nomeCidade);
    printf("Digite a populacao da cidade:\n");
    scanf("%d", &carta1.populacao);
    printf("Digite a area da cidade:\n");
    scanf("%f", &carta1.area);
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &carta1.pib);
    printf("Digite o numero de pontos turisticos da cidade:\n");
    scanf("%d", &carta1.pontosTuristicos);

    printf("=== Cadastro da carta 2===\n");
    printf("Digite o estado (A-H):\n");
    scanf("%s", carta2.estado);
    printf("Digite o codigo da carta (ex:A01):\n");
    scanf("%s", carta2.codigo);
    printf("Digite o nome da cidade:\n");
    scanf("%s",&carta2.nomeCidade);
    printf("Digite a populacao a cidade:\n");
    scanf("%d",&carta2.populacao);
    printf("Digite a area da cidade:\n");
    scanf("%f", &carta2.area);
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &carta2.pib);
    printf("Digite o numero de pontos turisticos da cidade:\n");
    scanf("%d", &carta2.pontosTuristicos);

    printf("\n=== Dados da carta 1 ===\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontosTuristicos);

    printf("\n=== Dados da carta 2 ===\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
