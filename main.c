#include <stdio.h>
#define altura 9
#define largura 15

char tabuleiro[altura][largura];  //Declaração do tabuleiro de jogo

int i, j;              //Variáveis a usar nos for loops

void imprimirTabuleiro() {                //Funcão para apresentar o tabuleiro de jogo
    for(i=1; i<=9; i++) {
        printf(" %d ", 10-i);
        for(j=1; j<=15; j++) {
            printf(" %c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("    A  B  C  D  E  F  G  H  I  J  K  L  M  N  O\n\n");
}

int invalidez = 0;     //Variável que indica se a jogada é válida

void testeValidez1() {                   //Função para testar se a jogada é válida de acordo com a restrição 1
    for(i=1; i<=8; i++) {
        for(j=1; j<=14; j++) {
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

    for(i=1; i<=9; i++) {     //Inicialização do tabuleiro de jogo
        for(j=1; j<=15; j++) {
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
