#include <stdio.h>

int main() {
	FILE *fp = fopen("testdata.txt", "r");
	
	int n[1000];
	int x = 0;
	while(!feof(fp)) {
		fscanf(fp, "%d", &n[x]);
		x++;
	}
	fclose(fp);
	
	int max = n[0];
	int min = n[0];
	for(int i = 0; i < x; i++) {
		int flag = 0;
		if(n[i] == 0 || n[i] == 1) {
			flag = 1;
		}
		
		for(int j = 2; j < n[i]/2; j++){
			if(n[i] % j == 0) {
				flag = 1;
				break;
			}
		}
		
		if(flag == 0) {
			if(n[i] > max) {
				max = n[i];
			}
			if(n[i] < min) {
				min = n[i];
			}
		}
	}
	
	int ans = max - min;
	printf("%d\n", ans);
}
