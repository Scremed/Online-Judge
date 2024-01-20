#include <stdio.h>
#include <string.h>

typedef struct{
	int num;
	char str[100];
}Data;

void merge(Data dat[1000], int left, int mid, int right) {
	int Lsize = mid - left + 1;
	int Rsize= right- mid;
	
	Data Ldat[Lsize], Rdat[Lsize];
	for(int i = 0; i < Lsize; i++) {
		Ldat[i] = dat[i+left];
	}
	for(int i =0; i < Rsize; i++) {
		Rdat[i] = dat[i+mid+1];
	}
	
	int i= 0, j = 0, mainIdx = left;
	while(i < Lsize && j < Rsize) {
		int cmp = strcmp(Ldat[i].str, Rdat[j].str);
		if(cmp < 0 || (cmp == 0 && Ldat[i].num < Rdat[j].num)) {
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

void mergesort(Data dat[1000], int left, int right) {
	if(left < right) {
		int mid = left + (right-left) / 2;
		
		mergesort(dat, left, mid);
		mergesort(dat, mid+1, right);
		merge(dat, left, mid, right);
	}
}

int main() {
	Data dat[1000];
	
	int n = 0;
	for(n = 0; n < 5; n++) {
		scanf("%s %d", dat[n].str, &dat[n].num); getchar();
	}
	
	mergesort(dat, 0, n-1);
	
	for(int i = 0; i < n; i++) {
		printf("%s %d\n", dat[i].str, dat[i].num);
	}
}
