#include <stdio.h>
#include <string.h>

typedef struct{
	int qty;
	char name[101];
	long long price;
} Data;

int main() {
	FILE *fp = fopen("testdata.txt", "r");
	if(fp == NULL) {
		printf("File not found!\n");
		return 1;
	}
	
	int T;
	fscanf(fp, "%d", &T);
	
	int Q;
	for(int i = 0; i < T; i++) {
		fscanf(fp, "%d", &Q); fgetc(fp);
		
		Data dat[Q];
		long long sum = 0;
		for(int j = 0; j < Q; j++) {
			fscanf(fp, "%d#%[^@]@%lld", 
				&dat[j].qty, dat[j].name, &dat[j].price); fgetc(fp);
			
			sum = sum + (dat[j].qty * dat[j].price);
			printf("%lld\n", sum);
		}
		
		long long disc = sum/100 * 15;
		long long total = sum - disc;
		
		printf("Customer #%d: Rp %lld\n", i+1, total);
	}
	
	
}
