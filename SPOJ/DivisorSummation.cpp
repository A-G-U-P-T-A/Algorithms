/* https://www.spoj.com/problems/DIVSUM/ */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t,n,sum,k;
	cin>>t;
	while(t--){
		sum=0;
		cin>>n;
		for (int i=1; i<=sqrt(n); i++){
			if (n%i == 0){
            			if (n/i == i)
            				//cout<<i<<" ";
            				sum=sum+i;
            			else
            				//cout<<i<<" "<<n/i<<" ";
            				sum=sum+i+n/i;
			}
		}
		cout<<sum-n<<endl;
	}
	return 0;
} 
