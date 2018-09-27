/* https://www.spoj.com/problems/CANDY3/ */
#include <iostream>
using namespace std;
int main() {
	long long int s,x;
	long long int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		s=0;
		for(int i=0;i<n;i++){
			cin>>x;
			s=(s+x)%n;
		}
		string st = s==0?"YES":"NO";
		cout<<st<<"\n";
	}
	return 0;
} 
