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
    printf("      Desafio Super Trunfo Lógica!\n");
    printf("\n----------Cadastro de Carta 1----------\n");
    
    printf("Estado: \n");
    fgets(estado1, 40, stdin); //Fgets Ler uma linha de texto mesmo com espaço
    estado1[strcspn(estado1, "\n")] = 0; //procura onde está o \n na string

    printf("Código de Carta (ex: A01): \n");
    scanf("%3s", codigo1);

    getchar();
    printf("Nome da Cidade: \n");
    fgets(cidade1, 40, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("Número de população: \n");
    scanf("%lu", &populacao1);

    getchar();
    printf("Área: \n");
    scanf("%f", &area1);

    getchar();
    printf("PIB: \n");
    scanf("%f", &pib1);

    getchar();
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos1);


//Cadastro de carta 2

    printf("\n----------Cadastro de Carta 2----------\n");
    
    getchar();
    printf("Estado: \n");
    fgets(estado2, 40, stdin);
    estado2[strcspn(estado2, "\n")] = 0;

    printf("Código de Carta (ex: B01): \n");
    scanf("%3s", codigo2);

    getchar();
    printf("Nome da Cidade: \n");
    fgets(cidade2, 40, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;
    
    printf("Número de população: \n");
    scanf("%lu", &populacao2);

    getchar();
    printf("Área: \n");
    scanf("%f", &area2);

    getchar();
    printf("PIB: \n");
    scanf("%f", &pib2);

    getchar();
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos2);


    
//Cálculo carta 1

    float densidade1 = populacao1 / area1;
    
    float pibPercapital1 = (pib1 * 1000000000) / populacao1; 

//Cálculo carta 2
    
    float densidade2 = populacao2 / area2;

    float pibPercapital2 = (pib2 * 1000000000) / populacao2;    

//Exibição dos Resultados

    printf("\n----------Resultados das Cartas----------\n");

    printf("Carta 1 - %s (%s): %lu Habitantes\n", cidade1, estado1, populacao1);

    printf("Carta 2 - %s (%s): %lu Habitantes\n", cidade2, estado2, populacao2);

    //Comparação
    
    if (populacao1 > populacao2)
    {
        printf("A Cidade Vencedora e: %s\n", cidade1);
    }
    else {
        printf("A Cidade Vencedora e: %s\n", cidade2);
    }



return 0;
}
    

