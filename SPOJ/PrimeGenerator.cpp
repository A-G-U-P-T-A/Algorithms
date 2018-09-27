/* https://www.spoj.com/problems/PRIME1/ */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool prime(int x){
	if(x<=0)
		return false;
	if(x==1)
		return false;
	for(int i=2;i<=(int)sqrt(x);i++){
		if(x%i==0)
			return false;
	}
	return true;
}
int main() {
	int t,m,n;
	cin>>t;
	while(t--){
		cin>>m>>n;
		for(int i=m;i<=n;i++){
			if(prime(i))
				cout<<i<<endl;
		}
		cout<<endl;
	}
	return 0;
} 
