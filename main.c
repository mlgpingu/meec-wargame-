#include <stdio.h>
#define altura 9
#define largura 15
char tabuleiro[altura][largura];  //Declaração do tabuleiro de jogo

int i, j;              //Variáveis a usar nos for loops

void imprimirTabuleiro() {                //Funcão para apresentar o tabuleiro de jogo
    for(i=1; i<=9; i++) {
        for(j=1; j<=15; j++) {
            printf(" %c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
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

int main() {

    printf("MEEC War Game\n\nPrima qualquer tecla para iniciar");
    getchar();

    for(i=1; i<=9; i++) {     //Inicialização do tabuleiro de jogo
        for(j=1; j<=15; j++) {
            tabuleiro[i][j] = '-';
        }
    }

    imprimirTabuleiro();


    return 0;
}
