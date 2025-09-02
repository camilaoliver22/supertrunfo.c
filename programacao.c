#include <stdio.h>


  int main(){
    // estruturas das cartas//
  char estado1[2], estado2[2];         
  char codigoCarta1[3], codigoCarta2[3];
  char cidade1[20], cidade2[20];
  int populacao1, populacao2;
  float area1, area2; 
  float pib1, pib2;
  int pontoTuristico1, pontoTuristico2;

   // Cadastro das Cartas://
printf("***cadastro da carta 1***\n");

printf("Digite o estado: \n");
scanf("%s", estado1);
printf("Digite o codigo da Carta: \n ");
scanf("%s", codigoCarta1);
printf("Digite a cidade: \n");
scanf("%s", cidade1);
printf("Digite a populacao: \n");
scanf("%d", &populacao1);
printf("Digite sua area em km²: \n");
scanf("%f", &area1);
printf("Digite o PIB: \n");
scanf("%f", &pib1);
printf("Digite o Ponto Turistico: \n");
scanf("%d", &pontoTuristico1);



printf("***cadastro da carta 2***\n");

printf("Digite o estado: \n");
scanf("%s", estado2);
printf("Digite o codigo da Carta: \n");
scanf("%s", codigoCarta2);
printf("Digite a cidade: \n");
scanf("%s", cidade2);
printf("Digite a populacao: \n");
scanf("%d", &populacao2);
printf("Digite a area em km²: \n");
scanf("%f", &area2);
printf("Digite o PIB: \n");
scanf("%f", &pib2);
printf("Digite o Ponto Turistico: \n");
scanf("%d", &pontoTuristico2);


  // exibição dos dados da cartas//
printf("carta 1\n");
printf("estado: %s\n", estado1);
printf("codigo: %s\n", codigoCarta1);
printf("cidade: %s\n", cidade1);
printf("populacao: %d\n", populacao1);
printf("area: %.2f\n", area1);
printf("PIB: %.2f\n", pib1);
printf("ponto turistico: %d\n", pontoTuristico1);


 
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
