//Código para Cartas Super-Trunfo.

#include <stdio.h>

int main() {

    int populacao, pontost;
    float area, pib;
    char pais[30], estado[20], cidade[20], codigo[20];

    printf("CADASTRO SUPER TRUNFO\n\n");

// Cadastro das informações dos Países, Estados e Cidades.
// Leitura de dados informados.

    printf("Digite o Nome do País:\n");
    scanf("%s", &pais);

    printf("Digite o Nome do Estado:\n");
    scanf("%s", &estado);

    printf("Digite o Nome da Cidade:\n");
    scanf("%s", &cidade);

    printf("Digite o Código da Cidade:\n");
    scanf("%s", &codigo);

    printf("Digite a População do Cidade:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &pib);

    printf("Digite a quantidade de Pontos Turisticos da Cidade:\n");
    scanf("%d", &pontost);

    printf("Digite a Área da Cidade:\n");
    scanf("%f", &area);

// Exibição dos valores cadastrados.

    printf("Cartas Super-Trunfo\n\n");

//Váriaveis tipo CHAR.

    printf("Nome do País: %s\n", pais);
    printf("Nome do Estado: %s\n", estado);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Código da Cidade: %s\n", codigo);

//Váriaveis do tipo INT.

    printf("População: %d habitantes\n", populacao);
    printf("Pontos Turísticos: %d\n", pontost);

//Váriaveis do tipo DOUBLE.

    printf("Área: %.3f km²\n", area);
    printf("PIB: %.3f\n", pib);


    return 0;
}
