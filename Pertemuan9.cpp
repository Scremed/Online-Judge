#include <stdio.h>

int printArr(int arr[], int size) {
	for(int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}

// QUICKSORT
void swap(int arr[], int idx1, int idx2) {
	int temp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = temp;	
}

int partition(int arr[], int low, int high) {
	int pivot = arr[high];
	
	int i = low - 1;
	
	for(int j = low; j < high; j++) {
		if(arr[j] < pivot) {
			i++;
			swap(arr, i, j);
		}
	}
	
	i++;
	swap(arr, i, high);
	return i;
}

void quickSort(int arr[], int low, int high) {
	if(low >= high) return;
	
	int partitionIdx = partition(arr, low, high);
	quickSort(arr, low, partitionIdx - 1);
	quickSort(arr, partitionIdx+1, high);
}

// MERGESORT
void merge(int arr[], int low, int mid, int high) {
	int leftSize = mid - low + 1; //ukuran array kiri
	int rightSize = high - mid; //ukuran array kanan
	
	int arrLeft[leftSize];
	int arrRight[rightSize];
	
	for(int i = 0; i < leftSize; i++) {
		arrLeft[i] = arr[i + low];
	} 
	
	for(int i = 0; i < rightSize; i++) {
		arrRight[i] = arr[i + mid + 1];
	}
	
	//declare index
	int arrIdx = low;
	int arrLeftIdx = 0;
	int arrRightIdx = 0;
	
	//ketika array di kiri dan kanan itu masih ada isi
	while(arrLeftIdx < leftSize && arrRightIdx < rightSize) {
		//jika nilai di array kiri pada index sekarang lebih kecil
		//dari nilai di array kanan pada index sekarang
		if(arrLeft[arrLeftIdx] < arrRight[arrRightIdx]) {
			arr[arrIdx] = arrLeft[arrLeftIdx];
			arrIdx++;
			arrLeftIdx++;
		} else {
			arr[arrIdx] = arrRight[arrRightIdx];
			arrIdx++;
			arrRightIdx++;
		}
	}
	
	//kondisi kalau array kiri masih ada
	while(arrLeftIdx < leftSize) {
		arr[arrIdx] = arrLeft[arrLeftIdx];
		arrIdx++;
		arrLeftIdx++;
	}
	
	while(arrRightIdx < rightSize) {
		arr[arrIdx] = arrRight[arrRightIdx];
		arrIdx++;
		arrRightIdx++;
	}
	
}

void mergeSort(int arr[], int low, int high) {
	if(low >= high) return;
	int mid = (high+low) / 2;
	
	mergeSort(arr, low, mid); ///kiri
	mergeSort(arr, mid+1, high); //kanan
	
	//proses conquer (penggabungan array)
	merge(arr, low, mid, high);
}

int main() {
	int arr[] = {8,2,4,7,1,3};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	mergeSort(arr, 0, size-1);
	printArr(arr, size);
	
	return 0;
}
