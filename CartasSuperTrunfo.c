#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

 //definicoes de variaveis da carta 1
  char estado1;
  char codigo1[4];
  char cidade1[30];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;

  //definicoes de variaveis da carta 2
  char estado2;
  char codigo2[4];
  char cidade2[30];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;
  
  // Área para entrada de dados
  
  //entrada de dados da carta 1
  printf("**Cadastro da carta 1**\n");
  printf("Digite o estado usando apenas uma letra \n (ex: Alagoas = A, Brasilia = B) :");
  scanf("%c", &estado1);

  printf("Digite o codigo da carta ate 4 caracteres \n (ex: Alagoas =A01, Brasilia =B02) :");
  scanf(" %s", codigo1);

  printf("Digite o nome da cidade \n (ex: SaoPaulo, Santos, SaoVicente) : ");
  scanf("%s", cidade1);

  printf("Digite o numero de habitantes (sem pontos e virgulas) :");
  scanf("%d", &populacao1);

  printf("Digite a area da cidade em km2 (sem pontos e virgulas) :");
  scanf("%f", &area1);

  printf("Digite o PIB(produto interno bruto) \n da cidade (sem pontos e virgulas) :");
  scanf("%f", &pib1);

  printf("Digite o numero de pontos turisticos \n na cidade :");
  scanf("%d", &pontosTuristicos1);

   //entrada de dados da carta 2
  printf("**Cadastro da carta 2**\n");
  printf("Digite o estado usando apenas uma letra \n (ex: Alagoas = A, Brasilia = B) :");
  scanf(" %c", &estado2);

  printf("Digite o codigo da carta ate 4 caracteres \n (ex: Alagoas =A01, Brasilia =B02) :");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade \n (ex: SaoPaulo, Santos, SaoVicente) : ");
  scanf("%s", cidade2);

  printf("Digite o numero de habitantes (sem pontos e virgulas) :");
  scanf("%d", &populacao2);

  printf("Digite a area da cidade em km2 (sem pontos e virgulas) :");
  scanf("%f", &area2);

  printf("Digite o PIB(produto interno bruto) \n da cidade (sem pontos e virgulas) :");
  scanf("%f", &pib2);

  printf("Digite o numero de pontos turisticos \n na cidade :");
  scanf("%d", &pontosTuristicos2);

  
  // Área para exibição dos dados da cidade

  // exibicao de dados inseridos pelo usuario(jogador)
  printf("\n*** As cartas foram cadastradas com sucesso!!***\n");

  //informacoes da carta 1
  printf("\n---**Carta 1**---\n");
  printf("Estado: %c \n", estado1);
  printf("Codigo: %s \n", codigo1);
  printf("Nome da cidade: %s \n", cidade1);
  printf("Populacao: %d \n", populacao1);
  printf("Area: %.2f km2 \n", area1);
  printf("PIB: %.2f bilhoes de reais \n", pib1);
  printf("pontos turisticos: %d \n", pontosTuristicos1);

  //informacoes da carta 2
    printf("\n---**Carta 2**---\n");
  printf("Estado: %c \n", estado2);
  printf("Codigo: %s \n", codigo2);
  printf("Nome da cidade: %s \n", cidade2);
  printf("Populacao: %d \n", populacao2);
  printf("Area: %.2f km2 \n", area2);
  printf("PIB: %.2f bilhoes de reais \n", pib2);
  printf("pontos turisticos: %d \n", pontosTuristicos2);

return 0;
} 
