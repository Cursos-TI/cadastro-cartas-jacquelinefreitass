#include <stdio.h>
#include <stdlib.h> 

typedef struct {
    char estado;
    char codigo_carta[4]; 
    char nome_cidade[50]; 
    unsigned long int populacao; 
    float area_km2;
    float pib_bilhoes; 
    int num_pontos_turisticos;
    
    float densidade_populacional;
    float pib_per_capita;
    float super_poder; 
} CartaSuperTrunfo;

int main() {
    CartaSuperTrunfo carta1;
    CartaSuperTrunfo carta2;

    printf("==========================================\n");
    printf("         ENTRADA DE DADOS - CARTA 1\n");
    printf("==========================================\n");

    printf("1. Estado (A a H): ");
    scanf(" %c", &carta1.estado);

    printf("2. Código da Carta (Ex: A01): ");
    scanf("%s", carta1.codigo_carta);

    printf("3. Nome da Cidade (Max. 49 caracteres, use '_' no lugar de espaços): ");
    scanf("%s", carta1.nome_cidade);

    printf("4. População (Número de habitantes - unsigned long int): ");
    scanf("%lu", &carta1.populacao); 

    printf("5. Área (em km²): ");
    scanf("%f", &carta1.area_km2);

    printf("6. PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib_bilhoes);

    printf("7. Número de Pontos Turísticos: ");
    scanf("%d", &carta1.num_pontos_turisticos);

    carta1.densidade_populacional = (float)carta1.populacao / carta1.area_km2;
    carta1.pib_per_capita = (carta1.pib_bilhoes * 1000000000.0) / (float)carta1.populacao;

    carta1.super_poder = (float)carta1.populacao + carta1.area_km2 + carta1.pib_bilhoes + (float)carta1.num_pontos_turisticos + carta1.pib_per_capita + (1.0 / carta1.densidade_populacional);

    printf("\n==========================================\n");
    printf("         ENTRADA DE DADOS - CARTA 2\n");
    printf("==========================================\n");

    printf("1. Estado (A a H): ");
    scanf(" %c", &carta2.estado);

    printf("2. Código da Carta (Ex: B02): ");
    scanf("%s", carta2.codigo_carta);

    printf("3. Nome da Cidade (Max. 49 caracteres, use '_' no lugar de espaços): ");
    scanf("%s", carta2.nome_cidade);

    printf("4. População (Número de habitantes - unsigned long int): ");
    scanf("%lu", &carta2.populacao); 

    printf("5. Área (em km²): ");
    scanf("%f", &carta2.area_km2);

    printf("6. PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib_bilhoes);

    printf("7. Número de Pontos Turísticos: ");
    scanf("%d", &carta2.num_pontos_turisticos);

    carta2.densidade_populacional = (float)carta2.populacao / carta2.area_km2;
    carta2.pib_per_capita = (carta2.pib_bilhoes * 1000000000.0) / (float)carta2.populacao;

    carta2.super_poder = (float)carta2.populacao + carta2.area_km2 + carta2.pib_bilhoes + (float)carta2.num_pontos_turisticos + carta2.pib_per_capita + (1.0 / carta2.densidade_populacional);

    printf("\n\n##########################################\n");
    printf("      DADOS E CÁLCULOS DAS CARTAS\n");
    printf("##########################################\n");
    
    printf("\n>>> CARTA 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo_carta);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("População: %lu\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area_km2);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib_bilhoes);
    printf("Pontos Turísticos: %d\n", carta1.num_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", carta1.pib_per_capita);
    printf("Super Poder: %.2f\n", carta1.super_poder);
    
    printf("\n---\n"); 
    
    printf("\n>>> CARTA 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo_carta);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("População: %lu\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area_km2);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib_bilhoes);
    printf("Pontos Turísticos: %d\n", carta2.num_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", carta2.pib_per_capita);
    printf("Super Poder: %.2f\n", carta2.super_poder);

    printf("\n\n##########################################\n");
    printf("         COMPARAÇÃO DE CARTAS\n");
    printf("##########################################\n");

    printf("População: Carta %d venceu (%d)\n", (carta1.populacao > carta2.populacao) ? 1 : 2, carta1.populacao > carta2.populacao);
    printf("Área: Carta %d venceu (%d)\n", (carta1.area_km2 > carta2.area_km2) ? 1 : 2, carta1.area_km2 > carta2.area_km2);
    printf("PIB: Carta %d venceu (%d)\n", (carta1.pib_bilhoes > carta2.pib_bilhoes) ? 1 : 2, carta1.pib_bilhoes > carta2.pib_bilhoes);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (carta1.num_pontos_turisticos > carta2.num_pontos_turisticos) ? 1 : 2, carta1.num_pontos_turisticos > carta2.num_pontos_turisticos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (carta1.densidade_populacional < carta2.densidade_populacional) ? 1 : 2, carta1.densidade_populacional < carta2.densidade_populacional);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (carta1.pib_per_capita > carta2.pib_per_capita) ? 1 : 2, carta1.pib_per_capita > carta2.pib_per_capita);
    printf("Super Poder: Carta %d venceu (%d)\n", (carta1.super_poder > carta2.super_poder) ? 1 : 2, carta1.super_poder > carta2.super_poder);

    printf("\n==========================================\n");
    printf("         FIM DO PROGRAMA\n");
    printf("==========================================\n");

    return 0; 
}
