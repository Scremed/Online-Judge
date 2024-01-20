#include <stdio.h>
#include <string.h>

int N;

struct Cities {
    char name[1000];
    double temp;
    char metric;
};

void swap(struct Cities *a, struct Cities *b) {
    struct Cities temp = *a;
    *a = *b;
    *b = temp;
}

double convertToC(struct Cities city) {
    if (city.metric == 'F') {
        return ((city.temp - 32) * (5.0 / 9.0));
    } else {
        return city.temp;
    }
}

int compareCities(struct Cities city1, struct Cities city2) {
    double temp1 = convertToC(city1);
    double temp2 = convertToC(city2);

    if (temp1 < temp2) {
        return -1;
    } else if (temp1 > temp2) {
        return 1;
    } else {
        return strcmp(city1.name, city2.name);
    }
}

int partition(struct Cities city[], int low, int high) {
    struct Cities pivot = city[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (compareCities(city[j], pivot) <= 0) {
            i++;
            swap(&city[i], &city[j]);
        }
    }

    swap(&city[i + 1], &city[high]);
    return i + 1;
}

void sortCities(struct Cities city[], int low, int high) {
    if (low < high) {
        int pIndex = partition(city, low, high);

        sortCities(city, low, pIndex - 1);
        sortCities(city, pIndex + 1, high);
    }
}

int main() {
    FILE *fp = fopen("testdata.txt", "r");

    if (fp == NULL) {
        printf("File error.\n");
        return -1;
    }

    N = 0;
    struct Cities city[105];
    while (!feof(fp)) {
    	fscanf(fp, "%[^#]#%lf#%c\n", city[N].name,
                  &city[N].temp, &city[N].metric);
        N++;
    }

    sortCities(city, 0, N - 1);

    for (int i = 0; i < N; i++) {
        printf("%s is %.2lf%c\n", city[i].name,
               city[i].temp, city[i].metric);
    }

    fclose(fp);

    return 0;
}
