#include <stdio.h>

int main (){
    char estado1, estado2; //declarei a variavel dos estados das duas cartas
    char codigo1[4], codigo2[4]; //variarel dos codigos das cartas 1 e 2
    char cidade1[60], cidade2[60]; //variavel  das cidades das 2 cartas
    int populacao1, populacao2; //variavel da população referente a carta 1 e 2
    float area1, area2; //variavel da area das carta 1 e 2
    float pib1, pib2; //variavel do PIB das duas cartas 
    int pontosTuristicos1, pontosTuristicos2; //variavel dos pontos turistico das cartas 1 e 2
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;

    printf("================================\n");
    printf("BEM-VINDO AO CADASTRO DE CARTAS!\n"); //exibe uma mensagem de boas-vindas ao sistema
    printf("================================\n");

    printf("\nCARTA 1!"); // inicio do cadastro da primeira carta

    printf("\nIndique o estado: "); // imprime a mensagem no terminal durante a execuçao do programa
    scanf(" %c", &estado1); // coleta a informaçao que o usuario digitou e atribui para variavel


    printf("Indique o código: ");
    scanf("%s", codigo1);

    printf("Informe a cidade: ");
    scanf("%s", cidade1);

    printf("Informe a população: "); 
    scanf("%d", &populacao1); 

    printf("Informe a área da cidade: ");
    scanf("%f", &area1);

    printf("Indique o valor do PIB: ");
    scanf("%f", &pib1);
    
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;

    printf("\nCARTA 1 FINALIZADA."); // informa e imprime que o cadastro da carta 1 foi concluida

    printf("\n\nPREPARANDO PRÓXIMA CARTA....."); // imprime uma mensagem antes de começar o cadastro dda carta 2

    printf("\n\nCARTA 2!"); // inicio do cadastro da segunda carta

    printf("\nIndique o estado: "); // imprime a mensagem no terminal durante a execuçao do programa
    scanf(" %c", &estado2); // coleta a informaçao que o usuario digitou e atribui para variavel

    printf("Indique o código: ");
    scanf("%s", codigo2);

    printf("Informe a cidade: ");
    scanf("%s", cidade2);

    printf("Informe a população: ");
    scanf("%d", &populacao2);

    printf("Informe a área da cidade: ");
    scanf("%f", &area2);

    printf("Indique o valor do PIB: ");
    scanf("%f", &pib2);
    
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;
    
    printf("\nMUITO BEEEEM! \nFIM DO CADASTRO, BORA VERIFICAR AS INFORMAÇÕES!"); // imprime uma mensagem de conclusao do cadastro

    printf("\n\nCarta 1:" // imprime na tela todos os dados preenchidos da carta 1 e 2
        "\nEstado: %c"
        "\nCódigo: %s"
        "\nNome da Cidade: %s"
        "\nPopulação: %d habitantes"
        "\nÁrea: %.2f km²"
        "\nPIB: %.2f bilhões de reais"
        "\nNúmero de Pontos Tutísticos: %d"
        "\nDensidade Populaciona: %.2f hab/km²"
        "\nPIB per Capita: %.2f reais"

        "\n\nCarta 2:"
        "\nEstado: %c"
        "\nCódigo: %s"
        "\nNome da Cidade: %s"
        "\nPopulação: %d habitantes"
        "\nÁrea: %.2f km²"
        "\nPIB: %.2f bilhões de reais"
        "\nNúmero de Pontos Tutísticos: %d"
        "\nDensidade Populacional: %.2f hab/km²"
        "\nPIB pe Capita: %.2f reais",

        estado1, codigo1, cidade1, populacao1, area1, pib1, pontosTuristicos1, densidadePopulacional1, pibPerCapita1,
        estado2, codigo2, cidade2, populacao2, area2, pib2, pontosTuristicos2, densidadePopulacional2, pibPerCapita2);
        return  0;
}