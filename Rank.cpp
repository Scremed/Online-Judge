#include <stdio.h>
#include <string.h>

typedef struct{
	char nama[15];
	int nilai;
} Student;

void merge(Student students[], int left, int mid, int right) {
	int i, j, k;
	int n1 = mid-left+1;
	int n2 = right-mid;
	
	Student L[n1], R[n2];
	
	for(i = 0; i < n1; i++)
		L[i] = students[left+i];
	for(j = 0; j < n2; j++)
		R[j] = students[mid+1+j];
	
	i = 0; j = 0; k = left;
	while(i < n1 && j < n2) {
		if(L[i].nilai > R[j].nilai ||
		(L[i].nilai == R[j].nilai && 
		strcmp(L[i].nama, R[j].nama) < 0)) {
			students[k] = L[i++];
		} else {
			students[k] = R[j++];
		}
		k++;
	}
	
	while(i < n1) {
		students[k++] = L[i++];
	}
	
	while(j < n2) {
		students[k++] = R[j++];
	}
}

void mergesort(Student students[], int low, int high) {
	if(low >= high) return;
	int mid = (high+low)/2;
	
	mergesort(students, low, mid);
	mergesort(students, mid+1, high);
	
	merge(students, low, mid, high);
}

int findnilai(Student students[], int N, char find[15]) {
	for(int i = 0; i < N; i++) {
		int cmp = strcmp(students[i].nama, find);
		if(cmp == 0) {
			return i;
		}
	}
	return -1;
}

int main() {
	int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int N;
        scanf("%d ", &N);

        Student students[1001];
        for (int j = 0; j < N; j++) {
            scanf("%[^#]#%d\n", students[j].nama, &students[j].nilai);
        }
		
		char find[15];
		scanf("%s", find);
		
		mergesort(students, 0, N-1);
		
		int nilai = findnilai(students, N, find);
		
		if(nilai == -1) {
			printf("Case #%d: -1\n", i+1);
		} else {
			printf("Case #%d: %d\n", i+1, nilai+1);	
		}
	}
	return 0;
}
