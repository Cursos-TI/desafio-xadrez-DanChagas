#include <stdio.h>

int main() {

    char peca_tabuleiro;
    char *direcao_tabuleiro;
    int numero_movimentos, opcao_direcao;
    

    printf("\n<-_-_-_-_-_-_-_-_-_-_ ESCOLHA A PECA QUE DESEJA MOVER -_-_-_-_-_-_-_-_-_-_>\n");
    printf("-> DIGITE [T] PARA 'TORRE'.\n");
    printf("-> DIGITE [B] PARA 'BISPO'.\n");
    printf("-> DIGITE [R] PARA 'RAINHA'.\n");
    printf("-> DIGITE [C] PARA 'CAVALO'.\n");
    scanf("%c", &peca_tabuleiro);

    switch (peca_tabuleiro)
    {
    case 'T':
        printf(" -_-_-_-_-_-_-_-_-_-_ [TORRE] -_-_-_-_-_-_-_-_-_-_ \n");
        printf("ESCOLHA A DIRECAO:\n");
        printf("-> DIGITE [1] PARA 'FRENTE'.\n");
        printf("-> DIGITE [2] PARA 'LADO DIREITO'.\n");
        printf("-> DIGITE [3] PARA 'LADO ESQUERDO'.\n");
        printf("-> DIGITE [4] PARA 'BAIXO'.\n");
        scanf("%d", &opcao_direcao);

        switch (opcao_direcao)
        {
        case 1:
            direcao_tabuleiro = "FRENTE";
            break;
        case 2:
            direcao_tabuleiro = "LADO DIREITO";
            break;
        case 3:
            direcao_tabuleiro = "LADO ESQUERDO";
            break;
        case 4:
            direcao_tabuleiro = "BAIXO";
            break;
        default:
            printf("OPCAO INVALIDA!");
            break;
        }

        break;
    case 'B':
        printf(" -_-_-_-_-_-_-_-_-_-_ [BISPO] -_-_-_-_-_-_-_-_-_-_ \n");
        printf("ESCOLHA A DIRECAO:\n");
        printf("-> DIGITE [1] PARA 'DIAGONAL (DIREITA)'.\n");
        printf("-> DIGITE [2] PARA 'DIAGONAL (ESQUERDA)'.\n");
        scanf("%d", &opcao_direcao);

        switch (opcao_direcao)
        {
        case 1:
            direcao_tabuleiro = "DIAGONAL (DIREITA)";
            break;
        case 2:
            direcao_tabuleiro = "DIAGONAL (ESQUERDA)";
            break;
        default:
            printf("OPCAO INVALIDA!");
            break;
        }

        break;
    case 'R':
        printf(" -_-_-_-_-_-_-_-_-_-_ [RAINHA] -_-_-_-_-_-_-_-_-_-_ \n");
        printf("ESCOLHA A DIRECAO:\n");
        printf("-> DIGITE [1] PARA 'FRENTE'.\n");
        printf("-> DIGITE [2] PARA 'LADO DIREITO'.\n");
        printf("-> DIGITE [3] PARA 'LADO ESQUERDO'.\n");
        printf("-> DIGITE [4] PARA 'DIAGONAL (DIREITA)'.\n");
        printf("-> DIGITE [5] PARA 'DIAGONAL (ESQUERDA)'.\n");
        printf("-> DIGITE [6] PARA 'BAIXO'.\n");
        scanf("%d", &opcao_direcao);

        switch (opcao_direcao)
        {
        case 1:
            direcao_tabuleiro = "FRENTE";
            break;
        case 2:
            direcao_tabuleiro = "LADO DIREITO";
            break;
        case 3:
            direcao_tabuleiro = "LADO ESQUERDO";
            break;
        case 4:
            direcao_tabuleiro = "BAIXO";
            break;
        case 5:
            direcao_tabuleiro = "DIAGONAL (DIREITA)";
            break;
        case 6:
            direcao_tabuleiro = "DIAGONAL (ESQUERDA)";
            break;
        default:
            printf("OPCAO INVALIDA!");
            break;
        }

        break;
    case 'C':
        printf(" -_-_-_-_-_-_-_-_-_-_ [CAVALO] -_-_-_-_-_-_-_-_-_-_ \n");
        printf("ESCOLHA A DIRECAO:\n");
        printf("-> DIGITE [1] PARA 'FRENTE DIREITA'.\n");
        printf("-> DIGITE [2] PARA 'FRENTE ESQUERDA'.\n");
        printf("-> DIGITE [3] PARA 'BAIXO DIREITA'.\n");
        printf("-> DIGITE [4] PARA 'BAIXO ESQUERDA'.\n");
        scanf("%d", &opcao_direcao);

        switch (opcao_direcao)
        {
        case 1:
            direcao_tabuleiro = "FRENTE DIREITA";
            break;
        case 2:
            direcao_tabuleiro = "FRENTE ESQUERDA";
            break;
        case 3:
            direcao_tabuleiro = "BAIXO DIREITA";
            break;
        case 4:
            direcao_tabuleiro = "BAIXO ESQUERDA";
            break;
        default:
            printf("OPCAO INVALIDA!");
            break;
        }

        break;
    default:
        printf("'%c' NAO E UMA OPCAO VALIDA, TENTE NOVAMENTE!", peca_tabuleiro);
        break;
    }

    if (peca_tabuleiro == 'C') {

        for (int i = 0; i < 2; i++) {
            printf("CIMA\n");
        }

        printf("DIREITA\n");
    }
    else {

        printf("INFORME QUANTAS CASAS DESEJA ANDAR: ");
        scanf("%d", &numero_movimentos);

        for (numero_movimentos; numero_movimentos > 0; numero_movimentos--){
            printf("%s\n", direcao_tabuleiro);
        }
    }

    return 0;
}
