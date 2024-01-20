#include <stdio.h>

int tiles = 0;

void flood(char wall[105][105], int N, int M, int x, int y) {
	if(wall[x][y] == '#' || wall[x][y] == 'X') return;
	
	if(wall[x][y] == '.') tiles++;
	
	wall[x][y] = 'X';
	
	if(x > 0) flood(wall, N, M, x-1, y);
	if(x < N-1) flood(wall, N, M, x+1, y);
	if(y > 0) flood(wall, N, M, x, y-1);
	if(y < M-1) flood(wall, N, M, x, y+1);
}

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int N, M;
		scanf("%d %d", &N, &M); getchar();
		
		char wall[105][105];
		for(int j = 0; j < N; j++) {
			scanf("%[^\n]", wall[j]); getchar();
		}
		
		int posX, posY;
		for(int j = 0; j < N; j++) {
			for(int k = 0; k < M; k++) {
				if(wall[j][k] == 'S') {
					posX = j;
					posY = k;
				}
			}
		}
		
		tiles = 0;
		flood(wall, N, M, posX, posY);
		
		printf("Case #%d: %d\n", i+1, tiles);
	}
}
