#include <stdio.h>
#include <string.h>

typedef struct{
	char ID[15];
	char name[25];
} Student;

int binarySearch(Student students[], int left, int right, 
				  char find[15]) {
	while(left <= right) {
		int mid = left + (right-left) / 2;
		
		if(strcmp(students[mid].ID, find) == 0) {
			return mid;
		} if(strcmp(students[mid].ID, find) < 0) {
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}
	
	return -1;
}

int main() {
	FILE *fp = fopen("testdata.in", "r");
	
	if(fp == NULL) {
		printf("File not found.\n");
		return 1;
	}
	
	int N;
	fscanf(fp, "%d\n", &N);
	
	Student students[105];
	for(int i = 0; i < N; i++) {
		fscanf(fp, "%s %s", students[i].ID, students[i].name); 
		fgetc(fp);
	}
	
	int T;
	fscanf(fp, "%d", &T); fgetc(fp);
	
	char findID[15];
	for(int i = 0; i < T; i++) {
		fscanf(fp, "%s", findID); fgetc(fp);
		
		int idx = binarySearch(students, 0, N-1, findID);
		if(idx != -1) {
			printf("Case #%d: %s\n", i+1, students[idx].name);
		} else {
			printf("Case #%d: N/A\n", i+1);
		}
	}
	return 0;
}
