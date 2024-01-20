#include <stdio.h>

void merge(int n[], int left, int mid, int right) {
	int Lsize = mid - left + 1;
	int Rsize = right - mid;
	
	int Ldat[Lsize], Rdat[Rsize];
	for(int i = 0; i < Lsize; i++) {
		Ldat[i] = n[left+i];
	}
	for(int i = 0; i < Rsize; i++) {
		Rdat[i] = n[mid+1+i];
	}
	
	int i = 0, j = 0, mainIdx = left;
	while(i < Lsize && j < Rsize) {
		if(Ldat[i] < Rdat[j]) {
			n[mainIdx++] = Ldat[i++];
		} else {
			n[mainIdx++] = Rdat[j++];
		}
	}
	while(i < Lsize) {
		n[mainIdx++] = Ldat[i++];
	}
	while(j < Rsize) {
		n[mainIdx++] = Rdat[j++];
	}
}

void mergesort(int n[], int left, int right) {
	if(left < right) {
		int mid = left + (right-left) / 2;
		
		mergesort(n, left, mid);
		mergesort(n, mid+1, right);
		merge(n, left, mid, right);
	}
}

int main() {
	FILE *fp = fopen("testdata.txt", "r");
	int N;
	fscanf(fp, "%d\n", &N);
	
	int n[N];
	for(int i = 0; i < N; i++) {
		fscanf(fp, "%d", &n[i]);
	}
	
	mergesort(n, 0, N-1);
	
	int count[100] = {0};
	for(int i = 1; i <= N-1; i++) {
		if(n[i] == n[i-1]) {
			count[n[i]]++;
		}
	}
	
	int max = n[0];
	for(int i = 1; i <= N-1; i++) {
		if(count[n[i]] > count[max] ||
		(count[n[i]] == count[max] && n[i] < max)) {
			max = n[i];
		}
	}
	
	printf("%d\n", max);
}
