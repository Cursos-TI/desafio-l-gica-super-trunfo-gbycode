#include <stdio.h>

int main() {

//variavel carta 1
    char codigo1[10] = "Carta 1";
    unsigned long int populacao1;
    char cidade1[40];
    float pib1;
    char estado1[40];
    int pontosturisticos1;
    float area1;

//variavel carta 2
    char codigo2[10] = "Carta 2";
    unsigned long int populacao2;
    char cidade2[40];
    float pib2;
    char estado2[40];
    int pontosturisticos2;
    float area2;

//Cadastro de carta 1
    printf("      Desafio Super Trunfo Mestre!\n");
    printf("\n----------Cadastro de Carta 1----------\n");
    
    printf("Estado: \n");
    scanf("%s", estado1);

    printf("Código de Carta (ex: A01): \n");
    scanf("%3s", codigo1);

    getchar();
    printf("Nome da Cidade: \n");
    scanf("%s", cidade1);

    printf("Número de população: \n");
    scanf("%lu", &populacao1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos1);


//Cadastro de carta 2

    printf("\n----------Cadastro de Carta 2----------\n");
    
    printf("Estado: \n");
    scanf(" %s", estado2);

    printf("Código de Carta (ex: A01): \n");
    scanf("%3s", codigo2);

    getchar();
    printf("Nome da Cidade: \n");
    scanf("%s", cidade2);

    printf("Populção: \n");
    scanf("%lu", &populacao2);

    printf("Área km: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos2 );

    
//Cálculo carta 1
    float densidade1 = populacao1 / area1;
    float pibPercapital1 = (pib1 * 1000000000) / populacao1; 

//Cálculo carta 2
    
float densidade2 = populacao2 / area2;

float pibPercapital2 = (pib2 * 1000000000) / populacao2;    

//Super poder
    
float PoderA = populacao1 
                 + area1 
                 + pib1 
                 + pontosturisticos1 
                 + pibPercapital1
                 + (1.0f / densidade1);
    
float PoderB = populacao2 
                 + area2 
                 + pib2 
                 + pontosturisticos2
                 + pibPercapital2
                 + (1.0f / densidade2);



//comparação das cartas

    printf("\n----------Comparação de Cartas----------\n");
    
    printf("População: Carta %s venceu %d\n", 
        (populacao1 > populacao2) ? "Carta 1" : "Carta 2",
        (populacao1 > populacao2));

    printf("Área: Carta %s venceu %d\n", 
        (area1 > area2) ? "Carta 1" : "Carta 2",
        (area1 > area2));

    printf("PIB: Carta %s venceu %d\n", 
        (pib1 > pib2) ? "Carta 1" : "Carta 2",
        (pib1 > pib2));

    printf("Pontos Turisticos: Carta %s venceu %d\n", 
        (pontosturisticos1 > pontosturisticos2) ? "Carta 1" : "Carta 2",
        (pontosturisticos1 > pontosturisticos2));

    printf("Densidade: Carta %s venceu %d\n", 
        (densidade1 < densidade2) ? "Carta 1" : "Carta 2",
        (densidade1 < densidade2));

    printf("PIB Per Capital: Carta %s venceu %d\n", 
        (pibPercapital1 > pibPercapital2) ? "Carta 1" : "Carta 2",
        (pibPercapital1 > pibPercapital2));

    printf("Super Poder: Carta %s venceu %d\n", 
        (PoderA > PoderB) ? "Carta 1" : "Carta 2",
        (PoderA > PoderB));
        
return 0;
}
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

