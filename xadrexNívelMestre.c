#include <stdio.h>

// Função para movimentar a Torre.
void mover_torre(int total_casas) {

    if (total_casas > 0) {
        printf("MOVEU %d!\n", total_casas);
        mover_torre(total_casas - 1);
    }

}

// Função para movimentar o Bispo.
void mover_bispo(int total_casas) {

    if (total_casas > 0) {
        printf("MOVEU %d!\n", total_casas);
        mover_torre(total_casas - 1);
    }

}

// Função para movimentar o Cavalo.
void mover_cavalo(int total_casas) {

    while (total_casas > 1)
    {
        printf("MOVEU %d!\n", total_casas);
        total_casas--;
    }
    printf("MOVEU %d FAZENDO O L!\n", total_casas);

}

// Função para movimentar a Rainha.
void mover_rainha(int total_casas) {

    if (total_casas > 0) {
        printf("MOVEU %d!\n", total_casas);
        mover_torre(total_casas - 1);
    }

}

int main() {

    // Declaração de Variáveis.
    char peca;
    char *direcao;
    int total_casas, opcao_direcao;
    
    // Menu de Escolha da Peca.
    printf("\nESCOLHA A PECA QUE DESEJA MOVIMENTAR\n");
    printf("-> DIGITE [T] PARA 'TORRE'.\n");
    printf("-> DIGITE [B] PARA 'BISPO'.\n");
    printf("-> DIGITE [R] PARA 'RAINHA'.\n");
    printf("-> DIGITE [C] PARA 'CAVALO'.\n");
    scanf("%c", &peca);

    // Faz a Identificação e Validação da Peça Digitada.
    switch (peca)
    {
    case 'T':
    case 't':
        printf("\n[TORRE]\n");
        printf("ESCOLHA A DIRECAO PARA QUAL A PECA SERA MOVIMENTADA\n");
        printf("-> DIGITE [1] PARA 'FRENTE'.\n");
        printf("-> DIGITE [2] PARA 'DIREITA'.\n");
        printf("-> DIGITE [3] PARA 'ESQUERDA'.\n");
        printf("-> DIGITE [4] PARA 'BAIXO'.\n");
        scanf("%d", &opcao_direcao);

        // Faz a Identificação e Validação da Direção Digitada.
        switch (opcao_direcao)
        {
        case 1:
            direcao = "FRENTE";
            break;
        case 2:
            direcao = "DIREITA";
            break;
        case 3:
            direcao = "ESQUERDA";
            break;
        case 4:
            direcao = "BAIXO";
            break;
        default:
            printf("OPCAO INVALIDA!");
            break;
        }

        break;
    case 'B':
    case 'b':
        printf(" -_-_-_-_-_-_-_-_-_-_ [BISPO] -_-_-_-_-_-_-_-_-_-_ \n");
        printf("ESCOLHA A DIRECAO:\n");
        printf("-> DIGITE [1] PARA 'FRENTE DIREITA (DIAGONAL)'.\n");
        printf("-> DIGITE [2] PARA 'FRENTE ESQUERDA (DIAGONAL)'.\n");
        printf("-> DIGITE [3] PARA 'BAIXO DIREITA (DIAGONAL)'.\n");
        printf("-> DIGITE [4] PARA 'BAIXO ESQUERDA (DIAGONAL)'.\n");
        scanf("%d", &opcao_direcao);

        // Faz a Identificação e Validação da Direção Digitada.
        switch (opcao_direcao)
        {
        case 1:
            direcao = "FRENTE DIREITA (DIAGONAL)";
            break;
        case 2:
            direcao = "FRENTE ESQUERDA (DIAGONAL)";
            break;
        case 3:
            direcao = "BAIXO DIREITA (DIAGONAL)";
            break;
        case 4:
            direcao = "BAIXO ESQUERDA (DIAGONAL)";
            break;
        default:
            printf("OPCAO INVALIDA!");
            break;
        }

        break;
    case 'R':
    case 'r':
        printf("\n[RAINHA]\n");
        printf("ESCOLHA A DIRECAO:\n");
        printf("-> DIGITE [1] PARA 'FRENTE'.\n");
        printf("-> DIGITE [2] PARA 'BAIXO'.\n");
        printf("-> DIGITE [3] PARA 'DIREITA'.\n");
        printf("-> DIGITE [4] PARA 'ESQUERDA'.\n");
        printf("-> DIGITE [5] PARA 'FRENTE DIREITA (DIAGONAL)'.\n");
        printf("-> DIGITE [6] PARA 'FRENTE ESQUERDA (DIAGONAL)'.\n");
        printf("-> DIGITE [7] PARA 'BAIXO DIREITA (DIAGONAL)'.\n");
        printf("-> DIGITE [8] PARA 'BAIXO ESQUERDA (DIAGONAL)'.\n");
        scanf("%d", &opcao_direcao);

        // Faz a Identificação e Validação da Direção Digitada.
        switch (opcao_direcao)
        {
        case 1:
            direcao = "FRENTE";
            break;
        case 2:
            direcao = "BAIXO";
            break;
        case 3:
            direcao = "DIREITA";
            break;
        case 4:
            direcao = "ESQUERDA";
            break;
        case 5:
            direcao = "FRENTE DIREITA (DIAGONAL)";
            break;
        case 6:
            direcao = "FRENTE ESQUERDA (DIAGONAL)";
            break;
        case 7:
            direcao = "BAIXO DIREITA (DIAGONAL)";
            break;
        case 8:
            direcao = "BAIXO ESQUERDA (DIAGONAL)";
            break;
        default:
            printf("OPCAO INVALIDA!");
            break;
        }

        break;
    case 'C':
    case 'c':
        printf("\n[CAVALO]\n");
        printf("ESCOLHA A DIRECAO:\n");
        printf("-> DIGITE [1] PARA 'FRENTE DIREITA'.\n");
        printf("-> DIGITE [2] PARA 'FRENTE ESQUERDA'.\n");
        printf("-> DIGITE [3] PARA 'BAIXO DIREITA'.\n");
        printf("-> DIGITE [4] PARA 'BAIXO ESQUERDA'.\n");
        scanf("%d", &opcao_direcao);

        // Faz a Identificação e Validação da Direção Digitada.
        switch (opcao_direcao)
        {
        case 1:
            direcao = "FRENTE DIREITA";
            break;
        case 2:
            direcao = "FRENTE ESQUERDA";
            break;
        case 3:
            direcao = "BAIXO DIREITA";
            break;
        case 4:
            direcao = "BAIXO ESQUERDA";
            break;
        default:
            printf("OPCAO INVALIDA!");
            break;
        }

        break;
    default:
        printf("'%c' NAO E UMA OPCAO VALIDA, TENTE NOVAMENTE!", peca);
        break;
    }

    printf("\nINFORME QUANTAS CASAS DESEJA ANDAR COM A PECA:\n");
    scanf("%d", &total_casas);

    if ((peca == 'T') || (peca == 't')) {

        mover_torre(total_casas);

    }
    else if ((peca == 'B') || (peca == 'b')) {

        mover_bispo(total_casas );

    }
    else if ((peca == 'R') || (peca == 'r')) {

        mover_rainha(total_casas);

    }
    else if ((peca == 'C') || (peca == 'c')) {

        mover_cavalo(total_casas);

    }

    return 0;
}
