#include <stdio.h>

void merge(unsigned long long X[], int left, int mid, int right) {
	int Lsize = mid - left + 1;
	int Rsize = right - mid;
	
	unsigned long long Ldata[Lsize], Rdata[Rsize];
	
	for(int i = 0; i < Lsize; i++) {
		Ldata[i] = X[left+i];
	}
	for(int j = 0; j < Rsize; j++) {
		Rdata[j] = X[mid+j+1];
	}
	
	int mainIdx = left, i = 0, j = 0;
	while(i < Lsize && j < Rsize) {
		if(Ldata[i] < Rdata[j]) {
			X[mainIdx++] = Ldata[i++];
		} else {
			X[mainIdx++] = Rdata[j++];
		}
	}
	
	while(i < Lsize) {
		X[mainIdx++] = Ldata[i++];
	}
	while(j < Rsize) {
		X[mainIdx++] = Rdata[j++];
	}
}

void mergesort(unsigned long long X[], int low, int high) {
	if(low >= high) return;
	
	int mid = low + (high-low) / 2;
	mergesort(X, low, mid);
	mergesort(X, mid+1, high);
	merge(X, low, mid, high);
}

int main() {
	int N;
	scanf("%d", &N);
	
	unsigned long long X[N];
	for(int i = 0; i < N; i++) {
		scanf("%llu", &X[i]);
	}
	
	mergesort(X, 0, N-1);
	
	unsigned long long Y;
	scanf("%llu", &Y);
	
	int count = 0;
	for(int i = 0; i < N; i++) {
		if(Y >= X[i]) {
			Y -= X[i];
			count++;
		} else break;
	}
	
	printf("%d\n", count);
}
