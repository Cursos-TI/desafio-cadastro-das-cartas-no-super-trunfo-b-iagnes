#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    //dados carta1
    int pontos_turisticos_1;
    int populacao_1;
    float area_1;
    float pib_1;
    char estado_1 [] = "Sergipe";
    char codigo_1 []= "01";
    char cidade_1 [] = "Aracaju";

    //dados carta2
    int pontos_turisticos_2;
    int populacao_2;
    float area_2;
    float pib_2;
    char estado_2 [] = "Tocantins";
    char codigo_2 []= "02";
    char cidade_2 [] = "Palmas";

    printf("Digite a População: \n");
    scanf("%d", &populacao_1);

    printf("Digite a Área: \n");
    scanf("%f", &area_1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_1);

    printf("Digite o Número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_1);

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
        "Código: A%s\n"
        "Nome da Cidade: %s\n"
        "População: %d\n"
        "Área: %.2f km²\n"
        "PIB: %.2f bilhões de reais\n"
        "Número de Pontos Turísticos: %d\n\n"

        "Carta 2:\n"
        "Estado: %s\n"
        "Código: B%s\n"
        "Nome da Cidade: %s\n"
        "População: %d\n"
        "Área: %.2f km²\n"
        "PIB: %.2f bilhões de reais\n"
        "Número de Pontos Turísticos: %d\n",
        estado_1, codigo_1, cidade_1, populacao_1, area_1, pib_1, pontos_turisticos_1,
        estado_2, codigo_2, cidade_2, populacao_2, area_2, pib_2, pontos_turisticos_2
    );
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
