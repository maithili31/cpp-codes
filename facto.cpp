#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
	    int n;
	    cin>>n;
	    int count=0;
	    int ans=1;
	    for(int i=1;i<=n;i++) {
	        ans=ans*i;
	    }
	    while (ans%10==0) {
	        count++;
	        ans=ans/10;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
