#include <iostream>
using namespace std;
int main() {
	int t, n, i, k, s1, s2;
	cin>>t;
	while(t--){
	    cin>>n;
	    s1=s2=0;
	    s1=(n*(n+1))/2;
	    for(i=1;i<n;i++){
	        cin>>k;
	        s2=s2+k;
	    }
	    cout<<(s1-s2)<<"\n";
	}
	return 0;
}
