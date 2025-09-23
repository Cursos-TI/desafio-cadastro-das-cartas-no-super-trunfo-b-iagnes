#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo 
// Desafio: nível mestre
// Tema 1 - Cadastro das Cartas


int main() {
    
    //dados carta1
    int pontos_turisticos_1;
    int populacao_1;
    float area_1;
    float pib_1;
    char estado_1 [50];
    char codigo_1 [50];
    char cidade_1 [50];
    float den_pop1;
    float pib_p_cap1;
    float sup_pod1;

    //dados carta2
    int pontos_turisticos_2;
    int populacao_2;
    float area_2;
    float pib_2;
    char estado_2 [50];
    char codigo_2 [50];
    char cidade_2 [50];
    float den_pop2;
    float pib_p_cap2;
    float sup_pod2;

    // Entrada dos dados da carta 1
    printf("Entre com os dados da carta 1: \n");
    printf("Digite o Estado: \n");
    fgets(estado_1, sizeof(estado_1), stdin);
    estado_1[strcspn(estado_1, "\n")] = '\0'; // Remove o caractere (\n) que fgets pode incluir na string.
    
    printf("Digite o Código da Carta: \n");
    fgets(codigo_1, sizeof(codigo_1), stdin);
    codigo_1[strcspn(codigo_1, "\n")] = '\0'; // Remove o caractere (\n) que fgets pode incluir na string.
    
    printf("Digite o Nome da Cidade: \n");
    fgets(cidade_1, sizeof(cidade_1), stdin);
    cidade_1[strcspn(cidade_1, "\n")] = '\0'; // Remove o caractere (\n) que fgets pode incluir na string.
    
    printf("Digite a População: \n");
    scanf("%lu", &populacao_1);

    printf("Digite a Área: \n");
    scanf("%f", &area_1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_1);

    printf("Digite o Número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_1);
    getchar(); // Consome o '\n' que sobrou no buffer.

    // Calculo da densidade poulacional carta 1
    den_pop1 = populacao_1 / area_1;
    printf("Densidade Populacional: %.2f\n", den_pop1);

    // Calculo do PIB percapita carta 1
    pib_p_cap1 = pib_1 * 1000000000 / populacao_1;
    printf("PIB per Capita: %.2f\n", pib_p_cap1);

    // Calculo do Super Poder carta 1
    sup_pod1 = populacao_1 + area_1 + pib_1 + pontos_turisticos_1 + den_pop1 + pib_p_cap1;
    printf("Super Poder: %.2f\n\n", sup_pod1);

    // Entrada dos dados da carta 2
    printf("Entre com os dados da carta 2: \n");
    printf("Digite o Estado: \n");
    fgets(estado_2, sizeof(estado_2), stdin);
    estado_2[strcspn(estado_2, "\n")] = '\0'; // Remove o caractere (\n) que fgets pode incluir na string.
    
    printf("Digite o Código da Carta: \n");
    fgets(codigo_2, sizeof(codigo_2), stdin);
    codigo_2[strcspn(codigo_2, "\n")] = '\0'; // Remove o caractere (\n) que fgets pode incluir na string.
    
    printf("Digite o Nome da Cidade: \n");
    fgets(cidade_2, sizeof(cidade_2), stdin);
    cidade_2[strcspn(cidade_2, "\n")] = '\0'; // Remove o caractere (\n) que fgets pode incluir na string.

    printf("Digite a População: \n");
    scanf("%lu", &populacao_2);

    printf("Digite a Área: \n");
    scanf("%f", &area_2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_2);

    printf("Digite o Número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_2);

    // Calculo da densidade poulacional carta 2
    den_pop2 = populacao_2 / area_2;
    printf("Densidade Populacional: %.2f\n", den_pop2);

    // Calculo do PIB percapita carta 2
    pib_p_cap2 = pib_2 * 1000000000 / populacao_2;
    printf("PIB per Capita: %.2f\n", pib_p_cap2);

    // Calculo do Super Poder carta 2
    sup_pod2 = populacao_2 + area_2 + pib_2 + pontos_turisticos_2 + den_pop2 + pib_p_cap2;
    printf("Super Poder: %.2f\n\n", sup_pod2);
    
    // Impressão resultado
    printf("Comparação de cartas (Atributo: Area): \n\n"
           "Carta 1 - Aracaju(SE): %.2f\n"
           "Carta 2 - Palmas(TO): %.2f\n"),
           area_1, area_2;

    if (den_pop1 < den_pop2)
    {
        printf("Resultado: Carta 1 Aracaju venceu!");
    }
    else 
    {
        printf("Resultado: Carta 2 Palmas venceu!");
    }


    printf(
        "Comparação de Cartas: \n"
              "População: Carta 1 venceu %lu\n"
              "Area: Carta 1 venceu %lu\n"
              "PIB: Carta 1 venceu %lu\n"
              "Pontos Turisticos: Carta 1 venceu %d\n"
              "Densidade Populacional: Carta 1 venceu %lu\n"
              "PIB per Capita: Carta 1 venceu %lu\n"
              "Super Poder: Carta 1 venceu %lu\n",
              populacao_1 > populacao_2, area_1 > area_2, pib_1 > pib_2, pontos_turisticos_1 > pontos_turisticos_2,
              den_pop1 < den_pop2, pib_p_cap1 > pib_p_cap2, sup_pod1 > sup_pod2
              );
    
    return 0;
}
