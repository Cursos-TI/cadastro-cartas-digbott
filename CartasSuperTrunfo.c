#include <stdio.h>

int main(){

//Nesse programa o usuário vai cadastrar 2 cartas do Super Trunfo

// Dados da carta 1===
char estado1;
char codigo1[10];
char cidade1[20];
int populacao1;
float area1;
float pib1;
int pontosturisticos1;
float densidadepop1;
float pibperc1;
//====================

// Dados da carta 2===
char estado2;
char codigo2[10];
char cidade2[20];
int populacao2;
float area2;
float pib2;
int pontosturisticos2;
float densidadepop2;
float pibperc2;
//====================

    printf("JOGO SUPER TRUNFO! \n");

// Entrada de dados da carta1 pelo usuário

    printf("Digite uma letra de A a H que representa o Estado da carta 1:");
        scanf("%c", &estado1);
    printf("Digite um codigo com a letra do estado seguido de um numero de 01 a 04 que representa a carta 1:");
        scanf("%s", codigo1);
    printf("Digite o nome da cidade da carta 1:");
        scanf("%s", cidade1);
    printf("Digite a populacao da carta 1:");
        scanf("%d", &populacao1);
    printf("Digite a area da carta 1:");
        scanf("%f", &area1);
    printf("Digite o pib da carta 1:");
        scanf("%f", &pib1);
    printf("Digite quantos pontos turisticos tem na carta 1:");
        scanf("%d", &pontosturisticos1);
// fim da entrada de dados da carta 1

// Entrada de dados da carta 2 pelo usuário

    printf("Digite uma letra de A a H que representa o Estado da carta 2:");
        scanf("%c", &estado2);
    printf("Digite um codigo com a letra do estado seguido de um numero de 01 a 04 que representa a carta 1:");
        scanf("%s", codigo2);
    printf("Digite o nome da cidade da carta 1:");
        scanf("%s", cidade2);
    printf("Digite a populacao da carta 1:");
        scanf("%d", &populacao2);
    printf("Digite a area da carta 1:");
        scanf("%f", &area2);
    printf("Digite o pib da carta 1:");
        scanf("%f", &pib2);
    printf("Digite quantos pontos turisticos tem na carta 1:");
        scanf("%d", &pontosturisticos2);
// fim da entrada de dados da carta 2

// Mostra ao usuário a Carta 1   
    printf("Carta 1 \n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("Populacao: %d \n", populacao1);
    printf("Area: %f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Pontos turisticos: %d \n", pontosturisticos1);
    printf("Densidade Populacional: %.2f.", densidadepop1 = populacao1 / area1);
    printf("PIB Per capita: %.2f.", pibperc1 = pib1 / populacao1);

// Mostra ao usuário a Carta 2  
    printf("Carta 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("Populacao: %d \n", populacao2);
    printf("Area: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Pontos turisticos: %d \n", pontosturisticos2);
    printf("Densidade Populacional: %.2f.", densidadepop2 = populacao2 / area2);
    printf("PIB Per capita: %.2f.", pibperc2 = pib2 / populacao2);


  return 0;
}