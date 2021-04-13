#include <stdio.h>
#define altura 8
#define largura 14

char tabuleiro[altura][largura];  //Declaração do tabuleiro de jogo

int i, j;              //Variáveis a usar nos for loops

void imprimirTabuleiro() {                //Funcão para apresentar o tabuleiro de jogo
    for(i=0; i<=altura; i++) {
        printf(" %d ", 9-i);
        for(j=0; j<=largura; j++) {
            printf(" %c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("    A  B  C  D  E  F  G  H  I  J  K  L  M  N  O\n\n");
}

int invalidez = 0;     //Variável que indica se a jogada é válida

void testeValidez1() {                   //Função para testar se a jogada é válida de acordo com a restrição 1
    for(i=0; i<altura; i++) {
        for(j=0; j<largura; j++) {
            if((tabuleiro[i][j] != '-' && tabuleiro[i+1][j] != '-') || (tabuleiro[i][j] != '-' && tabuleiro[i][j+1] != '-')
               || (tabuleiro[i][j] != '-' && tabuleiro[i+1][j+1] != '-'))
                invalidez = 1;
        }
    }
}

int npecas = 0;     //Variável que conta o nº de peças totais no tabuleiro

void testeValidez2() {
    if (npecas > 15)
        invalidez = 1;
}

int main() {

    printf("MEEC War Game\n\nPrima qualquer tecla para iniciar\n\n");
    getchar();

    for(i=0; i<=altura; i++) {     //Inicialização do tabuleiro de jogo
        for(j=0; j<=largura; j++) {
            tabuleiro[i][j] = '-';
        }
    }

    imprimirTabuleiro();

    printf("Escolha o modo de jogo:\nJogador tenta descobrir as peças do computador: Escreva 1\n"
           "Computador tenta descorir as peças do jogador: Escreva 2");

    int gmode;
    scanf("%d", &gmode);

    return 0;
}
