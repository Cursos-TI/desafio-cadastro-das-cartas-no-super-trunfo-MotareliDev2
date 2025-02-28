#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado_1;
    char estado_2;
    char codigo_1[3], codigo_2[3];
    char cidadeNome_1[25], cidadeNome_2[25]; //char com 23 letras pois é não há cidade com mais letras que isso.
    
    int populacao_1, populacao_2; 
    int PontoTuristico_1, PontoTuristico_2;
    
    float areaKm_1, areaKm_2; 
    float PIB_1, PIB_2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite uam letra de 'A' a 'H': ");
    scanf("%c", &estado_1);

    printf("\nDigite a letra do estado seguido de 01 (de 1 a 4 ex A01): ");
    scanf("%s", codigo_1);

    printf("\nInforme o Nome da cidade: ");
    scanf(" %s", cidadeNome_1);

    printf("\nAgora  a população desta cidade: ");
    scanf("%d", &populacao_1);
    
    printf("\nInforme a área por Km: ");
    scanf("%f", &areaKm_1);

    printf("\nPara finalizar informe o PIB: ");
    scanf("%f", &PIB_1);

    printf("\nQuantos pontos turisticos existem: ");
    scanf("%i", &PontoTuristico_1);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nCarta 1: \n"); //foi criado um printf para cada instrução para manter a melhor legibilidade do código
    printf("\nEstado: %c", estado_1);
    printf("\nCodigo: %s", codigo_1);
    printf("\nNome da Cidade: %s", cidadeNome_1);
    printf("\nPopulação: %i", populacao_1);
    printf("\nÁrea: %.2f Km²", areaKm_1);
    printf("\nPIB: %.2f Bilhões de Reais", PIB_1);
    printf("\nNumero de pontos Turisticos: %i \n", PontoTuristico_1);
 
    printf("\nVamos cadastrar a Carta 2 \nInforme uma letra de 'A' a 'H': ");
    scanf(" %c", &estado_2);

    printf("\nDigite a letra do estado seguido de 01 (de 1 a 4 ex A01): ");
    scanf("%s", codigo_2);

    printf("\nInforme o Nome da cidade: ");
    scanf(" %s", cidadeNome_2);

    printf("\nAgora a população desta cidade: ");
    scanf("%d", &populacao_2);

    printf("\nInforme a área por Km: ");
    scanf("%f", &areaKm_2);

    printf("\nPara finalizar informe o PIB: ");
    scanf("%f", &PIB_2);

    printf("\nQuantos pontos turisticos existem: ");
    scanf("%i", &PontoTuristico_2);

    printf("\nCarta 2: \n"); //foi criado um printf para cada instrução para manter a melhor legibilidade do código
    printf("\nEstado: %c", estado_2);
    printf("\nCodigo: %s", codigo_2);
    printf("\nNome da Cidade: %s", cidadeNome_2);
    printf("\nPopulação: %i", populacao_2);
    printf("\nÁrea: %.2f Km²", areaKm_2);
    printf("\nPIB: %.2f Bilhões de Reais", PIB_2);
    printf("\nNumero de pontos Turisticos: %i \n", PontoTuristico_2);

    return 0;
}
