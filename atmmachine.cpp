#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k,i,x;
	    cin>>n>>k;
        int a[n];
	    for(i=0;i<n;i++){
            cin>>a[i];
	        if(a[i]>k){
	            cout<<"0";
	        }else{
	            cout<<"1";
	            k=k-a[i];
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
