#include <stdio.h>
#include <string.h>

struct Assignments{
	char title[15];
	long long days;
};

void swap(struct Assignments *a, struct Assignments *b) {
	struct Assignments temp = *a;
	*a = *b;
	*b = temp;
}

int compareTask(struct Assignments a, struct Assignments b) {
	if(a.days > b.days) {
		return 1;
	} else if(a.days < b.days){
		return -1;
	} else {
		return strcmp(a.title, b.title);
	}
}

long long partition(struct Assignments task[], long long low, long long high) {
	struct Assignments pivot = task[high];
	int i = low - 1;
	
	for(int j = low; j < high; j++) {
		if(compareTask(task[j], pivot) <= 0) {
			i++;
			swap(&task[i], &task[j]);
		}
	}
	
	i++;
	swap(&task[i], &task[high]);
	return i;
}

void sortTask(struct Assignments task[], long long low, long long high) {
	if(low < high) {
		int pIndex = partition(task, low, high);
		
		sortTask(task, low, pIndex-1);
		sortTask(task, pIndex+1, high);
	}
}

int main() {
	int N;
	scanf("%d", &N);
	
	struct Assignments task[N];
	for(int i = 0; i < N; i++) {
		scanf("%s %lld", task[i].title, &task[i].days);
	}
	
	sortTask(task, 0, N-1);
	
	for(int i = 0; i < N; i++) {
		printf("%s\n", task[i].title);
	}
	
	return 0;
}
