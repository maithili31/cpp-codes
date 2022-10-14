#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
	    int b;
	    cin>>b;
	    int n=(b/2)-1;
	    cout<<(n*(n+1))/2<<endl;
	}
	return 0;
}
