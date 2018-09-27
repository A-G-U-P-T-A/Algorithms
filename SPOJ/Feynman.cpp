/* https://www.spoj.com/problems/SAMER08F/ */
#include <iostream>
using namespace std;
 
int main() {
	int n,x;
	while(cin>>n){
		x=(n*(n+1)*(2*n+1))/6;
		if(x!=0)
		cout<<x<<"\n";
	}
	return 0;
} 
