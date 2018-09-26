/*
https://practice.geeksforgeeks.org/problems/prime-factors/0
Given a number N, print all its unique prime factors in increasing order.

Input : N = 100
Output: 2 5

Input : N = 35
Output: 5 7
Input:
The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N.

Output:
Print all prime factors in increasing order.

Constraints:
1 ≤ T ≤ 200
2 ≤ N ≤ 10000

Example:
Input:
2
100
35

Output:
2 5
5 7
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int prime(int x){
    if(x==1)
        return 0;
    if(x==2)
        return 1;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0)
            return 0;
    }
    return 1;
}
int main() {
	int t, n, k;
	cin>>t;
	while(t--){
	    cin>>n;
	    k=n;
	    if(prime(k)){
	        cout<<k<<"\n";
	        continue;
	    }
	    for(int i=2;i<=k;i++){
	        if(k%i==0)
	            if(prime(i))
	                cout<<i<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
