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
    char carta1;
    char carta2;

    int opcao;
    float valor1, valor2;
    char *atributos;

    printf("********Super Trunfo Aventureiro********\n");
    printf("Carta 1: %s\n", nome1);
    printf("Carta 2: %s\n", nome2);
    
//opções

    printf("\nEscolha o atributo para comparar:\n");
    
    printf("\n1 - População\n");
    
    printf("2 - Área\n");
    
    printf("3 - PIB\n");
    
    printf("4 - Número de Pontos Turísticos\n");
    
    printf("5 - Densidade\n");
    
    printf("\nOpção: ");
    scanf("%d", &opcao);
    
    switch (opcao)
    {
    case 1:
        valor1 = populacao1;
        valor2 = populacao2;
        atributos = "População";
        break;
    
    case 2:
        valor1 = area1;
        valor2 = area2;
        atributos = "Área";
        break;
    
    case 3:
        valor1 = pib1;
        valor2 = pib2;
        atributos = "Pib";
        break;
    
    case 4:
        valor1 = pontosturisticos1;
        valor2 = pontosturisticos2;
        atributos = "Pontos Turísticos";
        break;

    case 5:
        valor1 = densidade1;
        valor2 = densidade2;
        atributos = "Densidade";
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }


//Comparação

if (opcao == 5){ //densidade
    if(valor1 < valor2)
        printf("\n%s vence!\n", nome1);
    
    else if (valor2 < valor1)
        printf("\n%s vence!\n", nome2);
    else
        printf("Empate!\n");
} else { //outros atributos
    if(valor1 > valor2)
        printf("\n%s vence!\n", nome1);
    else if(valor2 > valor1)
        printf("\n%s vence!\n", nome2);
    else
        printf("Empate!\n");
}

    printf("\nAtributo: %s\n", atributos);
    printf("%s: %.2f\n", nome1, valor1);
    printf("%s: %.2f\n", nome2, valor2);









return 0;
}