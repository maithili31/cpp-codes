#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
	    int n,x;
	    cin>>n>>x;
	    int a[n];
	    for (int i=0;i<n;i++) {
	        cin>>a[i];
	    }
	    for (int i=0;i<n;i++) {
	        for (int j=i+1;j<n;j++) {
	            if (a[j]<a[i]) {
	                int temp=a[i];
	                a[i]=a[j];
	                a[j]=temp;
	            }
	        }
	    }
	    for (int i=0;i<n;i++) {
            cout<<a[i]<<" ";
        }
        cout<<a[n-x]-1<<endl;
        cout<<endl;
	    
	}
	return 0;
}
