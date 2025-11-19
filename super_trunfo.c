#include <stdio.h>
#include <stdlib.h> 

typedef struct {
    char estado;
    char codigo_carta[4]; 
    char nome_cidade[50]; 
    int populacao;
    float area_km2;
    float pib_bilhoes; 
    int num_pontos_turisticos;
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

    printf("4. População (Número de habitantes): ");
    scanf("%d", &carta1.populacao);

    printf("5. Área (em km²): ");
    scanf("%f", &carta1.area_km2);

    printf("6. PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib_bilhoes);

    printf("7. Número de Pontos Turísticos: ");
    scanf("%d", &carta1.num_pontos_turisticos);


    printf("\n==========================================\n");
    printf("         ENTRADA DE DADOS - CARTA 2\n");
    printf("==========================================\n");

    printf("1. Estado (A a H): ");
    scanf(" %c", &carta2.estado);

    printf("2. Código da Carta (Ex: B02): ");
    scanf("%s", carta2.codigo_carta);

    printf("3. Nome da Cidade (Max. 49 caracteres, use '_' no lugar de espaços): ");
    scanf("%s", carta2.nome_cidade);

    printf("4. População (Número de habitantes): ");
    scanf("%d", &carta2.populacao);

    printf("5. Área (em km²): ");
    scanf("%f", &carta2.area_km2);

    printf("6. PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib_bilhoes);

    printf("7. Número de Pontos Turísticos: ");
    scanf("%d", &carta2.num_pontos_turisticos);


    printf("\n\n##########################################\n");
    printf("      DADOS DAS CARTAS CADASTRADAS\n");
    printf("##########################################\n");
    
    printf("\n>>> CARTA 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo_carta);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area_km2);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib_bilhoes);
    printf("Número de Pontos Turísticos: %d\n", carta1.num_pontos_turisticos);
    
    printf("\n---\n"); 
    
    printf("\n>>> CARTA 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo_carta);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area_km2);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib_bilhoes);
    printf("Número de Pontos Turísticos: %d\n", carta2.num_pontos_turisticos);

    printf("\n==========================================\n");
    printf("         FIM DO CADASTRO\n");
    printf("==========================================\n");

    return 0; 
}
