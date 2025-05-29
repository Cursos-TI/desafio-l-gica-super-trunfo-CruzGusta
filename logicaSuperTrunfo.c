#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estadoA[3], estadoB[3];
    char codigoA [5], codigoB [5];
    char nomeCidA [30], nomeCidB [30];
    int PturisticosA, PturisticosB, resultado;
    float areaKmA, areaKmB, pibA, pibB, densiPopA, densiPopB, PIBca, PIBcb, densiPopREa, densiPopREb;
    unsigned long int populacaoA, populacaoB; // uso de unsigned para grandes numeros

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
      // perguntas para cadastro carta 1
    printf("--cadastro da carta A-- \n");
    printf(" Estado : \n");
    scanf(" %s", &estadoA );

    printf("Código da carta : \n");
    scanf(" %s", codigoA);

    printf("Nome da cidade : \n");
    scanf(" %[^\n]", nomeCidA);

    printf("População : \n");
    scanf("%lu", &populacaoA);

    printf("Área em km² : \n");
    scanf("%f",&areaKmA );

    printf("PIB : \n");
    scanf("%f",&pibA );

    printf("Pontos turisticos : \n");
    scanf("%d", &PturisticosA);

    densiPopA = populacaoA/areaKmA; // calculo da densidade ppulacional
    PIBca = (float) pibA/populacaoA; // calculo do PIB per capita com casting
    densiPopREa = (float) areaKmA/populacaoA; // densidade populaconal reverso
   
    /*float SuperPoderA = (float) populacaoA + areaKmA + pibA + PturisticosA + PIBca + densiPopREa;
     //codigo comentado pois não precisa nesse desfio
    */
    getchar();
//carta 2
       // perguntas para cadastro
    printf("--cadastro da carta B-- \n");
    printf("Estado : \n"); 
    scanf(" %s", estadoB);

    printf("Código da carta : \n");
    scanf(" %s", codigoB);

    printf("Nome da cidade : \n");
    scanf(" %[^\n]", nomeCidB);

    printf("População : \n");
    scanf("%lu", &populacaoB);

    printf("Área em km² : \n");
    scanf("%f",&areaKmB );

    printf("PIB : \n");
    scanf("%f",&pibB );


    printf("Pontos turisticos : \n");
    scanf("%d", &PturisticosB);

    densiPopB = populacaoB/areaKmB;
    PIBcb = (float) pibB/populacaoB;
    densiPopREb = (float) areaKmB/populacaoB; // densidade populaconal reverso
    //float SuperPoderB = (float) populacaoB+ areaKmB + pibB + PturisticosB + PIBcb + densiPopB;


    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // print dos resultados da carta A
    printf("**carta A** \n");
    printf("Estado : %s \n Código da carta : %s \n", estadoA, codigoA);
    printf("Nome da cidade : %s \n População : %lu \n",nomeCidA, populacaoA );
    printf("Àrea : %.2f km² \n PIB : %.2f \n", areaKmA, pibA);
    printf("Pontos turisticos : %d \n", PturisticosA);
    printf("Densidade populacional : %.2f \n", densiPopA);
    printf("PIB per capita : %.2f \n", PIBca);
  // printf("Super poder : %.2f \n", SuperPoderA);
    printf("  \n");

// print dos resultados da carta B
    printf("**carta B** \n");
    printf("Estado : %s \n Código da carta : %s \n", estadoB, codigoB);
    printf("Nome da cidade : %s \n População : %lu \n",nomeCidB, populacaoB );
    printf("Àrea : %.2f km² \n PIB : %.2f \n", areaKmB, pibB);
    printf("Pontos turisticos : %d \n", PturisticosB);
    printf("Densidade populacional : %.2f \n", densiPopB);
    printf("PIB per capita : %.2f \n", PIBcb);
  // printf("Super poder : %.2f\n", SuperPoderB);
   printf("  \n");// pular linha por estetica
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
 // comparações das cartas no PIB per capita

if( PIBca > PIBcb){
    printf(" %s venceu por ter o PIB per capita de %.2f, maior que %s com %.2f \n",nomeCidA, PIBca, nomeCidB, PIBcb );
}else{ // se o PIB per capita da carta A for menor que o da B
    printf(" %s venceu por ter o PIB per capita de %.2f, maior que %s com %.2f \n",nomeCidB, PIBcb, nomeCidA, PIBca );
}
 

    return 0;
}
