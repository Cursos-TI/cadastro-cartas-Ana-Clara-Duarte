#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  //carta 01
  char estado1[50]; //estado1 = Estado
  char codigo1[50]; //codigo1 = Código da carta
  char nome1[50]; //nome1 = Nome da cidade
  int populacao1; //populacao1 = População
  float area1; // area1 = Área em Km
  float pib1; //pib1 = PIB
  int turisticos1; //turisticos1 = pontos turísticos
  
  //carta 02
  char estado2[50]; //estado2 = Estado
  char codigo2[50]; //codigo2 = Código da carta
  char nome2[50]; //nome2 = Nome da cidade
  int populacao2; //populacao2 = População
  float area2; // area2 = Área em Km
  float pib2; //pib2 = PIB
  int turisticos2; //turisticos2 = pontos turísticos

  
  // Área para entrada de dados

  //CARTA 01:

  printf("Bem-vindo ao jogo Super Trunfo! para começar a jogar, responda as perguntas abaixo: \n");
  printf("--- CARTA 01: --- \n");
  
  printf("Digite o Estado: \n");
  scanf("%s", &estado1);
  
  printf("Digite o código da carta: \n");
  scanf("%s", &codigo1);
  
  printf("Digite o nome da cidade: \n");
  scanf("%s", &nome1);
  
  printf("Digite a quantidade total da população: \n");
  scanf("%d", &populacao1);
  
  printf("Digite a área em km: \n");
  scanf("%f", &area1);
  
  printf("Digite o PIB: \n");
  scanf("%f", &pib1);
  
  printf("Digite o tota de pontos turísticos: \n");
  scanf("%d", &turisticos1);
  
  //CARTA 02:
  
  printf("Ótimo! agora vamos para a carta 02!! \n");
  printf("--- CARTA 02: --- \n");
  
  printf("Digite o Estado: \\n");
  
  scanf("%s", &estado2);
  
  printf("Digite o código da carta: \n");
  scanf("%s", &codigo2);
  
  printf("Digite o nome da cidade: \n");
  scanf("%s", &nome2);
  
  printf("Digite a quantidade total da população: \n");
  scanf("%d", &populacao2);
  
  printf("Digite a área em km: \n");
  scanf("%f", &area2);
  
  printf("Digite o PIB: \n");
  scanf("%f", &pib2);
  
  printf("Digite o tota de pontos turísticos: \n");
  scanf("%d", &turisticos2);

  
  // Área para exibição dos dados da cidade

  printf("Ótimo! A seguir vamos para a leitura das cartas! \n");
  printf("--- CARTA 01: --- \n");
  printf("Estado: %s\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nome1);
  printf("População: %d\n", populacao1);
  printf("Área: %f\n", area1);
  printf("PIB: %f\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", turisticos1);
  
  printf("--- CARTA 02: --- \\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nome2);
  printf("População: %d\n", populacao2);
  printf("Área: %f\n", area2);
  printf("PIB: %f\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", turisticos2);

return 0;
} 
