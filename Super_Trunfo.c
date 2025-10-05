//
// Created by bruno on 21/07/25.
//

#include <stdio.h>
#include <string.h>

int main() {

  // Entrada, variáveis
  int opcao,pontos_turisticos_1,pontos_turisticos_2, populacao_1, populacao_2;
  float area_1, area_2, pib_1, pib_2, den_pop1, den_pop2 ;
  char pais_1 [50], pais_2 [50];

  //Entrada menu principal
  printf("Menu Principal\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Ver Regras\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);


  switch (opcao) {
    case 1:
      printf("Iniciando o jogo...\n\n");
      // Código para iniciar o jogo:

      printf("Escolha um atributo: \n");
      printf("1. População \n");
      printf("2. Área \n");
      printf("3. PIB \n");
      printf("4. Número de pontos turísticos \n");
      printf("5. Densidade demográfica \n");
      scanf("%d", &opcao);

      // cases de comparação de atributos
      switch (opcao) {
        case 1:
          printf("Digite o País 1: \n");
          scanf("%s", pais_1);
          printf("Digite o País 2: \n");
          scanf("%s", pais_2);
          printf("Digite População do(a) %s:\n", pais_1);
          scanf("%d", &populacao_1);
          printf("Digite População do(a) %s:\n", pais_2);
          scanf("%d", &populacao_2);

          if(populacao_1 > populacao_2)

          {
            printf("Resultado da comparação:\n");
            printf("País: %s / População: %d\n", pais_1, populacao_1);
            printf("País: %s / População: %d\n", pais_2, populacao_2);
            printf("Carta 1 ganhou!");
          }
          else if(populacao_1 < populacao_2)
          {
            printf("Resultado da comparação:\n");
            printf("País: %s - População: %d\n", pais_1, populacao_1);
            printf("País: %s - População: %d\n", pais_2, populacao_2);
            printf("Carta 2 ganhou!");
          }
          else
          {
            printf("País: %s - População: %d\n", pais_1, populacao_1);
            printf("País: %s - População: %d\n", pais_2, populacao_2);
            printf("Empate!");
          }
          break;
        case 2:
          printf("Digite o País 1: \n");
          scanf("%s", pais_1);
          printf("Digite o País 2: \n");
          scanf("%s", pais_2);
          printf("Digite a Área do(a) %s:\n", pais_1);
          scanf("%f", &area_1);
          printf("Digite a Área do(a) %s:\n", pais_2);
          scanf("%f", &area_2);

          if(area_1 > area_2)

          {
            printf("Resultado da comparação:\n");
            printf("País: %s / Área: %.2f\n", pais_1, area_1);
            printf("País: %s / Área: %.2f\n", pais_2, area_2);
            printf("Carta 1 ganhou!");
          }
          else if(area_1 < area_2)
          {
            printf("Resultado da comparação:\n");
            printf("País: %s / Área: %.2f\n", pais_1, area_1);
            printf("País: %s / Área: %.2f\n", pais_2, area_2);
            printf("Carta 2 ganhou!");
          }
          else
          {
            printf("País: %s / Área: %.2f\n", pais_1, area_1);
            printf("País: %s / Área: %.2f\n", pais_2, area_2);
            printf("Empate!");
          }
          break;
        case 3:
          printf("Digite o País 1: \n");
          scanf("%s", pais_1);
          printf("Digite o País 2: \n");
          scanf("%s", pais_2);
          printf("Digite o PIB do(a) %s:\n", pais_1);
          scanf("%f", &pib_1);
          printf("Digite o PIB do(a) %s:\n", pais_2);
          scanf("%f", &pib_2);

          if(pib_1 > pib_2)

          {
            printf("Resultado da comparação:\n");
            printf("País: %s / PIB: %.2f\n", pais_1, pib_1);
            printf("País: %s / PIB: %.2f\n", pais_2, pib_2);
            printf("Carta 1 ganhou!");
          }
          else if(pib_1 < pib_2)
          {
            printf("Resultado da comparação:\n");
            printf("País: %s / PIB: %.2f\n", pais_1, pib_1);
            printf("País: %s / PIB: %.2f\n", pais_2, pib_2);
            printf("Carta 2 ganhou!");
          }
          else
          {
            printf("País: %s / PIB: %.2f\n", pais_1, pib_1);
            printf("País: %s / PIB: %.2f\n", pais_2, pib_2);
            printf("Empate!");
          }
          break;
        case 4:
          printf("Digite o País 1: \n");
          scanf("%s", pais_1);
          printf("Digite o País 2: \n");
          scanf("%s", pais_2);
          printf("Digite o Número de pontos turísticos do(a) %s:\n", pontos_turisticos_1);
          scanf("%d", &pontos_turisticos_1);
          printf("Digite o Número de pontos turísticos do(a) %s:\n", pontos_turisticos_2);
          scanf("%d", &pontos_turisticos_2);

          if(pontos_turisticos_1 > pontos_turisticos_2)

          {
            printf("Resultado da comparação:\n");
            printf("País: %s / Número de pontos turísticos: %d\n", pais_1, pontos_turisticos_1);
            printf("País: %s / Número de pontos turísticos: %d\n", pais_2, pontos_turisticos_2);
            printf("Carta 1 ganhou!");
          }
          else if(pontos_turisticos_1 < pontos_turisticos_2)
          {
            printf("Resultado da comparação:\n");
            printf("País: %s / Número de pontos turísticos: %d\n", pais_1, pontos_turisticos_1);
            printf("País: %s / Número de pontos turísticos: %d\n", pais_2, pontos_turisticos_2);
            printf("Carta 2 ganhou!");
          }
          else
          {
            printf("País: %s / Número de pontos turísticos: %d\n", pais_1, pontos_turisticos_1);
            printf("País: %s / Número de pontos turísticos: %d\n", pais_2, pontos_turisticos_2);
            printf("Empate!");
          }
          break;
        case 5:
          printf("Digite o País 1: \n");
          scanf("%s", pais_1);
          printf("Digite o País 2: \n");
          scanf("%s", pais_2);
          printf("Digite a População do(a) %s:\n", pais_1);
          scanf("%d", &populacao_1);
          printf("Digite a Área do(a) %s:\n", pais_1);
          scanf("%f", &area_1);
          printf("Digite a População do(a) %s:\n", pais_2);
          scanf("%d", &populacao_2);
          printf("Digite a Área do(a) %s:\n\n", pais_2);
          scanf("%f", &area_2);

          den_pop1 = (float) populacao_1 / area_1;
          den_pop2 = (float) populacao_2 / area_2;
          printf("Densidade Populacional do(a) %s: %.2f\n", pais_1, den_pop1);
          printf("Densidade Populacional do(a) %s: %.2f\n\n", pais_2, den_pop2);

          if(den_pop1 < den_pop2)

          {
            printf("Resultado da comparação:\n");
            printf("País: %s / Densidade demográfica: %.2f\n", pais_1, den_pop1);
            printf("País: %s / Densidade demográfica: %.2f\n", pais_2, den_pop2);
            printf("Carta 1 ganhou!");
          }
          else if(den_pop1 > den_pop2)
          {
            printf("Resultado da comparação:\n");
            printf("País: %s / Densidade demográfica: %.2f\n", pais_1, den_pop1);
            printf("País: %s / Densidade demográfica: %.2f\n", pais_2, den_pop2);
            printf("Carta 2 ganhou!");
          }
          else
          {
            printf("País: %s / Densidade demográfica: %.2f\n", pais_1, den_pop1);
            printf("País: %s / Densidade demográfica: %.2f\n", pais_2, den_pop2);
            printf("Empate!");
          }
          break;
        default:
          printf("Opção inválida. Tente novamente.\n");
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
    break;
  }

  return 0;

}
