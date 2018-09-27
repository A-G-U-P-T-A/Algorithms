/* https://www.spoj.com/problems/FCTRL/ */
#include <iostream>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	while(n--){
		int count=0,x;
		cin>>x;
		while(x){
			count=count+x/5;
			x=x/5;
		}
		cout<<count<<"\n";
	}
	return 0;
}
