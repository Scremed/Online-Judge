#include <stdio.h>

int foodTotal = 0;
int z = 0;

void pacMoves(int N, int M, char boardTiles[105][105], int pacRow, int pacCol) {
    if(boardTiles[pacRow][pacCol] == '*') {
        foodTotal++;
    }

    if(boardTiles[pacRow][pacCol] == '#') {
        return;
    }
    
    if(boardTiles[pacRow][pacCol] == 'X') {
        return;
    }
    
    boardTiles[pacRow][pacCol] = 'X';
    
    if(pacRow > 0) { //move up
        pacMoves(N, M, boardTiles, pacRow - 1, pacCol);
    }

    if(pacRow < N - 1) { //move down
        pacMoves(N, M, boardTiles, pacRow + 1, pacCol);
    }

    if(pacCol > 0) { //move left
        pacMoves(N, M, boardTiles, pacRow, pacCol - 1);
    }

    if(pacCol < M - 1) { //move right
        pacMoves(N, M, boardTiles, pacRow, pacCol + 1);
    }
}

void pacmonGame(int N, int M, char boardTiles[105][105]) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            scanf(" %c", &boardTiles[i][j]);
        }
        getchar();
    }

    int pacRow, pacCol;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(boardTiles[i][j] == 'P') {
                pacRow = i;
                pacCol = j;
            }
        }
    }

    pacMoves(N, M, boardTiles, pacRow, pacCol);
}

int main() {
    int T;
    scanf("%d", &T);

    for(int i = 0; i < T; i++) {
        int N, M;
        scanf("%d %d", &N, &M);

        char boardTiles[105][105];
        foodTotal = 0;
        pacmonGame(N, M, boardTiles);

        printf("Case #%d: %d\n", i+1, foodTotal);
    }
    return 0;
}
