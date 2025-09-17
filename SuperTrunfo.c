#include <stdio.h>
#include <locale.h>

    int main(){
    setlocale(LC_ALL, "");
        
    char cartaEstado1, cartaEstado2;
    char nomeCidade1[50], nomeCidade2[50], codCarta1[50], codCarta2[50];
    int nPontosTuristicos1, nPontosTuristicos2, resultadoPopulacao, resultadoArea, resultadoPib, resultadoPturisticos, resultadoDensidade, resultadoPibPerCapita, resultadoSuperPoder;
    float areaKm1, pib1, areaKm2, pib2, densidade1, densidade2, pibPerCapita1, pibPerCapita2, superPoder1, superPoder2;
    unsigned long int populacao1, populacao2; 

    printf ("Digite o estado (CARTA 1):\n");
    scanf (" %c", &cartaEstado1);

    printf ("Digite o código (CARTA 1):\n");
    scanf (" %s", &codCarta1);

    printf ("Digite o nome da Cidade (CARTA 1):\n");
    scanf (" %s", &nomeCidade1);

    printf ("Digite a população da Cidade (CARTA 1):\n");
    scanf (" %lu", &populacao1);

    printf ("Digite a Área em km² (CARTA 1):\n");
    scanf (" %f", &areaKm1);

    printf ("Digite o PIB da Cidade (CARTA 1):\n");
    scanf (" %f", &pib1);

    printf ("Digite o número de pontos turísticos (CARTA 1):\n");
    scanf (" %d", &nPontosTuristicos1);

    superPoder1 = populacao1 + areaKm1 + pib1 + pibPerCapita1 + (1.0f / densidade1) + nPontosTuristicos1;
    densidade1 = populacao1 / areaKm1;
    pibPerCapita1 = pib1 / populacao1;

    printf ("CARTA 1: \n");
    printf ("ESTADO: %c \n", cartaEstado1 );
    printf ("CÓDIGO: %s \n", codCarta1 );
    printf ("NOME DA CIDADE: %s \n", nomeCidade1);
    printf ("POPULAÇÃO: %lu\n", populacao1 );
    printf ("Área: %.2f km² \n", areaKm1);
    printf ("PIB: %.2f\n", pib1);
    printf ("PONTOS TURÍSTICOS: %d\n", nPontosTuristicos1);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", densidade1);
    printf("PIB PER CAPITA: %.2f\n", pibPerCapita1);
    printf("SUPER PODER: %.2f\n", superPoder1);

    printf ("Digite o estado (CARTA 2):\n");
    scanf (" %c", &cartaEstado2);

    printf ("Digite o código (CARTA 2):\n");
    scanf (" %s", &codCarta2);

    printf ("Digite o nome da Cidade (CARTA 2):\n");
    scanf (" %s", &nomeCidade2);

    printf ("Digite a população da Cidade (CARTA 2):\n");
    scanf (" %lu", &populacao2);

    printf ("Digite a Área em km² (CARTA 2):\n");
    scanf (" %f", &areaKm2);

    printf ("Digite o PIB da Cidade (CARTA 2):\n");
    scanf (" %f", &pib2);

    printf ("Digite o número de pontos turísticos (CARTA 2):\n");
    scanf (" %d", &nPontosTuristicos2);

    superPoder2 = populacao2 + areaKm2 + pib2 + pibPerCapita2 + (1.0f / densidade2) + nPontosTuristicos2;
    densidade2 = populacao2 / areaKm2;
    pibPerCapita2 = pib2 / populacao2;

    printf ("CARTA 2: \n");
    printf ("ESTADO: %c \n", cartaEstado2 );
    printf ("CÓDIGO: %s \n", codCarta2 );
    printf ("NOME DA CIDADE: %s\n", nomeCidade2);
    printf ("POPULAÇÃO: %lu\n", populacao2 );
    printf ("Área: %.2f km² \n", areaKm2);
    printf ("PIB: %.2f\n", pib2);
    printf ("PONTOS TURÍSTICOS: %d\n", nPontosTuristicos2);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", densidade2);
    printf("PIB PER CAPITA: %.2f\n", pibPerCapita2);
    printf("SUPER PODER: %.2f\n", superPoder2);

    resultadoPopulacao = populacao1 > populacao2;
    resultadoArea = areaKm1 > areaKm2;
    resultadoPib = pib1 > pib2;
    resultadoPturisticos = nPontosTuristicos1 > nPontosTuristicos2;
    resultadoDensidade = densidade1 > densidade2;
    resultadoPibPerCapita = pibPerCapita1 > pibPerCapita2;
    resultadoSuperPoder = superPoder1 > superPoder2;

    //0 para carta 2 ganhar, 1 para carta 1 ganhar 
    printf("RESULTADOS DA PARTIDA:\n");
    printf("POPULAÇÃO: %d\n", resultadoPopulacao);
    printf("ÁREA: %d\n", resultadoArea);
    printf("PIB: %d\n", resultadoPib);
    printf("PONTOS TURÍSTICOS: %d\n", resultadoPturisticos);
    printf("DENSIDADE POPULACIONAL: %d\n", resultadoDensidade);
    printf("PIB PER CAPITA: %d\n", resultadoPibPerCapita);
    printf("SUPER PODER: %d\n", resultadoSuperPoder);


return 0;
}