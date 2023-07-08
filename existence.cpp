#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    long long x,y;
	    cin>>x>>y;
	    if((x*x)==(2*y)) {
	        cout<<"yes"<<endl;
	    } else {
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
