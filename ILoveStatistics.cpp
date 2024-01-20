#include <stdio.h>

void swap(double *A, double *B) {
	double temp = *A;
	*A = *B;
	*B = temp;
}

int partition(double Q[], int low, int high) {
	int pivot = Q[high];
	int i = low-1;
	
	for(int j = low; j < high; j++) {
		if(Q[j] < pivot) {
			i++;
			swap(&Q[i], &Q[j]);
		}
	}
	
	i++;
	swap(&Q[i], &Q[high]);
	return i;
}

void quicksort(double Q[], int low, int high) {
	if(low >= high) return;
	
	int pIndex = partition(Q, low, high);
	
	quicksort(Q, low, pIndex-1);
	quicksort(Q, pIndex+1, high);
}

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int N = 0;
		scanf("%d", &N); getchar();
		
		double Q[5005];
		for(int j = 0; j < N; j++) {
			scanf("%lf", &Q[j]);
		}
		
		double sum = 0;
		for(int j = 0; j < N; j++) {
			sum += Q[j];
		}
		
		double mean = sum/N;
		
		printf("Case #%d:\n", i+1);
		printf("Mean : %.2lf\n", mean);
		
		quicksort(Q, 0, N-1);
		
		int mid = N/2;
		double median = 0;
		if(N % 2 == 0) {
			median = (Q[mid]+Q[mid-1]) / 2.0;
		} else {
			median = Q[mid];
		}
		
		printf("Median : %.2lf\n", median);
	}
}
