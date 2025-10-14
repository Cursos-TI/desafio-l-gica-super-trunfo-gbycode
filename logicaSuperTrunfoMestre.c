#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
   
//carta cadastradas
    char nome1[50] = "Brasil";
    char nome2[50] = "Japão";

    int populacao1 = 214000000, populacao2 =125800000;
    float area1 = 8515767.0, area2 = 377975.0;
    float pib1 = 2.055, pib2 = 5.065;
    int pontosturisticos1 = 20, pontosturisticos2 = 10;
    float densidade1 = populacao1 / area1;
     float densidade2 = populacao2 / area2;
    
    int opcao1, opcao2;
    float valor1_1, valor1_2, valor2_1, valor2_2;
    char *atributo1;
    char *atributo2;

    printf("********Super Trunfo Aventureiro********\n");
    printf("Carta 1: %s\n", nome1);
    printf("Carta 2: %s\n", nome2);
    
//Primeiro atributo

    printf("\nEscolha o primeiro atributo para comparar:\n");
    
    printf("\n1 - População\n");
    
    printf("2 - Área\n");
    
    printf("3 - PIB\n");
    
    printf("4 - Número de Pontos Turísticos\n");
    
    printf("5 - Densidade\n");
    
    printf("\nOpção: ");
    scanf("%d", &opcao1);
    
    switch (opcao1)
    {
    case 1:
        valor1_1 = populacao1;
        valor2_1 = populacao2;
        atributo1 = "População";
        break;
    
    case 2:
        valor1_1 = area1;
        valor2_1 = area2;
        atributo1 = "Área";
        break;
    
    case 3:
        valor1_1 = pib1;
        valor2_1 = pib2;
        atributo1 = "Pib";
        break;
    
    case 4:
        valor1_1 = pontosturisticos1;
        valor2_1 = pontosturisticos2;
        atributo1 = "Pontos Turísticos";
        break;

    case 5:
        valor1_1 = densidade1;
        valor2_1 = densidade2;
        atributo1 = "Densidade";
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }

//Segundo atributo 

    printf("\n********Escolha o segundo atributo********\n");
    for (int i = 1; i <= 5; i++){
        if (i != atributo1){
            switch (i)
            {
            case 1:
                printf("1 - População\n");
                break;
            case 2:
                printf("2 - Área\n");
                break;
            case 3:
                printf("3 - Pib\n");
                break;
            case 4:
                printf("4 - Pontos Turísticos\n");
                break;
            case 5:
                printf("5 - Densidade\n");
                break;
            default:
                break;
            }
        }
    }
    printf("\nOpção: ");
    scanf("%d", &opcao2);

    if (opcao2 == opcao1 || opcao2 < 1 || opcao2 >5){
        printf("opção inválida!\n");
    }

switch (opcao2)
    {
    case 1:
        valor1_2 = populacao1;
        valor2_2 = populacao2;
        atributo2 = "População";
        break;
    
    case 2:
        valor1_2 = area1;
        valor2_2 = area2;
        atributo2 = "Área";
        break;
    
    case 3:
        valor1_2 = pib1;
        valor2_2 = pib2;
        atributo2 = "Pib";
        break;
    
    case 4:
        valor1_2 = pontosturisticos1;
        valor2_2 = pontosturisticos2;
        atributo2 = "Pontos Turísticos";
        break;

    case 5:
        valor1_2 = densidade1;
        valor2_2 = densidade2;
        atributo2 = "Densidade";
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }

//cálculo das somas
float soma1 = valor1_1 + valor1_2;
float soma2 = valor2_1 + valor2_2;

//Resultado Final
printf("\n=================Resultado final=================\n");

    printf("Carta 1: %s\n", nome1);
    printf("Carta 2: %s\n\n", nome2);

    printf("Atributos escolhidos: \n");
    printf("1: %s\n2: %s\n\n", atributo1, atributo2);

    printf("%s - %s: %.2f | %s: %.2f\n", atributo1, nome1, valor1_1, nome2, valor2_1);
    printf("%s - %s: %.2f | %s: %.2f\n\n", atributo2, nome2, valor1_2, nome2, valor2_2);

    printf("Soma dos atributos: \n");
    printf("%s: %.2f\n", nome1, soma1);
    printf("%s: %.2f\n", nome2, soma2);

    //comparação final

    if(soma1 > soma2)
        printf("%s venceu a rodada!\n", nome1);
        else if (soma2 > soma1)
            printf("%s venceu a rodada!\n", nome2);
        else
            printf("Empate!\n");

return 0;
}