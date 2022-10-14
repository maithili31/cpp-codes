#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int k;
	    cin>>n>>k;
	    if(n==k){
	        if(n==1)
	        cout<<"YES"<<endl;
	        else cout<<"NO"<<endl;
	    }
	    else if(n<((k+1)*k/2)) {
	    cout<<"NO"<<endl;
        }
	    else if(n>=(k*(k+1)/2)) {
	    cout<<"YES"<<endl;
        }
	}
	return 0;
}
