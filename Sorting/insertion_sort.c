#include <stdio.h>
#include <math.h>
void sorting(int arr[]){
	int i, key, j, n;
	n = sizeof(arr)/sizeof(int);
	for (i = 1; i < n; i++){
		key = arr[i];
		j = i-1;
		while (j >= 0 && arr[j] > key){
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1] = key;
	}
}
int main(){
	int arr = {1,4,3,7,2};
	sorting(arr);
	int i, j = sizeof(arr)/sizeof(int);
	for(i=0;i<j;i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
