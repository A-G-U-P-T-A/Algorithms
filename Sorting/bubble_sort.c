//bubble sort
//time complexity worst case O(n^2)
#include<stdio.h>
void sorting(int arr[]){
	int i, j, d, n;
	n = sizeof(arr)/sizeof(int);
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				d = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = d;
			}
		}
	}
}
int main(){
	int arr[] = {1,2,4,3,2,7};
	sorting(arr);
	int i, j;
	j = sizeof(arr)/sizeof(int);
	for(i=0;i<;i++)
		System.out.println(arr[j]);
	return 0;
}
