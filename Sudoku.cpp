#include <stdio.h>

int win = 0;
int lose = 0;

bool solve(int box[9][9]) {
	bool rowcheck[9][10] = {false};
	bool colcheck[9][10] = {false};
	bool boxgridcheck[9][10] = {false};
	bool valid = true;
	
	for(int row= 0; row < 9; row++) {
		for(int col = 0; col < 9; col++) {
			int num = box[row][col];
			
			if (rowcheck[row][num]) {
                valid = false;
                break;
            }
            rowcheck[row][num] = true;
            
            if (colcheck[col][num]) {
                valid = false;
                break;
            }
            colcheck[col][num] = true;

            
            int boxgrid = (row / 3) * 3 + (col / 3);
            if (boxgridcheck[boxgrid][num]) {
                valid = false;
                break;
            }
            boxgridcheck[boxgrid][num] = true;
		}
	}
	return valid;
}

int main() {
	int T;
	double total_win = 0;
	scanf("%d", &T);
	int wl[T];
	
	for(int i = 0; i < T; i++) {
		int box[9][9];
		
		for(int row = 0; row < 9; row++) {
			for(int col = 0; col < 9; col++) {
				scanf("%d", &box[row][col]);
			}
		}
		int temp = solve(box);
		wl[i] = temp;
	}
	
	for(int i = 0; i < T; i++) {
		if (wl[i] == 1) {
	        printf("Case #%d: TRUE\n", i + 1);
	        win++;
	    } else {
	        printf("Case #%d: FALSE\n", i + 1);
	        lose++;
	    }
	}
	
	double total = win + lose;
	double winrate = (double)win / total * 100.0;
	printf("%.2lf%%\n", winrate);
	
	return 0;
}
