#include <stdio.h>         // Inclusão da biblioteca

struct Cidade {            // Definição da Estrutura (Cidade). Essa estrutura agrupa todos os dados que representam uma cidade.
    char estado;           // Letra do estado (A a H)
    char codigo[4];        // Código da carta (ex: A01, B03)
    char nome[100];        // Nome da cidade
    int populacao;         // População da cidade
    float area;            // Área da cidade em km²
    float pib;             // PIB da cidade em bilhões de reais
    int pontosTuristicos;  // Número de pontos turísticos
    float pibpercapita;    // PIB dividido pela População 
    float densidade;       // Polulaçã dividida pela Área 
};

//Função exibircarta: Essa função recebe uma cidade e o número da carta (1 ou 2) e imprime todos os dados formatados.
void exibircarta(struct Cidade cidade, int numerocarta){
    printf("\nCarta %d: \n", numerocarta);
    printf("Estado: %c\n", cidade.estado);
    printf("Código: %s\n", cidade.codigo);
    printf("Nome da Cidade: %s\n", cidade.nome);
    printf("População da Cidade: %d\n", cidade.populacao);
    printf("Área da cidade em km²: %.2f\n", cidade.area);
    printf("PIB da Cidade: %.2f\n", cidade.pib);
    printf("Número de Pontos Turísticos: %d\n", cidade.pontosTuristicos);
    printf("Densidade Populacional: %.2f\n", cidade.densidade);
    printf("PIB per Capita: %.2f\n", cidade.pibpercapita);
}


int main(){         //Função main() Aqui acontece a execução principal do programa.
    struct Cidade carta1, carta2;   // Declara duas variáveis do tipo Cidade, para armazenar os dados das duas cartas.
    printf("\n**************************************** SUPER TRUNFO ****************************************: \n\n");

    printf("\n=============== INSIRA DADOS DA CARTA [1] ===============: \n\n");

    printf("Estado (A a D): ");
    scanf(" %c", &carta1.estado);
    printf("Código da Carta (Exp: A01, B03): \n");
    scanf("%s", &carta1.codigo);
    printf("Nome da Cidade: \n");
    scanf("%s", &carta1.nome);
    printf("População da Cidade: \n");
    scanf("%d", &carta1.populacao);
    printf("Área da cidade em km²: \n");
    scanf("%f", &carta1.area);
    printf("PIB da Cidade: \n");
    scanf("%f", &carta1.pib);
    printf("Número de Pontos Túristicos: \n");
    scanf("%d", &carta1.pontosTuristicos);

    // Com base nos dados fornecidos logo abaixo está o calculo:
    carta1.densidade = carta1.populacao / carta1.area;      //Cálculo da densidade populacional
    carta1.pibpercapita = carta1.pib / carta1.populacao;    //Cálculo do PIB per capita
    
    printf("\n\n=============== INSIRA DADOS DA CARTA [2] ===============: \n\n");

    printf("Estado (A a D): \n");
    scanf(" %s", &carta2.estado);
    printf("Código da Carta (Exp: A01, B03): \n");
    scanf("%s", &carta2.codigo);
    printf("Nome da Cidade: \n");
    scanf("%s", &carta2.nome);
    printf("População da Cidade: \n");
    scanf("%d", &carta2.populacao);
    printf("Área da cidade em km²: \n");
    scanf("%f", &carta2.area);
    printf("PIB da Cidade: \n");
    scanf("%f", &carta2.pib);
    printf("Número de Pontos Túristicos: \n");
    scanf("%d", &carta2.pontosTuristicos);

    carta2.densidade = carta2.populacao / carta2.area;      //Cálculo da densidade populacional e do PIB
    carta2.pibpercapita = carta2.pib / carta2.populacao;    //per capita com base nos dados fornecidos.


    //Chama a função que imprime todos os dados formatados.
    exibircarta(carta1, 1);     
    exibircarta(carta2, 2);    

    return 0;
}
