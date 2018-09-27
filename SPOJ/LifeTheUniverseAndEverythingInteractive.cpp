/* https://www.spoj.com/problems/EXPECT/ */
#include <iostream>
using namespace std;
 
int main() {
	int m;
	while(cin>>m){
		cout<<m<<"\n";
		if(m==42)
			break;
	}
	return 0;
} 
