/* https://www.spoj.com/problems/FASHION/ */
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main() {
	int t,n,x;
	cin>>t;
	while(t--){
		cin>>n;
		vector<int>m,w;
		for(int i=0;i<n;i++){
			cin>>x;
			m.push_back(x);
		}
		long long int sum=0;
		for(int j=0;j<n;j++){
			cin>>x;
			w.push_back(x);
			//sum=sum+v[j]*x;
		}
		sort(m.begin(), m.end());
		sort(w.begin(), w.end());
		for(int i=0;i<n;i++)
			sum=sum+m[i]*w[i];
		cout<<sum<<endl;
	}
	return 0;
} 
