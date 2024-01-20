#include <stdio.h>

int n,m;
char map[100][100];

int expand(int x, int y) {
	if(map[x][y] == '#') return 0;
	
	map[x][y] = '#';
	
	int area = 1;
	
	if(x > 0) area += expand(x-1, y);
	if(x < n-1) area += expand(x+1, y);
	if(y > 0) area += expand(x, y+1);
	if(y < n-1) area += expand(x, y-1);
	
	return area;
}

int main() {
	scanf("%d %d", &n, &m); getchar();
	
	int x[26],y[26], count = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			scanf("%c", &map[i][j]);
			
			if(map[i][j] != '.' && map[i][j] != '#') {
				int k = map[i][j] - 'a';
				x[k] = i;
				y[k] = j;
				count++; k++;
			}
		}
		getchar();
	}
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n ; j++) {
			printf("%c", map[i][j]);
		}
		printf("\n");
	}
	
	for(int i = 0; i < count; i++) {
		int area = expand(x[i], y[i]);
		printf("%c %d\n", i + 'a', area);
	}
}
