/* https://www.spoj.com/problems/COINS/ */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
map<int, long long>m;
long long f(int n){
	if(n==0)
		return 0;
	if(m[n]!=0)
		return m[n];
	else{
		long long int a = f(n/2)+f(n/3)+f(n/4);
		if(a>n)
			m[n]=a;
		else
			m[n]=n;
	}
	return m[n];
}
int main() {
	int x;
	while(cin>>x)
		cout<<f(x)<<"\n";
	return 0;
} 
