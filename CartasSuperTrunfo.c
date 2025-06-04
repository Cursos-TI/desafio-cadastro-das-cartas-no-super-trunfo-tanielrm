#include<stdio.h>
#include<string.h>

//definições das variaveis
char estado1, estado2;
char codigo1[3], codigo2[3];
char nome1[255], nome2[255];
int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int pontos1, pontos2;

//inicio de programa
int main(){
    printf("Programa Super Trunfo de Paises\n\n Vamos comecar.\n\n");
    
    //leitura dos dados da primeira carta
    printf("Primeiro infome os dados da primeira carta.\n");
    printf("Digite o estado:");
    scanf("%c", &estado1);
    printf("Digite o codigo do estado:");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade:");
    getchar(); //limpeza do buffer do stdin
    fgets(nome1,255,stdin); //ler a linha digitada, pois o nome da cidade por ser composto de mais de um nome
    nome1[strcspn(nome1, "\n")] = 0;
    printf("Digite a populacao da cidade:");
    scanf("%d", &populacao1);
    printf("Digite a area da cidade:");
    scanf("%f", &area1);
    printf("Digite o pib da cidade:");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos da cidade:");
    scanf("%d", &pontos1);
    getchar(); //limpeza do buffer do stdin 

    // leitura dos dados da segunda carta
    printf("\n\nAgora vamos informar os dados da segunda carta.\n");
    printf("Digite o estado:");
    scanf("%c", &estado2);
    printf("Digite o codigo do estado:");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade:");
    getchar();
    fgets(nome2,255,stdin);
    nome2[strcspn(nome2, "\n")] = 0;
    printf("Digite a populacao da cidade:");
    scanf("%d", &populacao2);
    printf("Digite a area da cidade:");
    scanf("%f", &area2);
    printf("Digite o pib da cidade:");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos da cidade:");
    scanf("%d", &pontos2);
    getchar();

    //apresentacao dos dados das duas cartas
    printf("\n===============================================================\n");
    printf("\n    Dados da primeira carta.\n");
    printf("Estado:%c\n", estado1);
    printf("Codigo do estado:%s\n", codigo1);
    printf("Nome da cidade:%s\n", nome1);
    printf("Populacao da cidade:%d\n", populacao1);
    printf("Area da cidade: %f\n", area1);
    printf("Pib da cidade: %f\n", pib1);
    printf("Quantidade de pontos turisticos da cidade: %d\n", pontos1);

    printf("\n\n    Dados da segunda carta.\n");
    printf("Estado:%c\n", estado2);
    printf("Codigo do estado:%s\n", codigo2);
    printf("Nome da cidade:%s\n", nome2);
    printf("Populacao da cidade:%d\n", populacao2);
    printf("Area da cidade: %f\n", area2);
    printf("Pib da cidade: %f\n", pib2);
    printf("Quantidade de pontos turisticos da cidade: %d\n", pontos2);

    printf("\nPressione enter para sair");
    scanf("%c",&estado1);
    return 0;
} 
