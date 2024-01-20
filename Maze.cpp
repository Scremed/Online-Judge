#include <stdio.h>

int step = 0;
int min = 1000;

int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

void maze(char map[][105], int x, int y, int N, int M) {
	if(map[x][y] == '#' || x >= N || x <0 || y<0 || y>= M) return;
	
	
	if(map[x][y] == 'E') {
		if(step < min) {
			min = step;
		}
		return;
	}
	
	map[x][y] = '#';
	for(int i = 0; i < 4; i++) {
		step++;
		maze(map, x+dx[i], y+dy[i], N, M);
		step--;
	}
	
}

int main() {
	int N,M;
	scanf("%d %d", &N,&M); getchar();
	
	char map[N][105];
	int x,y;
	for(int i=0;i<N;i++) {
		for(int j =0;j<M;j++) {
			scanf("%c", &map[i][j]);
			
			if(map[i][j] == 'S') {
				x = i;
				y=j;
			}
		} getchar();
	}
	
	for(int i = 0; i < N;i++) {
		for(int j=0;j<M;j++) {
			printf("%c", map[i][j]);
		}printf("\n");
	}
	
	step = 0;
	maze(map, x, y, N,M);
	
	if(min == 1000) {
		printf("No exit found!\n");
	} else {
		printf("Min step = %d\n", min);
	}
	
	return 0;
}
