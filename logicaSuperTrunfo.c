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
    int PturisticosA, PturisticosB, escolha, escolha2;
    float areaKmA, areaKmB, pibA, pibB, densiPopA, densiPopB, PIBca, PIBcb, vA, vB, vA2, vB2, resultado, resultado2; 
    unsigned long int populacaoA, populacaoB; // uso de unsigned para grandes numeros

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
      // perguntas para cadastro carta 1
    printf("--cadastro da carta A-- \n");
    printf("Estado : \n");
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

    printf("Pontos turísticos : \n");
    scanf("%d", &PturisticosA);

    // calculo da densidade populacional impedindo possivel retorno com 0
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

    printf("Pontos turísticos : \n");
    scanf("%d", &PturisticosB);

     // calculo da densidade populacional impedindo possivel retorno com 0
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
    printf("Área : %.2f km² \n PIB : %.2f \n", areaKmA, pibA);
    printf("Pontos turísticos : %d \n", PturisticosA);
    printf("Densidade populacional : %.2f \n", densiPopA);
    printf("PIB per capita : %.2f \n", PIBca);
    printf("  \n");

// print dos resultados da carta B
    printf("**carta B** \n");
    printf("Estado : %s \n Código da carta : %s \n", estadoB, codigoB);
    printf("Nome da cidade : %s \n População : %lu \n",nomeCidB, populacaoB );
    printf("Área : %.2f km² \n PIB : %.2f \n", areaKmB, pibB);
    printf("Pontos turísticos : %d \n", PturisticosB);
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
    printf("Digite : 4 para Numero de pontos turísticos \n");
    printf("Digite : 5 para Densidade populacional \n");
    printf("Digite : 6 para PIB per capita \n");
    scanf("%d", &escolha);

    //switch de escolha 1
    switch (escolha){
    case 1:
    vA = populacaoA ; vB = populacaoB;
     printf("População. \n");
      break;
     case 2:
     vA = areaKmA ; vB = areaKmB;
      printf("Área. \n");
      break;
     case 3:
     vA = pibA ; vB = pibB;
     printf("PIB. \n");
      break;
     case 4:
     vA = PturisticosA ; vB = PturisticosB;
     printf("Pontos turísticos. \n");
      break;
     case 5:
     vA = densiPopA ; vB = densiPopB;
     printf(" Densidade populacional. \n");
      break;
     case 6:
     vA = PIBca; vB = PIBcb;
     printf(" PIB per capita. \n");
      break;
    default:
    printf(" Numero invalido. \n");
      break;
    }
  printf(" escolha uma segunda opção de atributo: \n");
  printf(" Por favor, escolha um atributo diferente do anterior. \n");
  printf("Digite : 1 para População \n");
  printf("Digite : 2 para Área \n");
  printf("Digite : 3 para PIB \n");
  printf("Digite : 4 para Numero de pontos turísticos \n");
  printf("Digite : 5 para Densidade populacional \n");
  printf("Digite : 6 para PIB per capita \n");
  scanf("%d", &escolha2);

 if(escolha == escolha2){   // if para impedir que o mesmo atributo seja repetido
   printf("não pode escolher o mesmo atributo duas vezes \n");
 }else{
   // switch da segunda escolha de atributo em caso de não tr o mesmo atributo selecionado
  switch (escolha2){ 
  case 1 :
    vA2 = populacaoA ; vB2 = populacaoB;
    printf("População. \n ");
    break;
   case 2:
    vA2 = areaKmA ; vB2 = areaKmB;
    printf("Área. \n");
    break;
   case 3:
    vA2 = pibA ; vB2 = pibB;
    printf("PIB. \n");
    break;
   case 4 :
    vA2 = PturisticosA ; vB2 = PturisticosB;
    printf("Pontos turísticos. \n");
    break;
   case 5 :
    vA2 = densiPopA ; vB2 = densiPopB;
    printf(" Densidade populacional. \n");
    break;
   case 6 :
    vA2 = PIBca; vB2 = PIBcb;
    printf(" PIB per capita. \n");
    break;

  default:
  printf("Numero invalido.\n");
    break;
  }

 }
// em caso de escolher a opção 5, deixar o valor menor como vencedor
 vA = (escolha == 5) ? -vA : vA;
 vB = (escolha == 5) ? -vB : vB;
 vA2 = (escolha2 == 5) ? -vA2 : vA2;
 vB2 = (escolha2 == 5) ? -vB2 : vB2;

 // soma dos resultados das duas escolhas
 resultado = vA + vA2;
 resultado2 = vB + vB2;

 //print da soma dos resultados
 printf("A soma dos resultados dos atributos de %s é %.2f \n",nomeCidA, resultado );
 printf("A soma dos resultados dos atributos de %s é %.2f \n",nomeCidB, resultado2);

 // condição que determina o vencedor ou se houve um empate
 if(resultado > resultado2){
  printf("%s ganhou de %s pela soma dos resultados de %.2f a %.2f \n", nomeCidA, nomeCidB, resultado, resultado2);
 }else if(resultado == resultado2){
  printf("Houve um empate entre %s e %s pois contam com a soma de %.2f e %.2f \n", nomeCidA, nomeCidB, resultado, resultado2);
 }else{
  printf("%s ganhou de %s pela soma dos resultados de %.2f a %.2f \n", nomeCidB, nomeCidA, resultado2, resultado);
 }

 


    return 0;
}
