#include <stdio.h>

// Estado
// codigo da carta
// nome da cidade
// populacao
// area em km²
// pib
// numero de pontos turisticos


int main() {

    char estado = "A";
    char cidade[20];
    int codigo;
    int populacao = 1;
    float area = 1;
    float pib = 1;
    int turisticos = 1;
    float densidade = 1;
    float pibpercapta = 1;

    
//carta 1 
    printf ("Insira a cidade?\n");
    scanf ("%[^\n]s", cidade);

    printf ("Insira a quantidade populacional da cidade:\n");
    scanf ("%d", &populacao);

    printf ("insira a área da cidade em KM²:\n");
    scanf ("%f", &area);

    printf ("Insira o PIB:\n");
    scanf ("%f", &pib);

    printf ("insira a quantidade de pontos turísticos:\n");
    scanf ("%d", &turisticos);

//exibir resultado da carta 1
    printf ("----------------------------------------\n");
    
    printf ("Nome da cidade: %s\n", cidade);
    printf ("População: %d \n", populacao);
    printf ("Área: %.2f KM²\n", area);
    printf ("PIB: %.2f reais\n", pib);
    printf ("Pontos turísticos: %d \n", turisticos);
    printf ("Densidade populacional: %.2f hab/KM²\n", densidade=populacao/area);
    printf ("Pib per Capita: %.2f reais\n", pibpercapta=pib/populacao);
    printf ("\n");

    return 0;
}
