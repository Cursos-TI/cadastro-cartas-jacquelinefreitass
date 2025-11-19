#include <stdio.h>
#include <stdlib.h> 

typedef struct {
    char estado[3]; 
    char codigo_carta[4]; 
    char nome_cidade[50]; 
    int populacao;
    float area_km2;
    float pib_bilhoes; 
    int num_pontos_turisticos;
    
    float densidade_populacional;
    float pib_per_capita;
} CartaSuperTrunfo;

float obter_valor_atributo(CartaSuperTrunfo carta, int atributo_id) {
    switch (atributo_id) {
        case 1:
            return (float)carta.populacao;
        case 2:
            return carta.area_km2;
        case 3:
            return carta.pib_bilhoes;
        case 4:
            return (float)carta.num_pontos_turisticos;
        case 5:
            return carta.densidade_populacional;
        case 6:
            return carta.pib_per_capita;
        default:
            return 0.0; 
    }
}

char* obter_nome_atributo(int atributo_id) {
    switch (atributo_id) {
        case 1:
            return "População";
        case 2:
            return "Área (km²)";
        case 3:
            return "PIB (bilhões)";
        case 4:
            return "Pontos Turísticos";
        case 5:
            return "Densidade Populacional";
        case 6:
            return "PIB per Capita";
        default:
            return "Inválido";
    }
}

int exibir_menu_e_obter_escolha(int atributo_anterior) {
    int escolha;
    int entrada_valida = 0;

    while (!entrada_valida) {
        printf("\nEscolha um atributo para comparação:\n");

        if (atributo_anterior != 1) printf("1. População\n");
        if (atributo_anterior != 2) printf("2. Área (km²)\n");
        if (atributo_anterior != 3) printf("3. PIB (bilhões)\n");
        if (atributo_anterior != 4) printf("4. Número de Pontos Turísticos\n");
        if (atributo_anterior != 5) printf("5. Densidade Populacional\n");
        if (atributo_anterior != 6) printf("6. PIB per Capita\n");

        printf("Opção: ");
        if (scanf("%d", &escolha) != 1) {
            printf("Erro: Entrada inválida. Digite um número.\n");
            while (getchar() != '\n');
            continue;
        }

        if (escolha >= 1 && escolha <= 6 && escolha != atributo_anterior) {
            entrada_valida = 1;
        } else {
            printf("Erro: Opção inválida ou atributo já selecionado. Tente novamente.\n");
        }
    }
    return escolha;
}

int main() {
    CartaSuperTrunfo carta1;
    CartaSuperTrunfo carta2;
    int escolha1, escolha2;
    float valor1_c1, valor2_c1, soma_c1;
    float valor1_c2, valor2_c2, soma_c2;
    char* nome_attr1;
    char* nome_attr2;

    printf("==========================================\n");
    printf("         CADASTRO SIMPLIFICADO\n");
    printf("==========================================\n");

    
    strcpy(carta1.estado, "SP");
    strcpy(carta1.codigo_carta, "A01");
    strcpy(carta1.nome_cidade, "Sao_Paulo");
    carta1.populacao = 12325000;
    carta1.area_km2 = 1521.11;
    carta1.pib_bilhoes = 699.28;
    carta1.num_pontos_turisticos = 50;

    
    strcpy(carta2.estado, "RJ");
    strcpy(carta2.codigo_carta, "B02");
    strcpy(carta2.nome_cidade, "Rio_de_Janeiro");
    carta2.populacao = 6748000;
    carta2.area_km2 = 1200.25;
    carta2.pib_bilhoes = 300.50;
    carta2.num_pontos_turisticos = 30;

    
    carta1.densidade_populacional = (float)carta1.populacao / carta1.area_km2;
    carta1.pib_per_capita = (carta1.pib_bilhoes * 1000000000.0) / (float)carta1.populacao;
    carta2.densidade_populacional = (float)carta2.populacao / carta2.area_km2;
    carta2.pib_per_capita = (carta2.pib_bilhoes * 1000000000.0) / (float)carta2.populacao;

    printf("Cartas pré-cadastradas: Carta 1 (%s) e Carta 2 (%s)\n", carta1.nome_cidade, carta2.nome_cidade);

    printf("\n##########################################\n");
    printf("    ESCOLHA DE DOIS ATRIBUTOS\n");
    printf("##########################################\n");

    escolha1 = exibir_menu_e_obter_escolha(0);
    nome_attr1 = obter_nome_atributo(escolha1);
    printf("Primeiro atributo escolhido: %s\n", nome_attr1);

    escolha2 = exibir_menu_e_obter_escolha(escolha1);
    nome_attr2 = obter_nome_atributo(escolha2);
    printf("Segundo atributo escolhido: %s\n", nome_attr2);

    
    valor1_c1 = obter_valor_atributo(carta1, escolha1);
    valor2_c1 = obter_valor_atributo(carta1, escolha2);
    valor1_c2 = obter_valor_atributo(carta2, escolha1);
    valor2_c2 = obter_valor_atributo(carta2, escolha2);

    
    soma_c1 = valor1_c1 + valor2_c1;
    soma_c2 = valor1_c2 + valor2_c2;

    printf("\n##########################################\n");
    printf("         RESULTADO DA RODADA\n");
    printf("##########################################\n");

    printf("Atributo 1: %s\n", nome_attr1);
    printf("  Carta 1 (%s): %.2f | Carta 2 (%s): %.2f\n", carta1.nome_cidade, valor1_c1, carta2.nome_cidade, valor1_c2);

    printf("Atributo 2: %s\n", nome_attr2);
    printf("  Carta 1 (%s): %.2f | Carta 2 (%s): %.2f\n", carta1.nome_cidade, valor2_c1, carta2.nome_cidade, valor2_c2);

    printf("Soma dos Atributos (C1): %.2f | Soma dos Atributos (C2): %.2f\n", soma_c1, soma_c2);

    
    if (soma_c1 > soma_c2) {
        printf("Vencedor da Rodada: Carta 1 (%s)\n", carta1.nome_cidade);
    } else if (soma_c2 > soma_c1) {
        printf("Vencedor da Rodada: Carta 2 (%s)\n", carta2.nome_cidade);
    } else {
        printf("Resultado: Empate!\n");
    }
    
    printf("\n==========================================\n");
    printf("         FIM DO PROGRAMA\n");
    printf("==========================================\n");

    return 0;
}

    return 0; 
}
