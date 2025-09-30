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
float superpoder1;
float densidadepop1inverso;
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
float superpoder2;
float densidadepop2inverso;
//====================

    printf("JOGO SUPER TRUNFO! \n \n");

// Entrada de dados da carta1 pelo usuário

    printf("Digite uma letra de A a H que representa o Estado da carta 1:");
        scanf(" %c", &estado1);
    printf("Digite um codigo com a letra do estado seguido de um numero de 01 a 04 que representa a carta 1:");
        scanf("%s", codigo1);
    printf("Digite o nome da cidade da carta 1:");
        scanf(" %[^\n]", cidade1);
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
        scanf(" %c", &estado2);
    printf("Digite um codigo com a letra do estado seguido de um numero de 01 a 04 que representa a carta 2:");
        scanf("%s", codigo2);
    printf("Digite o nome da cidade da carta 2:");
        scanf(" %[^\n]", cidade2);
    printf("Digite a populacao da carta 2:");
        scanf("%d", &populacao2);
    printf("Digite a area da carta 2:");
        scanf("%f", &area2);
    printf("Digite o pib da carta 2:");
        scanf("%f", &pib2);
    printf("Digite quantos pontos turisticos tem na carta 2:");
        scanf("%d", &pontosturisticos2);
// fim da entrada de dados da carta 2

// Mostra ao usuário a Carta 1   
    printf("Carta 1 \n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("Populacao: %d \n", populacao1);
    printf("Area: %fkm² \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Pontos turisticos: %d \n", pontosturisticos1);
    densidadepop1 = (float)populacao1 / area1;
    densidadepop1inverso = area1 / (float)populacao1;
    printf("Densidade Populacional: %.2f hab/km². \n", densidadepop1);
    pibperc1 = pib1 / (float)populacao1;
    printf("PIB Per capita: %.2f. \n", pibperc1);
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontosturisticos1 + pibperc1 + densidadepop1inverso;
    printf("Superpoder: %.2f. \n\n", superpoder1);

// Mostra ao usuário a Carta 2  
    printf("Carta 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("Populacao: %d \n", populacao2);
    printf("Area: %fkm² \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Pontos turisticos: %d \n", pontosturisticos2);
    densidadepop2 = (float)populacao2 / area2;
    densidadepop2inverso = area2 / (float)populacao2;
    printf("Densidade Populacional: %.2f hab/km². \n", densidadepop2);
    pibperc2 = pib2 / (float)populacao2;
    printf("PIB Per capita: %.2f. \n", pibperc2);
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontosturisticos2 + pibperc2 + densidadepop2inverso;
    printf("Superpoder: %.2f. \n\n", superpoder2);


// Comparacao das cartas

   printf("Comparacao de cartas. \n\n");
   int res;
   int vencedor;
   res = (populacao1 > populacao2);
   vencedor = res * 1 + (1-res)*2;
   printf("Populacao: Carta %d e a vencedora. %d \n", vencedor, res);
   res = (area1 > area2);
   vencedor = res * 1 + (1-res)*2;
   printf("Area: Carta %d e a vencedora. %d \n", vencedor, res);
   res = (pib1 > pib2);
   vencedor = res * 1 + (1-res)*2;
   printf("PIB: Carta %d e a vencedora. %d \n", vencedor, res);
   res = (pontosturisticos1 > pontosturisticos2);
   vencedor = res * 1 + (1-res)*2;
   printf("Pontos Turisticos: Carta %d e a vencedora. %d \n", vencedor, res);
   res = (densidadepop1 < densidadepop2);
   vencedor = res * 1 + (1-res)*2;
   printf("Densidade Populacional: Carta %d e a vencedora. %d \n", vencedor, res);
   res = (pibperc1 > pibperc2);
   vencedor = res * 1 + (1-res)*2;
   printf("PIB per capita: Carta %d e a vencedora. %d \n", vencedor, res);
   res = (superpoder1 > superpoder2);
   vencedor = res * 1 + (1-res)*2;
   printf("Super Poder: Carta %d e a vencedora. %d \n\n", vencedor, res);
   
   


}