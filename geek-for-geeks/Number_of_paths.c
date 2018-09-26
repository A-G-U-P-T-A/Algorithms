#include<stdio.h>
int  Paths(int m, int n)
{
   if (m == 1 || n == 1)
        return 1;
   return  Paths(m-1, n) + Paths(m, n-1);
}
 

int main() {
	//code
	int t, m, n;
	scanf("%d", &t);
	while(t--){
	    scanf("%d%d", &m, &n);
	    printf("%d\n", Paths(m, n));
	}
	return 0;
}
