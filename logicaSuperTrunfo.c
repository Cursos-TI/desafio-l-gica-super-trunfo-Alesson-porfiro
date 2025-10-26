#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // ---------- CARTA 1 ----------
    char estado1;
    char codigo1[4];
    char nomeCidade1[30];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    // ---------- CARTA 2 ----------
    char estado2;
    char codigo2[4];
    char nomeCidade2[30];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro das Cartas:

    printf("Seja bem-vindo ao Super Trunfo!\n\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (em km): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n------------------------------\n");

    printf("=== Cadastro da Carta 2 ===\n\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (em km): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    //-----------Calculo 1 carta-----------

    float densidade1 = populacao1 / area1;
    float captaPib1 = pib1 / populacao1;
   

    // -----------Calculo 2 carta-----------

    float densidade2 = populacao2 / area2;
    float captaPib2 = pib2 / populacao2;
    

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.


  // População
if (populacao1 > populacao2)
{
    printf("Carta 1 - %s: %d\n", nomeCidade1, populacao1);
    printf("Carta 2 - %s: %d\n", nomeCidade2, populacao2);
    printf("Resultado: %s tem maior população.\n\n", nomeCidade1);
}
else
{
    printf("Carta 1 - %s: %d\n", nomeCidade1, populacao1);
    printf("Carta 2 - %s: %d\n", nomeCidade2, populacao2);
    printf("Resultado: %s tem maior população.\n\n", nomeCidade2);
}


    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    printf("\n==============================\n");

  printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", captaPib1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
     printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n\n", captaPib2);

    // Area
  if (area1 > area2)
  {
    printf("Area: %s venceu \n", nomeCidade1);
  }
  else
  {
    printf("Area: %s venceu \n", nomeCidade2);
  }

  // PIB
  if (pib1 > pib2)
  {
    printf("PIB: %s venceu \n", nomeCidade1);
  }
  else
  {
    printf("PIB: %s venceu \n", nomeCidade2);
  }

  // Pontos Turisticos
  if (pontosTuristicos1 > pontosTuristicos2)
  {
    printf("Pontos Turisticos: %s venceu \n", nomeCidade1);
  }
  else
  {
    printf("Pontos Turisticos: %s venceu \n", nomeCidade2);
  }

  // Densidade (menor vence!)
  if (densidade1 < densidade2)
  {
    printf("Densidade Populacional: %s venceu \n", nomeCidade1);
  }
  else
  {
    printf("Densidade Populacional: %s venceu \n", nomeCidade2);
  }

  // PIB per Capita
  if (captaPib1 > captaPib2)
  {
    printf("PIB per Capita: %s venceu \n", nomeCidade1);
  }
  else
  {
    printf("PIB per Capita: Carta %s venceu\n", nomeCidade2);
  }


    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
