#include <stdio.h>

int main() {
    // ---------- CARTA 1 ----------
    char estado1;
    char codigo1[4];
    char nomeCidade1[30];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    int resultado1;
    int resultado2;

    // ---------- CARTA 2 ----------
    char estado2;
    char codigo2[4];
    char nomeCidade2[30];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // ---------- CADASTRO DAS CARTAS ----------
    printf("===== BEM-VINDO AO SUPER TRUNFO =====\n\n");

    printf("=== Cadastro da Carta 1 ===\n");
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

    printf("\n=== Cadastro da Carta 2 ===\n");
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

    // ---------- CALCULAR DENSIDADE DEMOGRÁFICA ----------
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // ---------- MENU INTERATIVO ----------
    int opcao1;

    printf("\n===== MENU DE COMPARACAO =====\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("6 - Nomes\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao1);

    // ---------- VARIÁVEL PARA RESULTADO ----------
     // 0 = empate, 1 = carta1, 2 = carta2

    printf("\n===== RESULTADO =====\n");
    switch (opcao1) {
        case 1:
            printf("Comparando Populacao:\n");
            printf("%s: %lu habitantes\n", nomeCidade1, populacao1);
            printf("%s: %lu habitantes\n", nomeCidade2, populacao2);
            resultado1 = populacao1 > populacao2 ?  1 : 0;
            break;

            

        case 2:
            printf("Comparando Area:\n");
            printf("%s: %.2f km\n", nomeCidade1, area1);
            printf("%s: %.2f km\n", nomeCidade2, area2);
            resultado1 = area1 > area2 ?  1 : 0;
            break;

        case 3:
            printf("Comparando PIB:\n");
            printf("%s: %.2f bilhoes\n", nomeCidade1, pib1);
            printf("%s: %.2f bilhoes\n", nomeCidade2, pib2);
            resultado1 = pib1 > pib2 ?  1 : 0;
            break;

        case 4:
            printf("Comparando Pontos Turisticos:\n");
            printf("%s: %d pontos\n", nomeCidade1, pontosTuristicos1);
            printf("%s: %d pontos\n", nomeCidade2, pontosTuristicos2);
            resultado1 = pontosTuristicos1 > pontosTuristicos2 ?  1 : 0;
            break;

        case 5:
            printf("Comparando Densidade Demografica (MENOR vence):\n");
            printf("%s: %.2f hab/km\n", nomeCidade1, densidade1);
            printf("%s: %.2f hab/km\n", nomeCidade2, densidade2);
            resultado1 = densidade1 < densidade2 ?  1 : 0;
            break;
        case 6:
            printf("Comparando nomes: ");
            printf("\n%s X %s", nomeCidade1, nomeCidade2);
            break;
        default:
            printf("Opcaoo invalida! Por favor, escolha um numero de 1 a 5.\n");
            return 0; // encerra o programa
    }

    // ---------- SEGUNDO MENU INTERATIVO ----------
    int opcao2;

    printf("\n===== SEGUNDO MENU DE COMPARACAO =====\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("6 - Nomes\n");
    printf("Digite sua segunda opcao: ");
    scanf("%d", &opcao2);

    // ---------- VARIÁVEL PARA RESULTADO ----------

    if(opcao1 == opcao2){
        printf("\n===== Voce escolheu o mesmo atributo! =====\n");
    }else{

        printf("\n===== RESULTADO =====\n");
    switch (opcao2) {
        case 1:
            printf("Comparando Populacao:\n");
            printf("%s: %lu habitantes\n", nomeCidade1, populacao1);
            printf("%s: %lu habitantes\n", nomeCidade2, populacao2);
            resultado2 = populacao1 > populacao2 ?  1 : 0;
            break;

            

        case 2:
            printf("Comparando Area:\n");
            printf("%s: %.2f km\n", nomeCidade1, area1);
            printf("%s: %.2f km\n", nomeCidade2, area2);
            resultado2 = area1 > area2 ?  1 : 0;
            break;

        case 3:
            printf("Comparando PIB:\n");
            printf("%s: %.2f bilhoes\n", nomeCidade1, pib1);
            printf("%s: %.2f bilhoes\n", nomeCidade2, pib2);
            resultado2 = pib1 > pib2 ?  1 : 0;
            break;

        case 4:
            printf("Comparando Pontos Turisticos:\n");
            printf("%s: %d pontos\n", nomeCidade1, pontosTuristicos1);
            printf("%s: %d pontos\n", nomeCidade2, pontosTuristicos2);
            resultado2 = pontosTuristicos1 > pontosTuristicos2 ?  1 : 0;
            break;

        case 5:
            printf("Comparando Densidade Demografica (MENOR vence):\n");
            printf("%s: %.2f hab/km\n", nomeCidade1, densidade1);
            printf("%s: %.2f hab/km\n", nomeCidade2, densidade2);
            resultado2 = densidade1 < densidade2 ?  1 : 0;
            break;
        case 6:
            printf("Comparando nomes: ");
            printf("\n%s X %s", nomeCidade1, nomeCidade2);
            break;
        default:
            printf("Opcaoo invalida! Por favor, escolha um numero de 1 a 5.\n");
            return 0; // encerra o programa
    }
    }

    

    // ---------- EXIBIR RESULTADO ----------
    if (resultado1 && resultado2){
        printf("Voce ganhou\n");
    }else if(resultado1 != resultado2){
        printf("empatou\n");
    }else{
        printf("perdeu\n");
    }
    printf("\n==============================\n");

    return 0;
}
