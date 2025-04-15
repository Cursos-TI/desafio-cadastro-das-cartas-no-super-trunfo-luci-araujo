#include <stdio.h>
int main(){
   //Carta 01//

    char estado [8];
    char codigo [8]; //Letra do estado seguida de um número de 01 a 04 = código da carta//
    char cidade [10];
    int populacao; //Número de habitantes// 
    float area; //Área da cidade em  km²//
    float PIB; //Produto Interno Bruto da cidade//
    int turismo; //Número de pontos turísticos//

    printf("Digite o seu estado: \n");
    scanf(" %s", estado);

    printf("Digite o seu código: \n");
    scanf(" %s", codigo);

    printf("Digite a sua cidade: \n");
    scanf(" %s", cidade);

    printf("Digite o número de habitantes: \n");
    scanf (" %d", &populacao);

    printf("Digite a área da sua cidade em  km²: \n");
    scanf(" %f", &area);

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB);

    printf("Digite a quantidade de pontos turísticos que há em sua cidade: \n");
    scanf(" %d", &turismo);
    printf("--------------------------------------------------------------\n");
    //Carta 02//

    char estado2 [8];
    char codigo2 [8]; //Letra do estado seguida de um número de 01 a 04 = código da carta//
    char cidade2 [10];
    int populacao2; //Número de habitantes// 
    float area2; //Área da cidade em  km²//
    float PIB2; //Produto Interno Bruto da cidade//
    int turismo2; //Número de pontos turísticos//

    printf("Digite o seu segundo estado: \n");
    scanf(" %s", estado2);

    printf("Digite o seu código: \n");
    scanf(" %s", codigo2);

    printf("Digite a sua cidade: \n");
    scanf(" %s", cidade2);

    printf("Digite o número de habitantes: \n");
    scanf (" %d", &populacao2);

    printf("Digite a área da sua cidade em  km²: \n");
    scanf(" %f", &area2);

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB2);

    printf("Digite a quantidade de pontos turísticos que há em sua cidade: \n");
    scanf(" %d", &turismo2);

    printf("- Informações da carta 01 -\n");
    printf(" Estado: %s \n Código: %s \n Cidade: %s \n População: %d \n Área: %.2f \n PIB: %.1f \n Turismo: %d \n", estado, codigo, cidade, populacao, area, PIB, turismo);

    printf("\n- Informações da carta 02 - \n");
    printf(" Estado: %s \n Código: %s \n Cidade: %s \n População: %d \n Área: %.2f \n PIB: %.1f \n Turismo: %d \n", estado2, codigo2, cidade2, populacao2, area2, PIB2, turismo2);

    return 0;
}
