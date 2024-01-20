#include <stdio.h>
#include <string.h>

int n = 0;

struct Videos{
	char title[1000];
	char name[1000];
	int views;
};

int partition(struct Videos video[], int low, int high) {
	int pivotViews = video[high].views;
	char pivotTitle[1000];
	strcpy(pivotTitle, video[high].title);

	int i = low - 1;

	for(int  j = low; j <= high; j++) {
		if(video[j].views > pivotViews || 
		(video[j].views == pivotViews && 
		strcmp(video[j].title, pivotTitle) > 0)) {
			i++;
			struct Videos temp = video[i];
			video[i] = video[j];
			video[j] = temp;
		}
	}

	i++;
	struct Videos temp = video[i];
	video[i] = video[high];
	video[high] = temp;

	return i;
}

void sortVideos(struct Videos video[], int low, int high) {
	if(low < high) {
	int pIndex = partition(video, low, high);
	
	sortVideos(video, low, pIndex-1);
	sortVideos(video, pIndex+1, high);
	}
}

int main() {
	FILE *fp = fopen("testdata.in", "r");
	
	if(fp == NULL) {
		printf("File error.\n");
		return -1;
	}
	
	n = 0;
	struct Videos video[100];
	while(!feof(fp)) {
		fscanf(fp, " %[^#]#%[^#]#%d\n", 
		video[n].name, video[n].title, &video[n].views);
		n++;
	}
	
	sortVideos(video, 0, n-1);
	
	for(int i = 0; i < n; i++) {
		printf("%s by %s - %d\n", video[i].name, 
		video[i].title, video[i].views);
	}

	fclose(fp);

	return 0;
}
