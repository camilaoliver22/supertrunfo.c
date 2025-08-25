# supertrunfo.c
Um jogo de cartas 

#include <stdio.h>


  int main(){
    // cadastro das variavel da carta 1/2//
  char estado1[2], estado2[2];         
  char codigoCarta1[3], codigoCarta2[3];
  char cidade1[20], cidade2[20];
  int populacao1, populacao2;
  float area1, area2; 
  float pib1, pib2;
  int pontoTuristico1, pontoTuristico2;

printf("***cadastro da carta 1***\n");

printf("Estado: \n");
scanf("%s", estado1);

printf("Codigo da Carta: \n ");
scanf("%s", codigoCarta1);

printf("Cidade: \n");
scanf("%s", cidade1);

printf("Populacao: \n");
scanf("%d", &populacao1);

printf("Area em km²: \n");
scanf("%f", &area1);

printf("PIB: \n");
scanf("%f", &pib1);

printf("Ponto Turistico: \n");
scanf("%d", &pontoTuristico1);



printf("***cadastro da carta 2***\n");

printf("Estado: \n");
scanf("%s", estado2);

printf("Codigo da Carta: \n");
scanf("%s", codigoCarta2);

printf("Cidade: \n");
scanf("%s", cidade2);

printf("Populacao: \n");
scanf("%d", &populacao2);

printf("Area em km²: \n");
scanf("%f", &area2);

printf("PIB:\n");
scanf("%f", &pib2);

printf("Ponto Turistico: \n");
scanf("%d", &pontoTuristico2);


  // exibicao dos dados da carta 1//
printf("carta 1\n");
printf("estado: %s\n", estado1);
printf("codigo: %s\n", codigoCarta1);
printf("cidade: %s\n", cidade1);
printf("populacao: %d\n", populacao1);
printf("area: %.2f\n", area1);
printf("PIB: %.2f\n", pib1);
printf("ponto turistico: %d\n", pontoTuristico1);


 
// exibicao dos dados da carta 2//
printf("carta 2\n");
printf("estado: %s\n", estado2);
printf("codigo:%s\n", codigoCarta2);
printf("cidade: %s\n", cidade2);
printf("populacao: %d\n", populacao2);
printf("area: %.2f\n", area2);
printf("PIB: %.2f\n", pib2);
printf("ponto turistico: %d\n", pontoTuristico2);

  return 0; 
}
