#include <stdio.h>
#define ATRIBUTOS 10

int main() {
    //definição de todos os atributos das duas cartas
    char estado, codCarta[3], nomeCid[30], opcao;
    int populacao, ptTuristicos, escolha, vence1 = 0, empate = 0;
    float area, pib, densi, capita, poder, valorOpcao;
    //abaixo os atributos da 2º carta
    char estado2, codCarta2[3], nomeCid2[30];
    int populacao2, ptTuristicos2, vence2 = 0;
    float area2, pib2, densi2, capita2, poder2, valorOpcao2;

    //entrada de todos os dados necessários
    printf("=== Olá! Bem-vindo ao jogo SuperTrunfo! ===\n");
    printf("= Para começar, insira as seguintes informações da primeira carta! =\n");
    printf("Qual o estado da carta? (Digite apenas 1 letra)\n");
    scanf("%s ", estado);

    printf("Qual o código da carta? (Insira a letra acima seguida de 2 números)\n");
    scanf("%s ", codCarta);

    printf("Qual o nome da cidade na carta?\n");
    scanf("%s ", nomeCid);

    printf("Qual a população total da cidade?\n");
    scanf("%i ", &populacao);

    printf("Qual a área (em km²) total do território dessa cidade?\n");
    scanf("%f ", &area);

    printf("Qual o PIB da cidade?\n");
    scanf("%f ", &pib);

    printf("Qual o número de pontos turísticos que tem na cidade?\n");
    scanf("%i ", &ptTuristicos);
    
    printf("\n");

    //dados da 2º carta
    printf("=== Agora insira as informações para a segunda carta! ===\n");
    printf("Qual o estado da 2º carta? (Digite apenas 1 letra)\n");
    scanf("%s ", estado2);

    printf("Qual o código da 2º carta? (Insira a letra acima seguida de 2 números)\n");
    scanf("%s ", codCarta2);

    printf("Qual o nome da cidade na 2º carta?\n");
    scanf("%s ", nomeCid2);

    printf("Qual a população total da 2º cidade?\n");
    scanf("%i ", &populacao2);

    printf("Qual a área (em km²) total do território dessa 2º cidade?\n");
    scanf("%f ", &area2);

    printf("Qual o PIB da 2º cidade?\n");
    scanf("%f ", &pib2);

    printf("Qual o número de pontos turísticos que tem na 2º cidade?\n");
    scanf("%i ", &ptTuristicos2);

    printf("\n");

    //cálculos para os atributos que não precisam ser inseridos (Densidade, PIB per Capita e Super Poder)
    densi = populacao / area;
    densi2 = populacao2 / area2;

    capita = pib / populacao;
    capita2 = pib2 / populacao2;

    poder = (float) (populacao + area + pib + ptTuristicos + capita + (densi * -1));
    poder2 = (float) (populacao2 + area2 + pib2 + ptTuristicos2 + capita2 + (densi2 * -1));

    printf("Antes de mostrar os resultados, com qual atributo das cartas você quer fazer a comparação? (Digite um número de acordo com as opções a seguir)\n");
    printf("1- Nome (Apenas exibição, portanto não há comparação)\n");
    printf("2- População\n");
    printf("3- Área\n");
    printf("4- PIB\n");
    printf("5- Número de Pontos Turísticos\n");
    printf("6- Densidade Demográfica\n");
    scanf("%i ", &escolha);

    switch (escolha) {
    case 1:
        printf("O nome das cidades escolhidos são: %s e %s\n", nomeCid, nomeCid2);
        break;
    case 2:
        opcao = 'População';
        valorOpcao = populacao;
        valorOpcao2 = populacao2;
        printf("Opção escolhida: %s\n", opcao);
        if (populacao > populacao2) { vence1 = 1; } else if (populacao == populacao2) {empate = 1;} else { vence2 = 1; }
        break;
    case 3:
        opcao = 'Área';
        valorOpcao = area;
        valorOpcao2 = area2;
        printf("Opção escolhida: Área\n");
        if (area > area2) { vence1 = 1; } else if (area == area2) {empate = 1;} else { vence2 = 1; }
        break;
    case 4:
        opcao = 'PIB';
        valorOpcao = pib;
        valorOpcao2 = pib2;
        printf("Opção escolhida: PIB\n");
        if (pib > pib2) { vence1 = 1; } else if (pib == pib2) {empate = 1;} else { vence2 = 1; }
        break;
    case 5:
        opcao = 'Pontos Turísticos';
        valorOpcao = ptTuristicos;
        valorOpcao2 = ptTuristicos2;
        printf("Opção escolhida: Nùmero de Pontos Turísticos\n");
        if (ptTuristicos > ptTuristicos2) { vence1 = 1; } else if (ptTuristicos == ptTuristicos2) {empate = 1;} else { vence2 = 1; }
        break;
    case 6:
        opcao = 'Densidade Demográfica';
        valorOpcao = densi;
        valorOpcao2 = densi2;
        printf("Opção escolhida: Densidade Demográfica\n");
        if (densi < densi2) { vence1 = 1; } else if (densi == densi2) {empate = 1;} else { vence2 = 1; }
        break;
    default:
        printf("Número inserido inválido");
        break;
    }

    //exibição de todas as informações das cartas
    printf("=== A seguir, as informações inseridas! ===\n");
    printf("== Carta1 ==\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codCarta);
    printf("Nome da Cidade: %s\n", nomeCid);
    printf("População: %i\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %i\n", ptTuristicos);
    printf("Densidade Populacional: %.2f hab/km²", densi);
    printf("PIB per Capita: %.2f reais", capita);
    printf("Super Poder: %.2f", poder);
    printf("\n");
    printf("=== Agora da segunda carta! ===\n");
    printf("== Carta2 ==\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codCarta2);
    printf("Nome da Cidade: %s\n", nomeCid2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %i\n", ptTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densi2);
    printf("PIB per Capita: %.2f reais\n", capita2);
    printf("Super Poder: %.2f\n", poder2);
    printf("\n");

    //exibição da comparação do atributo escolhido
    printf("=== Resultados ===\n");
    printf("Atributo escolhido: %s\n", opcao);
    printf("= Primeira carta =\n");
    printf("Nome: %s\n", nomeCid);
    printf("%s: %.2f\n", opcao, valorOpcao);
    printf("= Segunda carta =\n");
    printf("Nome: %s\n", nomeCid2);
    printf("%s: %.2f\n", opcao, valorOpcao2);
    
    if (vence1 == 1) {
        printf("Carta vencedora: %s\n", nomeCid);
    } else if (empate == 1) {
        printf("Carta vencedora: %s\n", nomeCid2);
    } else {
        printf("As cartas empataram!\n");
    }
    
}