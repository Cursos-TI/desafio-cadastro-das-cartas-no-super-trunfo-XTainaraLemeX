#include <stdio.h>

int main (){
    char estado1[20], estado2[20]; //declarei a variavel dos estados das duas cartas
    char codigo1[4], codigo2[4]; //variarel dos codigos das cartas 1 e 2
    char cidade1[60], cidade2[60]; //variavel  das cidades das 2 cartas
    unsigned long int populacao1, populacao2; //variavel da população referente a carta 1 e 2
    float area1, area2; //variavel da area das carta 1 e 2
    float pib1, pib2; //variavel do PIB das duas cartas 
    int pontosTuristicos1, pontosTuristicos2; //variavel dos pontos turistico das cartas 1 e 2
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;
    float bilhao = 1000000000.0f;

    printf("================================\n");
    printf("BEM-VINDO AO CADASTRO DE CARTAS!\n"); //exibe uma mensagem de boas-vindas ao sistema
    printf("================================\n");

    printf("\nCARTA 1!"); // inicio do cadastro da primeira carta

    printf("\nIndique o estado: "); // imprime a mensagem no terminal durante a execuçao do programa
    scanf(" %s", &estado1); // coleta a informaçao que o usuario digitou e atribui para variavel


    printf("Indique o código: ");
    scanf("%s", codigo1);

    printf("Informe a cidade: ");
    scanf("%s", cidade1);

    printf("Informe a população: "); 
    scanf("%lu", &populacao1); 

    printf("Informe a área da cidade: ");
    scanf("%f", &area1);

    printf("Indique o valor do PIB: ");
    scanf("%f", &pib1);
    
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * bilhao) / populacao1;

    superPoder1 = (float) populacao1 + area1 + pib1 + (float) pontosTuristicos1 + (pibPerCapita1 / bilhao) + ((float) 1/ densidadePopulacional1);

    printf("\nCARTA 1 FINALIZADA."); // informa e imprime que o cadastro da carta 1 foi concluida

    printf("\n\nPREPARANDO PRÓXIMA CARTA....."); // imprime uma mensagem antes de começar o cadastro dda carta 2

    printf("\n\nCARTA 2!"); // inicio do cadastro da segunda carta

    printf("\nIndique o estado: "); // imprime a mensagem no terminal durante a execuçao do programa
    scanf(" %s", &estado2); // coleta a informaçao que o usuario digitou e atribui para variavel

    printf("Indique o código: ");
    scanf("%s", codigo2);

    printf("Informe a cidade: ");
    scanf("%s", cidade2);

    printf("Informe a população: ");
    scanf("%lu", &populacao2);

    printf("Informe a área da cidade: ");
    scanf("%f", &area2);

    printf("Indique o valor do PIB: ");
    scanf("%f", &pib2);
    
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * bilhao) / populacao2;

    superPoder2 = (float) populacao2 + area2 + pib2 + (float) pontosTuristicos2 + (pibPerCapita2 / bilhao) + ((float) 1/ densidadePopulacional2);
    
    printf("\nMUITO BEEEEM! \nFIM DO CADASTRO, BORA VERIFICAR AS INFORMAÇÕES!"); // imprime uma mensagem de conclusao do cadastro

    printf("\n\nCarta 1:" // imprime na tela todos os dados preenchidos da carta 1 e 2
        "\nEstado: %s"
        "\nCódigo: %s"
        "\nNome da Cidade: %s"
        "\nPopulação: %lu habitantes"
        "\nÁrea: %.2f km²"
        "\nPIB: %.2f bilhões de reais"
        "\nNúmero de Pontos Tutísticos: %d"
        "\nDensidade Populaciona: %.2f hab/km²"
        "\nPIB per Capita: %.2f reais"
        "\nSuper Poder: %.2f"

        "\n\nCarta 2:"
        "\nEstado: %s"
        "\nCódigo: %s"
        "\nNome da Cidade: %s"
        "\nPopulação: %lu habitantes"
        "\nÁrea: %.2f km²"
        "\nPIB: %.2f bilhões de reais"
        "\nNúmero de Pontos Tutísticos: %d"
        "\nDensidade Populacional: %.2f hab/km²"
        "\nPIB pe Capita: %.2f reais"
        "\nSuper Poder: %.2f",

        estado1, codigo1, cidade1, populacao1, area1, pib1, pontosTuristicos1, densidadePopulacional1, pibPerCapita1, superPoder1, 
        estado2, codigo2, cidade2, populacao2, area2, pib2, pontosTuristicos2, densidadePopulacional2, pibPerCapita2, superPoder2);

    printf("\n\nComparação De Cartas: \n");

    if( populacao1 > populacao2){
        printf("Carta 1 venceu na populção!\n");
    } else {
        printf("Carta 2 venceu na população!\n");
        }

    if( area1 > area2){
        printf("Carta 1 venceu na area!\n");
    } else {
        printf("Carta 2 venceu na area!\n");
        }

    if( pib1 > pib2){
        printf("Carta 1 venceu no PIB!\n");
    } else {
        printf("Carta 2 venceu no PIB!\n");
        }

    if( pontosTuristicos1 > pontosTuristicos2){
        printf("Carta 1 venceu no Pontos Turisticos!\n");
    } else {
        printf("Carta 2 venceu no Pontos Turisticos!\n");
        }

    if( densidadePopulacional1 < densidadePopulacional2){
        printf("Carta 1 venceu na Densidade Populacional!\n");
    } else {
        printf("Carta 2 venceu na Densidade Populacional!\n");
        }

    if( pibPerCapita1 > pibPerCapita2){
        printf("Carta 1 venceu no PIB per Capita!\n");
    } else {
        printf("Carta 2 venceu no PIB per Capita!\n");
        }

    if( superPoder1 > superPoder2){
        printf("Carta 1 venceu no Super Poder!\n");
    } else {
        printf("Carta 2 venceu no Super Poder!\n");
        }

    printf("\n\n============================================");
    printf("\nComparação de cartas (Atributo: População):\n");

    printf("\nCarta 1 - %s (%s): %lu habitantes", cidade1, estado1, populacao1);
    printf("\nCarta 2 - %s (%s): %lu habitantes\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
    printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
    printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
    printf("\nResultado: Empate!\n");
    }

    printf("\n\n============================================");
    printf("\nComparação de cartas (Atributo: Área):\n");

    printf("\nCarta 1 - %s (%s): %.2f km²", cidade1, estado1, area1);
    printf("\nCarta 2 - %s (%s): %.2f km²\n", cidade2, estado2, area2);

    if (area1 > area2) {
    printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (area2 > area1) {
    printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
    printf("\nResultado: Empate!\n");
    }

    printf("\n\n============================================");
    printf("\nComparação de cartas (Atributo: PIB):\n");

    printf("\nCarta 1 - %s (%s): %.2f bilhões de reais", cidade1, estado1, pib1);
    printf("\nCarta 2 - %s (%s): %.2f bilhões de reais\n", cidade2, estado2, pib2);

    if (pib1 > pib2) {
    printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pib2 > pib1) {
    printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
    printf("\nResultado: Empate!\n");
    }

    printf("\n\n============================================");
    printf("\nComparação de cartas (Atributo: Pontos Turísticos):\n");

    printf("\nCarta 1 - %s (%s): %d pontos", cidade1, estado1, pontosTuristicos1);
    printf("\nCarta 2 - %s (%s): %d pontos\n", cidade2, estado2, pontosTuristicos2);

    if (pontosTuristicos1 > pontosTuristicos2) {
    printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pontosTuristicos2 > pontosTuristicos1) {
    printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
    printf("\nResultado: Empate!\n");
    }

    printf("\n\n============================================");
    printf("\nComparação de cartas (Atributo: Densidade Populacional):\n");

    printf("\nCarta 1 - %s (%s): %.2f hab/km²", cidade1, estado1, densidadePopulacional1);
    printf("\nCarta 2 - %s (%s): %.2f hab/km²\n", cidade2, estado2, densidadePopulacional2);

    if (densidadePopulacional1 < densidadePopulacional2) {
    printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (densidadePopulacional2 < densidadePopulacional1) {
    printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
    printf("\nResultado: Empate!\n");
    }

    printf("\n\n============================================");
    printf("\nComparação de cartas (Atributo: PIB per capita):\n");

    printf("\nCarta 1 - %s (%s): %.2f reais", cidade1, estado1, pibPerCapita1);
    printf("\nCarta 2 - %s (%s): %.2f reais\n", cidade2, estado2, pibPerCapita2);

    if (pibPerCapita1 > pibPerCapita2) {
    printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
    printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
    printf("\nResultado: Empate!\n");
    }

    printf("\n\n============================================");
    printf("\nComparação de cartas (Atributo: Super Poder):\n");

    printf("\nCarta 1 - %s (%s): %.2f", cidade1, estado1, superPoder1);
    printf("\nCarta 2 - %s (%s): %.2f\n", cidade2, estado2, superPoder2);

    if (superPoder1 > superPoder2) {
    printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (superPoder2 > superPoder1) {
    printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
    printf("\nResultado: Empate!\n");
    }


   return  0;

} 
