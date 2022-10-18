#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
	    int n;
	    cin>>n;
	    int a[n];
	    int b[n];
	    int s1=0,s2=0;
	    for (int i=0;i<n;i++) {
	        cin>>a[i];
	        s1+=a[i];
	    } 
	    for (int i=0;i<n;i++) {
	        cin>>b[i];
	        s2+=b[i];
	    }
	    if (s1>s2) {
	        cout<<"Alice"<<endl;
	    } else if (s2>s1) {
	        cout<<"Bob"<<endl;
	    } else if (s1==s2) {
	        cout<<"Draw"<<endl;
	    }
	}
	return 0;
}
