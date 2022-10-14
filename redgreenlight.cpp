#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for (int i=1;i<=t;i++){
	    int count=0;
	    int n,k;
	    cin>>n;
	    cin>>k;
	    int h[n];
	    for (int j=0;j<n;j++){
	        cin>>h[j];
	    }
	    for (int j=0;j<n;j++){
	        if(h[j]>k)
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	    
	    
	}
	return 0;
}
