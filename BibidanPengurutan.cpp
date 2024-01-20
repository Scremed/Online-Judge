#include <stdio.h>
#include <string.h>

typedef struct{
	char str[105];
	int count;
}Data;

void merge(Data dat[], int left, int mid, int right) {
	int Lsize = mid-left+1;
	int Rsize = right-mid;
	
	Data Ldat[Lsize], Rdat[Rsize];
	for(int i = 0; i < Lsize; i++) {
		Ldat[i] = dat[left+i];
	}
	for(int i = 0; i < Rsize; i++) {
		Rdat[i] = dat[mid+1+i];
	}
	
	int i = 0, j = 0, mainIdx = left;
	while(i < Lsize && j < Rsize) {
		int cmp = strcmp(Ldat[i].str, Rdat[j].str);
		if(Ldat[i].count > Rdat[j].count ||
		(Ldat[i].count == Rdat[j].count && cmp < 0)) {
			dat[mainIdx++] = Ldat[i++];
		} else {
			dat[mainIdx++] = Rdat[j++];
		}
	}
	
	while(i < Lsize) {
		dat[mainIdx++] = Ldat[i++];
	}
	while(j < Rsize) {
		dat[mainIdx++] = Rdat[j++];
	}
}

void mergesort(Data dat[], int left, int right) {
	if(left < right) {
		int mid = left+ (right-left) /2;
		
		mergesort(dat, left, mid);
		mergesort(dat, mid+1, right);
		merge(dat, left, mid, right);
	}
}

int countVocal(char str[105], int M) {
	int count = 0;
	for(int i = 0; i < M; i++) {
		if(str[i] == 'a' || str[i] == 'i' ||str[i] == 'u' ||str[i] == 'e' 
		||str[i] == 'o') {
			count++;
		}
	}
	
	return count;
}

int main() {
	int N, M;
	scanf("%d %d", &N, &M); getchar();

	Data dat[N];
	for(int i = 0; i < N; i++) {
		scanf("%s", dat[i].str); getchar();
		dat[i].count = countVocal(dat[i].str, M);
	}
	
	mergesort(dat, 0, N-1);
	
	for(int i = 0; i < N; i++) {
		printf("%s\n", dat[i].str);
	}
}
