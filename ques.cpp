#include <iostream>
using namespace std;

int main() {
	int t,a,b;
	cin>>t;
	while (t--) {
	    cin>>a>>b;
	    int gcd,lcm;
	    int m= max(a,b);
	    for (int i=1;i<=m;++i) {
	       if (a%i==0 && b%i==0) {
	           gcd=i;
	           }
	        }
	    cout<<gcd<<endl;
	    
	    lcm = (a*b)/gcd;
	    cout<<lcm<<endl;
	}
	return 0;
}
