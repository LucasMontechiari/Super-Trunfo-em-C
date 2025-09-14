#include <stdio.h>

    int main(){
    char cartaEstado1, cartaEstado2;
    char nomeCidade1[50], nomeCidade2[50], codCarta1[50], codCarta2[50];
    int populacao1, populacao2, nPontosTuristicos1, nPontosTuristicos2;
    float areaKm1, pib1, areaKm2, pib2;

    printf ("Digite o estado (CARTA 1):\n");
    scanf (" %c", &cartaEstado1);

    printf ("Digite o código (CARTA 1):\n");
    scanf (" %s", &codCarta1);

    printf ("Digite o nome da Cidade (CARTA 1):\n");
    scanf (" %s", &nomeCidade1);

    printf ("Digite a população da Cidade (CARTA 1):\n");
    scanf (" %d", &populacao1);

    printf ("Digite a Área em km² (CARTA 1):\n");
    scanf (" %f", &areaKm1);

    printf ("Digite o PIB da Cidade (CARTA 1):\n");
    scanf (" %f", &pib1);

    printf ("Digite o número de pontos turísticos (CARTA 1):\n");
    scanf (" %d", &nPontosTuristicos1);

    printf ("CARTA 1: \n");
    printf ("ESTADO: %c \n", cartaEstado1 );
    printf ("CÓDIGO: %s \n", codCarta1 );
    printf ("NOME DA CIDADE: %s \n", nomeCidade1);
    printf ("POPULAÇÃO: %d\n", populacao1 );
    printf ("Área: %.2f km² \n", areaKm1);
    printf ("PIB: %.2f\n", pib1);
    printf ("PONTOS TURÍSTICOS: %d\n", nPontosTuristicos1);

    printf ("Digite o estado (CARTA 2):\n");
    scanf (" %c", &cartaEstado2);

    printf ("Digite o código (CARTA 2):\n");
    scanf (" %s", &codCarta2);

    printf ("Digite o nome da Cidade (CARTA 2):\n");
    scanf (" %s", &nomeCidade2);

    printf ("Digite a população da Cidade (CARTA 2):\n");
    scanf (" %d", &populacao2);

    printf ("Digite a Área em km² (CARTA 2):\n");
    scanf (" %f", &areaKm2);

    printf ("Digite o PIB da Cidade (CARTA 2):\n");
    scanf (" %f", &pib2);

    printf ("Digite o número de pontos turísticos (CARTA 2):\n");
    scanf (" %d", &nPontosTuristicos2);

    printf ("CARTA 2: \n");
    printf ("ESTADO: %c \n", cartaEstado2 );
    printf ("CÓDIGO: %s \n", codCarta2 );
    printf ("NOME DA CIDADE: %s\n", nomeCidade2);
    printf ("POPULAÇÃO: %d\n", populacao2 );
    printf ("Área: %.2f km² \n", areaKm2);
    printf ("PIB: %.2f\n", pib2);
    printf ("PONTOS TURÍSTICOS: %d\n", nPontosTuristicos2);

return 0;
}