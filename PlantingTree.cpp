#include <stdio.h>
#include <string.h>

typedef struct{
	char name[50];
	char tree[50];
} List;

int binarysearch(List list[], int left, int right, char find[50]) {
	while(left <= right) {
		int mid = left + (right-left) / 2;
		if(strcmp(list[mid].name, find) == 0) {
			return mid;
		} else if(strcmp(list[mid].name, find) > 0) {
			right = mid - 1;
		} else {
			left = mid + 1;
		}
	}
	
	return -1;
}

int main() {
	FILE *fp = fopen("testdata.in", "r");
	
	if(fp == NULL) {
		printf("File not found!\n");
		return 1;
	}
	
	int N;
	fscanf(fp, "%d", &N); fgetc(fp);
	
	List list[100];
	for(int i = 0 ; i < N; i++) {
		fscanf(fp, "%[^#]#%[^\n]", list[i].name, list[i].tree); fgetc(fp);
	}
	
	int T;
	fscanf(fp, "%d", &T); fgetc(fp);
	for(int i = 0; i < T; i++) {
		char find[50];
		fscanf(fp, "%s\n", find);
		
		int idx = binarysearch(list, 0, N-1, find);
		
		if(idx != -1) {
			printf("Case #%d: %s\n", i+1, list[idx].tree);
		} else {
			printf("Case #%d: N/A\n", i+1);
		}
	}
	
	fclose(fp);
	
	return 0;
}
