#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    int a[n];
	    int b[n];
	    int count=0;
	    for(int i=0;i<n;i++) {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++) {
	        cin>>b[i];
	    }
	    for(int i=0;i<n;i++) {
	        if((a[i]<=2*b[i]) && (b[i]<=2*a[i])) {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
