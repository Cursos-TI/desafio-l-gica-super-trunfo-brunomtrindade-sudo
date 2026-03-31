#include <stdio.h>

int main() {
    unsigned long int populacao, populacao2;
    int turismo, turismo2;
    float area, area2, densidade, densidade2;
    float pib, pib2, percapita, percapita2;
    float trunfo, trunfo2;
    char codigo[3], codigo2[3];
    char letra, letra2;
    char nome[30], nome2[30];
    

    //Parâmetros para a primeira carta:

    printf("Aqui você irá inserir os dados do estado para a primeira carta. \n");
    printf("Nome do estado: ");
    fgets(nome, 30, stdin);

    printf("Letra do estado, de 'A' a 'H': \n");
    scanf(" %c", &letra);

    printf("Área do estado: \n");
    scanf("%f", &area);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &turismo);

    printf("População do estado: \n");
    scanf("%lu", &populacao);

    printf("PIB do estado: \n");
    scanf("%f", &pib);
    percapita = pib / populacao;

    printf("Código do estado: \n    ");
    scanf("%s", codigo);

    densidade = populacao / area;

    //Parâmetros para a segunda carta.

    printf("Agora, insira os dados do estado para a segunda carta. \n");
    printf("Nome do estado: \n");
    getchar();
    fgets(nome2, 30, stdin);

    printf("Letra do estado, de 'A' a 'H': \n");
    scanf(" %c", &letra2);

    printf("Área do estado: \n  ");
    scanf("%f", &area2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &turismo2);

    printf("População do estado: \n");
    scanf("%lu", &populacao2);
    densidade2 = populacao2 / area2;

    printf("PIB do estado: \n");
    scanf("%f", &pib2);
    percapita2 = pib2 / populacao2;

    printf("Código do estado: \n");
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
printf("Código: %s\n\n", codigo);

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

    //Atributo selecionado:
    printf("O atributo mais valioso da carta 1 é: Área do estado com %f Km²\n", area);
    printf("O atributo mais valioso da carta 2 é: Área do estado com %f Km²\n", area2);
        if (percapita > percapita2) {
            printf("Carta 1 - %s venceu!\n", nome);
        }
        else {
            printf("Carta 2 - %s venceu!\n", nome2);
        }


    return 0;
}
