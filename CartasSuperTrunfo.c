#include <stdio.h>

// Desafio Super Trunfo 
// Desafio: nível novato - Criando as Cartas do Super Trunfo
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Teste Bruno

int main() {
    
    //dados carta1
    int pontos_turisticos_1;
    int populacao_1;
    float area_1;
    float pib_1;
    char estado_1 [20];
    char codigo_1 [20];
    char cidade_1 [20];

    //dados carta2
    int pontos_turisticos_2;
    int populacao_2;
    float area_2;
    float pib_2;
    char estado_2 [20];
    char codigo_2 [20];
    char cidade_2 [20];

    printf("Entre com os dados da carta 1: \n");
    printf("Digite o Estado: \n");
    scanf("%s", estado_1);

    printf("Digite o Código da Carta: \n");
    scanf("%s", codigo_1);

    printf("Digite a População: \n");
    scanf("%d", &populacao_1);

    printf("Digite a Área: \n");
    scanf("%f", &area_1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_1);

    printf("Digite o Número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_1);

    printf("Entre com os dados da carta 2: \n");
    printf("Digite o Estado: \n");
    scanf("%s", estado_1);

    printf("Digite o Código da Carta: \n");
    scanf("%s", codigo_1);

    printf("Digite a População: \n");
    scanf("%d", &populacao_2);

    printf("Digite a Área: \n");
    scanf("%f", &area_2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_2);

    printf("Digite o Número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_2);
    
    printf(
        "Carta 1:\n"
        "Estado: %s\n"
        "Código: %s - %s\n"
        "Nome da Cidade: %s\n"
        "População: %d\n"
        "Área: %.2f km²\n"
        "PIB: %.2f bilhões de reais\n"
        "Número de Pontos Turísticos: %d\n\n"

        "Carta 2:\n"
        "Estado: %s\n"
        "Código: %s - %s\n"
        "Nome da Cidade: %s\n"
        "População: %d\n"
        "Área: %.2f km²\n"
        "PIB: %.2f bilhões de reais\n"
        "Número de Pontos Turísticos: %d\n",
        estado_1, codigo_1, cidade_1, populacao_1, area_1, pib_1, pontos_turisticos_1,
        estado_2, codigo_2, cidade_2, populacao_2, area_2, pib_2, pontos_turisticos_2
    );
    
    return 0;
}
