/*
Your task is to calculate sum  of primes present as digits of given number N.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. The next T lines contains an integer N.

Output:
Print sum of primes in the digit

Constraints:
1 ≤ T ≤ 50
2 ≤ N ≤ 50000

Example:

Input:

2
333
686

Output:
9
0
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
	int t, n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int s=0;
	    while(n!=0){
	        int d=n%10;
	        if(prime(d))
	            s=s+d;
            n=n/10;
	    }
	    cout<<s<<endl;
	}
	return 0;
}
