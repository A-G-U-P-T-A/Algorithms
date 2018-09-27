/* https://www.spoj.com/problems/TEST/ */
#include <stdio.h>
int main(void) {
	int arr[10000];
	int i = 1;
	arr[0] = 1;
	while(arr[i-1]<100){
		scanf("%d",&arr[i]);
		i++;
	}
	int j=1;
	while(j<i){
		if(arr[j]==42)
		break;
		printf("%d\n",arr[j]);
		j++;
	}
	return 0;
}
 
