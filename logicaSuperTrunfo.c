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
    int PturisticosA, PturisticosB, escolha;
    float areaKmA, areaKmB, pibA, pibB, densiPopA, densiPopB, PIBca, PIBcb; 
    unsigned long int populacaoA, populacaoB; // uso de unsigned para grandes numeros

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
      // perguntas para cadastro carta 1
    printf("--cadastro da carta A-- \n");
    printf(" Estado : \n");
    scanf(" %s", estadoA );

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

    // calculo da densidade populacional impedindo possivel reotrno com 0
    if (areaKmA != 0) {
    densiPopA = populacaoA / areaKmA;
} else {
    densiPopA = 0;
}
  // if para proteger o calculo de divisão por 0 igual na densidade populacional
    if (pibA != 0){
    PIBca = (float) pibA/populacaoA;
    }else{
      PIBca = 0;
    }

     // calculo do PIB per capita com casting
   // densiPopREa = (float) areaKmA/populacaoA; // densidade populaconal reverso
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

     // calculo da densidade populacional impedindo possivel reotrno com 0
    if (areaKmB != 0) {
    densiPopB = populacaoB / areaKmB;
} else {
    densiPopB = 0;
}
  // if para proteger o calculo de divisão por 0 igual na densidade populacional
    if (pibB != 0){
    PIBcb = (float) pibB/populacaoB;
    }else{
      PIBcb = 0;
    }
   
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
    printf("  \n");

// print dos resultados da carta B
    printf("**carta B** \n");
    printf("Estado : %s \n Código da carta : %s \n", estadoB, codigoB);
    printf("Nome da cidade : %s \n População : %lu \n",nomeCidB, populacaoB );
    printf("Àrea : %.2f km² \n PIB : %.2f \n", areaKmB, pibB);
    printf("Pontos turisticos : %d \n", PturisticosB);
    printf("Densidade populacional : %.2f \n", densiPopB);
    printf("PIB per capita : %.2f \n", PIBcb);
   printf("  \n");// pular linha por estetica
    // 
    // (Repita para cada propriedade)

            // Comparação de Cartas:
 // comparações com a posibilidade de escolher atributo com switch

    printf(" Qual atributo deseja escolher para comparar ? \n");
    printf("Digite : 1 para População \n");
    printf("Digite : 2 para Área \n");
    printf("Digite : 3 para PIB \n");
    printf("Digite : 4 para Numero de pontos turisticos \n");
    printf("Digite : 5 para Densidade populacional \n");
    printf("Digite : 6 para PIB per capita \n");
    scanf("%d",&escolha);

    switch (escolha)
    {
    case 1:
      if(populacaoA > populacaoB){ //código da vitoria da carta A
        printf("%s venceu por ter a população de %u , sendo maior que %s com %u \n ", nomeCidA, populacaoA, nomeCidB, populacaoB);
      }else if(populacaoA < populacaoB){ // código da vitoria da carta B
        printf("%s venceu por ter a população de %u , sendo maior que %s com %u \n ", nomeCidB, populacaoB, nomeCidA, populacaoA);
      }else{
        printf("***empatou, ambos tem o mesmo tanto***\n"); // caso de empate
      }
      break;
     case 2:
      if(areaKmA > areaKmB){
        printf("%s venceu por ter a área de %.2f km², sendo maior que %s com %.2f km² \n ", nomeCidA, areaKmA, nomeCidB, areaKmB);
      }else if (areaKmA < areaKmB){
        printf("%s venceu por ter a área de %.2f km², sendo maior que %s com %.2f km² \n ", nomeCidB, areaKmB, nomeCidA, areaKmA);
      }else{
         printf("***empatou, ambos tem o mesmo tanto***\n");
      }
      break;
     case 3:
      if( pibA > pibB){
        printf(" %s venceu por ter o PIB de %.2f, maior que %s com %.2f \n",nomeCidA, pibA, nomeCidB, pibB );
      }else if (pibA < pibB){ 
        printf(" %s venceu por ter o PIB de %.2f, maior que %s com %.2f \n",nomeCidB, pibB, nomeCidA, pibA );
      }else{
        printf("***empatou, ambos tem o mesmo tanto***\n");
      }
      break;
     case 4:
      if( PturisticosA > PturisticosB){
        printf("%s venceu por ter %d pontos turisticos, sendo mais que %s com %d \n ", nomeCidA, PturisticosA, nomeCidB, PturisticosB);
      }else if(PturisticosA < PturisticosB){
        printf("%s venceu por ter %d pontos turisticos, sendo mais que %s com %d \n ", nomeCidB, PturisticosB, nomeCidA, PturisticosA);
      }else{
        printf("***empatou, ambos tem o mesmo tanto***\n");
      }
      break;
     case 5:
      if(densiPopA < densiPopB){
        printf("%s venceu por ter a densidade populacional de %.2f , sendo menor que %s com %.2f \n ", nomeCidA, densiPopA, nomeCidB, densiPopB);
      }else if(densiPopA > densiPopB){
        printf("%s venceu por ter a densidade populacional de %.2f , sendo menor que %s com %.2f \n ", nomeCidB, densiPopB, nomeCidA, densiPopA);
      }else{
        printf("***empatou, ambos tem o mesmo tanto***\n");
      }
      break;
     case 6:
      if(PIBca > PIBcb){
        printf("%s venceu por ter o PIB per capita de %.2f , sendo maior que %s com %.2f  \n ", nomeCidA, PIBca, nomeCidB, PIBcb);
      }else if(PIBca < PIBcb){
        printf("%s venceu por ter o PIB per capita de %.2f , sendo maior que %s com %.2f \n ", nomeCidB, PIBcb, nomeCidA, PIBca);
      }else{
        printf("***empatou, ambos tem o mesmo tanto***\n");
      }
      break;
    default:
    printf(" Numero invalido.");
      break;
    }



    return 0;
}
