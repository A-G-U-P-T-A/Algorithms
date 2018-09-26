#include <stdio.h>
int main() {
	int t, n, i, arr[501], a;
	scanf("%d", &t);
	while(t--){
	    scanf("%d", &n);
	    for(i=0;i<n;i++){
	        scanf("%d", &arr[i]);
	    }
	    for(i=0;i<n-1;i++){
	        a = (arr[i]>arr[i+1] ? arr[i+1] : -1);
	        printf("%d ", a);
	    }
	    printf("-1\n");
	}
	return 0;
}
