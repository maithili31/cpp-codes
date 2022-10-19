#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
	    int mt,n,sum;
	    cin>>mt>>n>>sum;
	    int a=0;
	    if (mt*n>sum) {
	        if (sum>=n) {
	            mt=sum/n;
	            a=sum%n;
	        } else {
	            break;
	        }
	    }
	    cout<<(mt*(n*n))+(a*a)<<endl;
	}
	return 0;
}
