#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Estado - esperado uma letra de A a H representando um dos oito estados
  char carta1_estado;
  char carta2_estado;

  // Código da Carta onde será armazenado a letra do estado seguido de dois digitos de números de 01 a 04
  char carta1_codigo_carta[4];
  char carta2_codigo_carta[4];

  // Nome da cidade
  char carta1_cidade[100];
  char carta2_cidade[100];

  // Número de habiltantes
  int carta1_populacao;
  int carta2_populacao;

  // Área (em km²)
  float carta1_area;
  float carta2_area;

  // PIB
  float carta1_pib;
  float carta2_pib;

  // Número de pontos turisticos
  int carta1_pontos_turisticos_qtd;
  int carta2_pontos_turisticos_qtd;

  
  // Área para entrada de dados

  // Mensagem para o usuário informando que haverá um cadastro de uma carta do super trunfo
  printf("\n -- Super Trunfo de Países - Cadastre duas cartas de países conforme a instrução\n\n");

  // Cadastrando a carta 1
  printf("Carta 1:\n");

  // Instruindo o usuário a inserir as informações corretamente e obtendo o valor do estado
  printf("Digite o estado (Letra de A a H): ");
  scanf(" %c", &carta1_estado);

  // Instruindo o usuário a inserir as informações corretamente do códifo da carta
  printf("Digite o código da carta (Letra do estado seguido de dois digitos de 01 a 04): ");
  scanf(" %s", carta1_codigo_carta);

  // Instruindo o usuário e inserir o nome da cidade
  printf("Informe o nome da Cidade: ");
  scanf(" %[^\n]", carta1_cidade);

  // Intruindo o usuário a inserir o número da população
  printf("Informe a quantidade da população: ");
  scanf(" %d", &carta1_populacao);

  // Intruindo o usuário a informar a Área e já informando que a medida será em km²
  printf("Informe o tamanho da área (km²): ");
  scanf(" %f", &carta1_area);

  // Instruindo o usuário a inserir o valor do PIB
  printf("Informe o PIB: ");
  scanf(" %f", &carta1_pib);

  // Instruindo o usuário a inserir a quantidade de pontos turisticos
  printf("Informe a quantidade de pontos turísticos: ");
  scanf(" %d", &carta1_pontos_turisticos_qtd);

  // Separando o primeiro cadastro do segundo
  printf("\n\n");

  // Cadastrando a segunda carta
  printf("Carta 2:\n");

  // Instruindo o usuário a inserir as informações corretamente e obtendo o valor do estado
  printf("Digite o estado (Letra de A a H): ");
  scanf(" %c", &carta2_estado);

  // Instruindo o usuário a inserir as informações corretamente do códifo da carta
  printf("Digite o código da carta (Letra do estado seguido de dois digitos de 01 a 04): ");
  scanf(" %s", carta2_codigo_carta);

  // Instruindo o usuário e inserir o nome da cidade
  printf("Informe o nome da Cidade: ");
  scanf(" %[^\n]", carta2_cidade);

  // Intruindo o usuário a inserir o número da população
  printf("Informe a quantidade da população: ");
  scanf(" %d", &carta2_populacao);

  // Intruindo o usuário a informar a Área e já informando que a medida será em km²
  printf("Informe o tamanho da área (km²): ");
  scanf(" %f", &carta2_area);

  // Instruindo o usuário a inserir o valor do PIB
  printf("Informe o PIB: ");
  scanf(" %f", &carta2_pib);

  // Instruindo o usuário a inserir a quantidade de pontos turisticos
  printf("Informe a quantidade de pontos turísticos: ");
  scanf(" %d", &carta2_pontos_turisticos_qtd);

  printf("\n");

  // Área para exibição dos dados da cidade

  // Separador
  printf("------------------------------------------------------------------------\n");

  // Exibindo dados coletados da Carta 1
  printf("Carta 1:\n");
  printf("Estado: %c\n", carta1_estado);
  printf("Código da Carta: %s\n", carta1_codigo_carta);
  printf("Nome da Cidade: %s\n", carta1_cidade);
  printf("População: %d\n", carta1_populacao);
  printf("Área (em km²): %.2f\n", carta1_area);
  printf("PIB: %.2f\n", carta1_pib);
  printf("Número de Pontos Turísticos: %d\n\n", carta1_pontos_turisticos_qtd);

  // Exibindo dados coletados da Carta 2
  printf("Carta 2:\n");
  printf("Estado: %c\n", carta2_estado);
  printf("Código da Carta: %s\n", carta2_codigo_carta);
  printf("Nome da Cidade: %s\n", carta2_cidade);
  printf("População: %d\n", carta2_populacao);
  printf("Área (em km²): %.2f\n", carta2_area);
  printf("PIB: %.2f\n", carta2_pib);
  printf("Número de Pontos Turísticos: %d\n\n", carta2_pontos_turisticos_qtd);


return 0;
} 
