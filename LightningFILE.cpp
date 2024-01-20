#include <stdio.h>

int findLightning(int N, int A, int B, char n[]) {
	int count = 0;
	int lightning = 0;

	for(int i = 0; i < N; i++) {
		if(n[i] == '1') {
			count++;
		} else {
			if(count >= A && count <= B) {
				lightning++;
			}
			count = 0;
		}
	}
	
	if(count >= A && count <= B) {
		lightning++;
	}
	
	return lightning;
}

int main() {
	FILE *fp;
	fp = fopen("testdata.in", "r");
	
	int T;
	fscanf(fp, "%d", &T);
	
	for(int i = 0; i < T; i++) {
		int N, A, B;
		fscanf(fp, "%d %d %d", &N, &A, &B);

		fgetc(fp);

		char n[N+1];
		for(int j = 0; j < N; j++) {
			n[j] = fgetc(fp);
		}
		n[N] = '\0';
		
		int total = findLightning(N, A, B, n);
		printf("Case #%d: %d\n", i+1, total);
	}

	fclose(fp);

	return 0;
}
