#include <stdio.h>

int linearSearch(int arr[], int size, int find) {
	for(int i = 0; i < size; i++) {
		if(arr[i] == find) {
			return i;
		}
	}
	return -1;
} 

int iterativeBinarySearch(int arr[], int l, int r, int find) {
	while(l <= r) {
		int mid = l + (r-l)/2;
		if(arr[mid] == find) {
			return mid;
		} else if(arr[mid] < find) {
			l = mid + 1;
		} else {
			r = mid - 1;
		}
	}
	
	return -1;
}

int iterativeInterpolationSearch(int arr[], int l, int r, int find) {
	while(l <= r) {
		int mid = l + ((find - arr[l] *(r - l) / (arr[r] - arr[l])));
		if(arr[mid] == find) {
			return mid;
		} else if(arr[mid] < find) {
			//kecilkan area seacrh ke arah elemen/
			//arah yang lebih kecil
			l = mid + 1;
		} else {
			r = mid - 1;
		}
	}
	
	return -1;
}

int recursiveBinarySearch(int arr[], int l, int r, int find) {
	if(l <=r) {
//		recursion tetap jalan
		int mid = l + (r-l)/2;
		if(arr[mid] == find) {
			return mid;
		} else if(arr[mid] < find) {
			return recursiveBinarySearch(arr, mid+1, r, find);
		} else {
			return recursiveBinarySearch(arr, l, mid-1, find);
		}
	}
	return -1;
}

int recursiveInterpolationSearch(int arr[], int l, int r, int find) {
	if(l <=r) {
//		recursion tetap jalan
		int mid = l + ((find - arr[l] *(r - l) / (arr[r] - arr[l])));
		if(arr[mid] == find) {
			return mid;
		} else if(arr[mid] < find) {
			return recursiveInterpolationSearch(arr, mid+1, r, find);
		} else {
			return recursiveInterpolationSearch(arr, l, mid-1, find);
		}
	}
	return -1;
}

int main() {
	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	int position = recursiveBinarySearch(arr, 0, size-1, 4);
	printf("4 is at index %d", position);
	
	return 0;
}
