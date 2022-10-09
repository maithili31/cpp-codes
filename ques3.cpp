#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
	    int n,a[n],b[n];
	    cin>>n;
	    int x=0,y=0;
	    for (int i=0;i<n;i++) {
	        cin>>a[i];
	    }
	    for (int i=0;i<n;i++) {
	        cin>>b[i];
	    }
	    for (int i=0;i<n;i++) {
	        if (a[i]>b[i]) {
	            x++;
	        }
	        if (a[i]<b[i]) {
	            y++;
	        }
	    }
	    if (x>=y) {
	        cout<<x<<endl;
	    } else {
	        cout<<y<<endl;
	    }
	}
	return 0;
}
