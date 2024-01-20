#include <stdio.h>

typedef struct{
	int row;
	int col;
} Point;

void fire(char field[105][105], int N, int M, int startRow, int startCol) {
    const int moves[8][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};
    bool visited[105][105] = {{false}};
    Point queue[10000];  // Assuming N <= 100
    int front = 0, rear = 0;

    queue[rear++] = (Point){startRow, startCol};
    visited[startRow][startCol] = true;

    while (front < rear && M > 0) {
        int currentLevelSize = rear - front;
        while (currentLevelSize--) {
            Point current = queue[front++];

            for (int i = 0; i < 8; i++) {
                int newRow = current.row + moves[i][0];
                int newCol = current.col + moves[i][1];

                if (newRow >= 0 && newRow < N && newCol >= 0 && newCol < N &&
                    !visited[newRow][newCol] && field[newRow][newCol] != 'F') {
                    queue[rear++] = (Point){newRow, newCol};
                    visited[newRow][newCol] = true;
                    field[newRow][newCol] = 'F';
                }
            }
        }
        M--;
    }
}

int main() {
	FILE *fp = fopen("testdata.in", "r");

	if(fp == NULL) {
		printf("File error.\n");
		return -1;
	}

	int T;
	fscanf(fp, "%d", &T);

	for(int i = 0; i < T; i++) {
		int N, M;  // N*N , M seconds
		fscanf(fp, "%d %d", &N, &M);

		char field[105][105];
		for(int j = 0; j < N; j++) {
			for(int k = 0; k < N; k++) {
				fscanf(fp, " %c", &field[j][k]);
			}
		}

		int X,Y;
		for(int j = 0; j < N; j++) {
			for(int k = 0; k < N; k++) {
				if(field[j][k] == 'F') {
					X = j;
					Y = k;
					break;
				}
			}
		}
		
		M--;
		fire(field, N, M, X, Y);
		
		printf("Case #%d:\n", i+1);
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				printf("%c", field[j][k]);
			}
			printf("\n");
		}
			printf("\n");
	}

	fclose(fp);
}
