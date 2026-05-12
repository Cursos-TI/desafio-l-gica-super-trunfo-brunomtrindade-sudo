#include <stdio.h>

int main() {
    unsigned long int populacao, populacao2;
    int turismo, turismo2, escolha;
    float area, area2, densidade, densidade2;
    float pib, pib2, percapita, percapita2;
    float trunfo, trunfo2;
    char codigo[3], codigo2[3];
    char letra, letra2;
    char nome[30], nome2[30];
    

    //Parâmetros para a primeira carta:

    printf("Aqui você irá inserir os dados do país para a primeira carta. \n");
    printf("Nome do país: ");
    fgets(nome, 30, stdin);

    printf("Letra do país, de 'A' a 'H': \n");
    scanf(" %c", &letra);

    printf("Área do país: \n");
    scanf("%f", &area);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &turismo);

    printf("População do país: \n");
    scanf("%lu", &populacao);

    printf("PIB do país: \n");
    scanf("%f", &pib);
    percapita = pib / populacao;

    printf("Código do país: \n    ");
    scanf("%s", codigo);

    densidade = populacao / area;

    //Parâmetros para a segunda carta.

    printf("Agora, insira os dados do país para a segunda carta. \n");
    printf("Nome do país: \n");
    getchar();
    fgets(nome2, 30, stdin);

    printf("Letra do país, de 'A' a 'H': \n");
    scanf(" %c", &letra2);

    printf("Área do país: \n  ");
    scanf("%f", &area2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &turismo2);

    printf("População do país: \n");
    scanf("%lu", &populacao2);
    densidade2 = populacao2 / area2;

    printf("PIB do país: \n");
    scanf("%f", &pib2);
    percapita2 = pib2 / populacao2;

    printf("Código do país: \n");
    scanf("%s", codigo2);

    //Comparação entre as cartas:

    printf("Comparação entre as cartas: \n");

    printf("Carta 1:\n");
printf("Nome: %s", nome);
printf("Letra: %c\n", letra);
printf("Área: %.2f Km²\n ", area);
printf("Pontos turísticos: %d\n", turismo);
printf("População: %lu\n", populacao);
printf("Densidade Populacional: %.2f Hab/km²\n", densidade);
printf("PIB: %.2f Trilhões de reais\n", pib);
printf("PIB per capita: %.2f\n", percapita);
printf("Código: %s\n", codigo);

printf("Carta 2:\n");
printf("Nome: %s", nome2);
printf("Letra: %c\n", letra2);
printf("Área: %.2f Km²\n", area2);
printf("Pontos turísticos: %d\n", turismo2);
printf("População: %lu\n", populacao2);
printf("Densidade Populacional: %.2f Hab/km²\n", densidade2);
printf("PIB: %.2f Trilhões de reais\n", pib2);
printf("PIB per capita: %.2f Reais\n", percapita2);
printf("Código: %s\n", codigo2);

    //Declaração de vencedor:
        printf("O vencedor é: \n");
    trunfo = (area + turismo + densidade + pib + percapita) / 5;
    trunfo2 = (area2 + turismo2 + densidade2 + pib2 + percapita2) / 5;
    

    populacao > populacao2 ? printf("População: %s venceu!\n", nome) : printf("População: %s venceu!\n", nome2);
    area > area2 ? printf("Área: %s venceu!\n", nome) : printf("Área: %s venceu!\n", nome2);
    turismo > turismo2 ? printf("Turismo: %s venceu!\n", nome) : printf("Turismo: %s venceu!\n", nome2);
    densidade < densidade2 ? printf("Densidade: %s venceu!\n", nome) : printf("Densidade: %s venceu!\n", nome2);
    pib > pib2 ? printf("PIB: %s venceu!\n", nome) : printf("PIB: %s venceu!\n", nome2);
    percapita > percapita2 ? printf("PIB per capita: %s venceu!\n", nome) : printf("PIB per capita: %s venceu!\n", nome2);
    trunfo > trunfo2 ? printf("Super Poder: %s venceu!\n", nome) : printf("Super Poder: %s venceu!\n", nome2);

    //Seleção de atributo a ser comparado:

    printf("Selecione o atributo a ser comparado: \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - Pontos turísticos\n");
    printf("4 - Densidade populacional\n");
    printf("5 - PIB\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            if (populacao > populacao2) {
                printf("População: %s venceu com a população de %lu Habitantes! \n", nome, populacao);
            } else {
                printf("População: %s venceu com a população de %lu Habitantes! \n", nome2, populacao2);
                
            }
            break;
        case 2:
            if (area > area2) {
                printf("Area: %s venceu com a área de %.2f Km²! \n", nome, area);
            } else {
                printf("Area: %s venceu com a área de %.2f Km²! \n", nome2, area2);

            }
            break;
        case 3:
            if (turismo > turismo2) {
                printf("Pontos turísticos: %s venceu com %d pontos turísticos! \n", nome, turismo);
            } else {
                printf("Pontos turísticos: %s venceu com %d pontos turísticos! \n", nome2, turismo2);

            }
            break;
        case 4:
            if (densidade < densidade2) {
                printf("Densidade populacional: %s venceu com a densidade de %.2f Hab/km²! \n", nome, densidade);
            } else {
                printf("Densidade populacional: %s venceu com a densidade de %.2f Hab/Km²! \n", nome2, densidade2);
            }
            break;
        case 5:
            if (pib > pib2) {
                printf("PIB: %s venceu com o PIB de %.2f Trilhões de reais! \n", nome, pib);
            } else {
                printf("PIB: %s venceu com o PIB de %.2f Trilhões de reais! \n", nome2, pib2);
            }
            break;
        case 6:
            if (percapita > percapita2) {
                printf("PIB per capita: %s venceu com o PIB per capita de %.2f Reais! \n", nome, percapita);
            } else {
                printf("PIB per capita: %s venceu com o PIB per capita de %.2f Reais! \n", nome2, percapita2);
            }
            break;
        case 7:
            if (trunfo > trunfo2) {
                printf("Super Poder: %s venceu com o Super Poder de %.2f! \n", nome, trunfo);
            } else {
                printf("Super Poder: %s venceu com o Super Poder de %.2f! \n", nome2, trunfo2);
            }
            break;
        default:
            printf("Opção inválida! \n");
            break;    
    }
    

    return 0;
}
