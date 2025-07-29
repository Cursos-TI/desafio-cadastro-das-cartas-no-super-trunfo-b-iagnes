#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 3 - Interatividade no Super Trunfo
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Bruno

int main() {
    
    int opcao;
     //dados carta1
    int pontos_turisticos_1;
    int populacao_1;
    float area_1;
    float pib_1;
    //int pais1;

    //dados carta2
    int pontos_turisticos_2;
    int populacao_2;
    float area_2;
    float pib_2;
    //int pais2;
 
  printf("Menu Principal\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Ver Regras\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      printf("Iniciando o jogo...\n\n");
      // Código para iniciar o jogo
    //Entrada dados carta 1
    //printf("Digite o País: \n");
    //scanf("%d", &pais1);

    printf("Digite a População: \n");
    scanf("%d", &populacao_1);

    printf("Digite a Área: \n");
    scanf("%f", &area_1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_1);

    printf("Digite o Número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_1);

    // Entrada dados carta 2
    //printf("Digite o País: \n");
    //scanf("%d", &pais2);

    printf("Digite a População: \n");
    scanf("%d", &populacao_2);

    printf("Digite a Área: \n");
    scanf("%f", &area_2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_2);

    printf("Digite o Número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_2);

    if(populacao_1 > populacao_2)
    {
      //printf("País: %d\n", pais1);
      printf("Atributo - População: %d\n", populacao_1);  
      printf("Carta 1 ganhou!");
    }
    else if(populacao_1 < populacao_2)
    {
      //printf("País: %d\n", pais2); 
      printf("Atributo - População: %d\n", populacao_2);   
      printf("Carta 2 ganhou!");    
    }
    else
    {
      printf("Empate!");
    }  
    break;
    case 2:
      printf("Regras do Jogo:\n");
      printf("1. Regra 1\n");
      printf("2. Regra 2\n");
      printf("3. Regra 3\n");
      // Código para exibir as regras
      break;
    case 3:
      printf("Saindo...\n");
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
  }


   /* 
    printf(
    "Carta 1:\n"
        "Pais: %s\n"
        "População: %d\n"
        "Área: %.2f km²\n"
        "PIB: %.2f bilhões de reais\n"
        "Número de Pontos Turísticos: %d\n"
        "Densidade demográfica: %.2f\n\n"

        "Carta 2:\n"
        "País: %s\n"
        "População: %d\n"
        "Área: %.2f km²\n"
        "PIB: %.2f bilhões de reais\n"
        "Número de Pontos Turísticos: %d\n"
        "Densidade demográfica: %.2f\n",
        pais_1, populacao_1, area_1, pib_1, pontos_turisticos_1,
        pais_2, populacao_2, area_2, pib_2, pontos_turisticos_2
    );*/
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
