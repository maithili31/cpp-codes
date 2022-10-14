#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
	    int count=0;
	    int n,k;
	    cin>>n;
	    cin>>k;
	    int h[n];
	    for (int i=0;i<n;i++){
	        cin>>h[i];
	    }
	    for (int i=0;i<n;i++){
	        if(h[i]>k)
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	    
	    
	}
	return 0;
}
