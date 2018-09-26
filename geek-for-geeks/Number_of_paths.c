/*
https://practice.geeksforgeeks.org/problems/number-of-paths/0
The problem is to count all the possible paths from top left to bottom right of a  MxN matrix with the constraints that from each cell you can either move to right or down.

Input:
The first line of input contains an integer T, denoting the number of test cases.
The first line of each test case is M and N, M is number of rows and N is number of columns.

Output:
For each test case, print the number of paths.

Constraints:
1 ≤ T ≤ 30
1 ≤ M,N ≤ 10

Example:
Input
2
3 3
2 8
Output
6
8
*/
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
