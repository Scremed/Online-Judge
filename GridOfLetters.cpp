#include <stdio.h>
#include <string.h>

int R, C;

void swap(char *x, char *y) {
	char temp = *x;
	*x = *y;
	*y = temp;
}

void swapstr(char *x, char *y) {
	char temp[205];
	strcpy(temp, x);
	strcpy(x, y);
	strcpy(y, temp);
}

void rowSort(char grid[205][205]){
	bool swapped;
	for(int i = 0; i < R; i++) {
		for(int j = 0; j < C-1; j++) {
			swapped = false;
			for(int k = 0; k < C-j-1; k++) {
				if(grid[i][k] > grid[i][k+1]) {
					swap(&grid[i][k], &grid[i][k+1]);
					swapped = true;
				}
			}
			
			if(swapped == false) break;
		}
	}
}

void colSort(char grid[205][205]){
	bool swapped;
	for(int i = 0; i < C; i++) {
		for(int j = 0; j < R-1; j++) {
			swapped = false;
			for(int k = 0; k < R-j-1; k++) {
				int cmp = strcmp(grid[k], grid[k+1]);
				if(cmp < 0) {
					swapstr(grid[k], grid[k+1]);
					swapped = true;
				}
			}
			
			if(swapped == false) break;
		}
	}
}

int main() {
	scanf("%d %d", &R, &C); getchar();
	
	char grid[205][205];
	for(int i = 0; i < R; i++) {
		scanf("%s", grid[i]); getchar();
	}
	
	rowSort(grid);
	colSort(grid);
	
	for(int i = 0; i < R; i++) {
		printf("%s\n", grid[i]);
	}
}
