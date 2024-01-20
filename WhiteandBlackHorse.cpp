#include <stdio.h>

int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[] = {-1, -2, -2, -1, 1, 2,  2,  1};

char chessboard[8][8];

void resetBoard() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            chessboard[i][j] = '#';
        }
    }
}

void blackKnight(int row, int col, int m) {
	if(row < 0 || row > 7|| col < 0 || col > 7) return;
	if(chessboard[row][col]=='B') return;
	
	chessboard[row][col] = 'B';
	
	if(m == 0) return;
	
	m--;
	for(int i = 0; i < 8; i++) {
		blackKnight(row+dx[i], col+dy[i], m);
	}
}

void whiteKnight(int row, int col, int m) {
	if(row < 0 || row > 7|| col < 0 || col > 7) return;
	if(chessboard[row][col]=='W') return;
	
	chessboard[row][col] = 'W';
	
	if(m == 0) return;
	
	m--;
	for(int i = 0; i < 8; i++) {
		whiteKnight(row+dx[i], col+dy[i], m);
	}
}

int main() {
    int T;
    scanf("%d", &T); getchar();

    for (int t = 0; t < T; t++) {
        int z;
        scanf("%d", &z);
		
		printf("%d\n", z);
        int white_y, black_y;
        char white_x, black_x;
        scanf(" %c%d %c%d", &black_x, &black_y, &white_x, &white_y);
        int bX = 8 - black_y;
        int bY = black_x- 'A';
        int wX = 8 - white_y;
        int wY = white_x- 'A';
        
        printf("%d %d %d %d %d\n", bX, bY, wX, wY, z);
        
        resetBoard();
        blackKnight(bX, bY, z);
        for (int i = 0; i < 8; i++) {
        	for (int j = 0; j < 8; j++) {
        		printf("%c", chessboard[i][j]);
        	}
        	printf("\n");
        }
        printf("\n");
        
        whiteKnight(wX, wY, z);
        for (int i = 0; i < 8; i++) {
        	for (int j = 0; j < 8; j++) {
        		printf("%c", chessboard[i][j]);
        	}
        	printf("\n");
        }

//        if (findMeetingPoint(z, black_x, black_y, white_x, white_y)) {
//            printf("Case #%d: YES\n", t + 1);
//        } else {
//            printf("Case #%d: NO\n", t + 1);
//        }
    }

    return 0;
}
