#include <stdio.h>
#include <string.h>

int l = 0;

struct Data{
	int number;
	char name[45];
};

void swap(struct Data *x, struct Data *y) {
	struct Data temp = *x;
	*x = *y;
	*y = temp;
}

int partition(struct Data plant[], int l, int r) {
	char pivot[45]; 
	strcpy(pivot, plant[r].name);
	int i = l-1;

	for(int j = l; j < r; j++) {
		if(strcmp(plant[j].name, pivot) < 0) {
			i++;
			swap(&plant[i], &plant[j]);
		}
	}
	swap(&plant[i+1], &plant[r]);
	return i+1;
}

void sortPlants(struct Data plant[], int l, int r) {
	if(l < r) {
		int pIndex = partition(plant, l, r);
		sortPlants(plant, l, pIndex-1);
		sortPlants(plant, pIndex+1, r);
	}
}

int main () {
	FILE *fp = fopen("testdata.in", "r");
	
	if(fp == NULL) {
		printf("File Error.\n");
		return 1;
	}
	
	int N;
	fscanf(fp, "%d", &N);
	
	struct Data plant[N];
	while(l < N) {
		fscanf(fp, "%d#%[^\n]\n", &plant[l].number, plant[l].name);
		l++;
	}
	
	sortPlants(plant, 0, l-1);
	
	for(int i = 0; i < l; i++) {
		printf("%d %s\n", plant[i].number, plant[i].name);
	}
	
	fclose(fp);
	return 0;
}
