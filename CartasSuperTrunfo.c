#include <stdio.h>


int main() {

    char estado[1] = "A";
    char cidade[20];
    int codigo;
    int populacao = 1;
    float area = 1;
    float pib = 1;
    int turisticos = 1;
    float densidade = 1;
    float pibpercapta = 1;
    float superpoder = 1;


//carta 2
    
    char estado2[1] = "B";
    char cidade2[20];
    int codigo2;
    int populacao2 = 1;
    float area2 = 1;
    float pib2 = 1;
    int turisticos2 = 1;
    float densidade2 = 1;
    float pibpercapta2 = 1;
    float superpoder2 = 1;

//carta 1 
    printf ("carta 1:\n");
    printf ("Insira a quantidade populacional da cidade:\n");
    scanf ("%d", &populacao);
    printf ("insira a área da cidade em KM²:\n");
    scanf ("%f", &area);
    printf ("Insira o PIB:\n");
    scanf ("%f", &pib);
    printf ("insira a quantidade de pontos turísticos:\n");
    scanf ("%d", &turisticos);
    printf ("\n");

//exibir resultado da carta 1
    printf ("----------------------------------------\n");
    
    printf ("Nome da cidade: %s\n", cidade);
    printf ("População: %d \n", populacao);
    printf ("Área: %.2f KM²\n", area);
    printf ("PIB: %.2f reais\n", pib);
    printf ("Pontos turísticos: %d \n", turisticos);
    printf ("Densidade populacional: %.2f hab/KM²\n", densidade=populacao/area);
    printf ("Pib per Capita: %.2f reais\n", pibpercapta=pib/populacao);
    printf ("Super Poder = %.2f ", (superpoder= populacao+area+pib+turisticos+pibpercapta-(1/densidade)));
    printf ("\n");

//carta 2

    printf ("carta 2:\n");
    printf ("Insira a quantidade populacional da cidade:\n");
    scanf ("%d", &populacao2);
    printf ("insira a área da cidade em KM²:\n");
    scanf ("%f", &area2);
    printf ("Insira o PIB:\n");
    scanf ("%f", &pib2);
    printf ("insira a quantidade de pontos turísticos:\n");
    scanf ("%d", &turisticos2);
    printf ("\n");


//exibir resultado da carta 2
    printf ("----------------------------------------\n");
    
    printf ("Nome da cidade: %s\n", cidade2);
    printf ("População: %d \n", populacao2);
    printf ("Área: %.2f KM²\n", area2);
    printf ("PIB: %.2f reais\n", pib2);
    printf ("Pontos turísticos: %d \n", turisticos2);
    printf ("Densidade populacional: %.2f hab/KM²\n", densidade2=populacao2/area2);
    printf ("Pib per Capita: %.2f reais\n", pibpercapta2=pib2/populacao2);
    printf ("Super Poder = %.2f", superpoder2= populacao2+area2+pib2+turisticos2+pibpercapta2-(1/densidade2));
    printf ("\n");


//Comparação
    
    printf("-------------------------------\n");
    printf("Polulação : carta %d ganhou(%d)\n", (populacao<populacao2)+1, populacao>populacao2);
    printf("Area : carta %d ganhou(%d)\n", (area<area2)+1, area>area2);
    printf("Pib : carta %d ganhou(%d)\n", (pib<pib2)+1, pib>pib2);
    printf("Pontos turísticos : carta %d ganhou(%d)\n", (turisticos<turisticos2)+1, turisticos>turisticos2);
    printf("Densidade populacional : carta %d ganhou(%d)\n", (densidade2<densidade)+1, densidade2<densidade);
    printf("Pib Per Capita : carta %d ganhou(%d)\n", (pib<pib2)+1, pib>pib2);
    printf("Super Poder: Carta %d ganhou(%d)\n", (superpoder<superpoder2)+1, superpoder>superpoder2);


    return 0;
}
