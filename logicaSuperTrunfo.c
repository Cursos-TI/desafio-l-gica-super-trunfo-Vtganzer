#include <stdio.h>

int main(){
    
  //Cadastro da Carta 1
  char estado1[3], codigo1[4], cidade1[50];
  int populacao1, pontosTuristicos1;
  float area1, PIB1, densidade1, pibPerCapita1;

  // Cadastro da Carta 2
  char estado2[3], codigo2[4], cidade2[50];
  int populacao2, pontosTuristicos2;
  float area2, PIB2, densidade2, pibPerCapita2;

  //Leitura de Dados da Carta 1
  printf("\nDigite os Dados da Carta 1: \n");
  
  printf("Estado (ex: SP): ");
  scanf("%s", estado1);

  printf("Código da Carta (ex: A01): ");
  scanf ("%s", codigo1);

  printf("Nome da Cidade: ");
  scanf(" %[^\n]", cidade1);

  printf("População: ");
  scanf("%d", populacao1);

  printf("Números de Pontos Turísticos: ");
  scanf("%d", pontosTuristicos1);

  printf("Área (Km²): ");
  scanf("%f", area1);

  Printf("PIB (em Bilhões): ");
  scanf("%f", PIB1);

  //Dados da Carta 2
  printf("\nDigite os Dados da Carta 2: \n");

  printf("Estado (ex :RJ): ");
  scanf("%s", estado2);

  printf("Código da Carta (ex: B02): ");  
  scanf("%s", codigo2);
 
  printf("Nome da Cidade: ");
  printf(" %[^\n]", cidade2);

  printf("População: ");
  scanf("%d", populacao2);

  printf("Número de Pontos Turísticos: ");
  scanf("%d", pontosTuristicos2);

  printf("Área (Km²): ");
  scanf("%f", area2);

  Printf("PIB (em Bilhões): ");
  scanf("%f" , PIB2);
  
  
  
  
  
    return 0;
}
