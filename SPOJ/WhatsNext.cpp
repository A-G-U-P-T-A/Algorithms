/* https://www.spoj.com/problems/ACPC10A/ */
#include <iostream>
using namespace std;
 
int main() {
	int a, b, c, n;
	while(cin>>a>>b>>c){
		if(a==0&&b==0&&c==0)
			break;
		if(b-a==c-b)
			cout<<"AP "<<c+(b-a)<<"\n";
		else if(c/b==b/a)
			cout<<"GP "<<c*(b/a)<<"\n";
	}
	return 0;
} 
