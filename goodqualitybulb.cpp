#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
	    int n,x;
	    cin>>n>>x;
	    int a[n];
	    int sum=0;
	    for (int i=0;i<n-1;i++) {
	        cin>>a[i];
	        sum+=a[i];
	    }
	    int y=(x*n)-sum;
	    if (y>=0) {
	        cout<<y<<endl;   
	    } else {
	        cout<<0<<endl;
	    }
	}
	return 0;
}
