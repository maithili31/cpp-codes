#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++) {
	        cin>>a[i];
	    }
	    int x=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]>=k) {
	            a[i+1]=a[i+1]+a[i]-k;
	        } else {
	            x =i+1;
	            break;
	        }
	    }
	    if(x==0)
	      cout<<"yes"<<endl;
	    else
	      cout<<"no"<<t<<endl;
	}
	return 0;
}
