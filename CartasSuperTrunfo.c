#include <stdio.h>

    int main(){

        //Declaração de variáveis.
        int populacao1, populacao2, turistico1, turistico2;
        char cidade1[20], cidade2[20], estado1, estado2, codigo1[5], codigo2[5];
        float pib1, pib2, area1, area2;

        //Leitura dos dados da carta 1.
        printf("Digite os dados da carta 1:\n");

        printf("Digite o estado: ");
        scanf(" %c", &estado1);

        printf("Digite o código: ");
        scanf("%s", codigo1);

        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]%*c", cidade1); //Utilização desse padrão de formatação para leitura de nomes compostos.

        printf("Digite a população da cidade: ");
        scanf("%d", &populacao1);

        printf("Digite a área da cidade: ");
        scanf("%f", &area1);

        printf("Digite o PIB da cidade: ");
        scanf("%f", &pib1);

        printf("Digite a quantidade de pontos turísticos: ");
        scanf("%d", &turistico1);

        //Leitura dos dados da carta 2

        printf("\nDigite os dados da carta 2:\n");

        printf("Digite o estado: ");
        scanf(" %c", &estado2);

        printf("Digite o código: ");
        scanf("%s", codigo2);

        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]%*c", cidade2); //Utilização desse padrão de formatação para leitura de nomes compostos.

        printf("Digite a população da cidade: ");
        scanf("%d", &populacao2);

        printf("Digite a área da cidade: ");
        scanf("%f", &area2);

        printf("Digite o PIB da cidade: ");
        scanf("%f", &pib2);

        printf("Digite a quantidade de pontos turísticos: ");
        scanf("%d", &turistico2);

        //Exibição dos dados das cartas

        printf("\nCarta 1: \n");
        printf("Estado: %c\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Número de Pontos Turísticos: %d\n", turistico1);
        
        printf("\nCarta 2: \n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Número de Pontos Turísticos: %d\n", turistico2);


        return 0;

    }